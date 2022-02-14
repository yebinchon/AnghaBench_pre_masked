
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef char W_CHAR ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,size_t,char*,char const*,char const*,int ) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*,...) ;
 int FUNC_10 (char const*,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(const char VAR_2[], const char VAR_3[],
                     uint32_t VAR_4, const uint8_t VAR_5[],
                     int VAR_6, int VAR_7) {
  int VAR_8 = 0;
  size_t VAR_9;
  int VAR_10;
  const W_CHAR* VAR_11 = ((void*)0);
  W_CHAR* VAR_12 = ((void*)0);
  FILE* VAR_13 = ((void*)0);
  const char* VAR_14;

  if (VAR_3 == ((void*)0)) VAR_3 = (const char*)FUNC_0(".");

  VAR_11 = FUNC_5(VAR_2, '/');
  VAR_11 = (VAR_11 == ((void*)0)) ? (const W_CHAR*)VAR_2 : VAR_11 + 1;
  VAR_9 = FUNC_4(VAR_3) + 1 + FUNC_4(VAR_11)
          + FUNC_11("_frame_") + FUNC_11(".pam") + 8;
  VAR_12 = (W_CHAR*)FUNC_7(VAR_9 * sizeof(*VAR_12));
  if (VAR_12 == ((void*)0)) goto End;

  if (FUNC_3(VAR_12, VAR_9, "%s/%s_frame_%d.pam",
                (const W_CHAR*)VAR_3, VAR_11, VAR_4) < 0) {
    FUNC_9(&VAR_1, "Error while generating file name\n");
    goto End;
  }

  VAR_13 = FUNC_1(VAR_12, "wb");
  if (VAR_13 == ((void*)0)) {
    FUNC_2(VAR_1, "Error opening file for writing: %s\n", VAR_12);
    VAR_8 = 0;
    goto End;
  }
  if (FUNC_9(VAR_13, "P7\nWIDTH %d\nHEIGHT %d\n"
              "DEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n",
              VAR_6, VAR_7) < 0) {
    FUNC_2(VAR_1, "Write error for file %s\n", VAR_12);
    goto End;
  }
  VAR_14 = (const char*)VAR_5;
  for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
    if (FUNC_10(VAR_14, VAR_6 * VAR_0, 1, VAR_13) != 1) {
      FUNC_2(VAR_1, "Error writing to file: %s\n", VAR_12);
      goto End;
    }
    VAR_14 += VAR_6 * VAR_0;
  }
  VAR_8 = 1;
 End:
  if (VAR_13 != ((void*)0)) FUNC_8(VAR_13);
  FUNC_6(VAR_12);
  return VAR_8;
}
