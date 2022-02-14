
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int W_CHAR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const**,int) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (char const* const,int const**,size_t*) ;
 int FUNC_4 (int const*,size_t) ;
 int FUNC_5 (char*,int const*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*,...) ;
 int VAR_0 ;
 int FUNC_9 (char const*,char*) ;

int FUNC_10(int VAR_1, const char* VAR_2[]) {
  int VAR_3;
  int VAR_4 = 0;
  int VAR_5 = 1;

  FUNC_2(VAR_1, VAR_2);

  for (VAR_3 = 1; VAR_5 && VAR_3 < VAR_1; ++VAR_3) {
    if (!FUNC_9(VAR_2[VAR_3], "-quiet")) {
      VAR_4 = 1;
    } else if (!FUNC_9(VAR_2[VAR_3], "-help") || !FUNC_9(VAR_2[VAR_3], "-h")) {
      FUNC_8("webp_quality [-h][-quiet] webp_files...\n");
      FUNC_0(0);
    } else {
      const char* const VAR_6 = (const char*)FUNC_1(VAR_2, VAR_3);
      const uint8_t* VAR_7 = ((void*)0);
      size_t VAR_8 = 0;
      int VAR_9;
      VAR_5 = FUNC_3(VAR_6, &VAR_7, &VAR_8);
      if (!VAR_5) break;
      VAR_9 = FUNC_4(VAR_7, VAR_8);
      if (!VAR_4) FUNC_5("[%s] ", (const W_CHAR*)VAR_6);
      if (VAR_9 < 0) {
        FUNC_6(VAR_0, "Not a WebP file, or not a lossy WebP file.\n");
        VAR_5 = 0;
      } else {
        if (!VAR_4) {
          FUNC_8("Estimated quality factor: %d\n", VAR_9);
        } else {
          FUNC_8("%d\n", VAR_9);
        }
      }
      FUNC_7((void*)VAR_7);
    }
  }
  FUNC_0(VAR_5 ? 0 : 1);
}
