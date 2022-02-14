
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int W_CHAR ;
typedef int FILE ;


 int FUNC_0 (char const**,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (char const* const,char*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (char const* const,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,size_t,int,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int ) ;
 size_t FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (size_t) ;
 int VAR_2 ;

int FUNC_10(const char* const VAR_3,
                      const uint8_t** VAR_4, size_t* VAR_5) {
  int VAR_6;
  uint8_t* VAR_7;
  size_t VAR_8;
  FILE* VAR_9;
  const int VAR_10 = (VAR_3 == ((void*)0)) || !FUNC_3(VAR_3, "-");

  if (VAR_10) return FUNC_0(VAR_4, VAR_5);

  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) return 0;
  *VAR_4 = ((void*)0);
  *VAR_5 = 0;

  VAR_9 = FUNC_1(VAR_3, "rb");
  if (VAR_9 == ((void*)0)) {
    FUNC_2(VAR_2, "cannot open input file '%s'\n", (const W_CHAR*)VAR_3);
    return 0;
  }
  FUNC_7(VAR_9, 0, VAR_0);
  VAR_8 = FUNC_8(VAR_9);
  FUNC_7(VAR_9, 0, VAR_1);

  VAR_7 = (uint8_t*)FUNC_9(VAR_8 + 1);
  if (VAR_7 == ((void*)0)) {
    FUNC_4(VAR_9);
    FUNC_2(VAR_2, "memory allocation failure when reading file %s\n",
             (const W_CHAR*)VAR_3);
    return 0;
  }
  VAR_6 = (FUNC_5(VAR_7, VAR_8, 1, VAR_9) == 1);
  FUNC_4(VAR_9);

  if (!VAR_6) {
    FUNC_2(VAR_2, "Could not read %d bytes of data from file %s\n",
             (int)VAR_8, (const W_CHAR*)VAR_3);
    FUNC_6(VAR_7);
    return 0;
  }
  VAR_7[VAR_8] = '\0';
  *VAR_4 = VAR_7;
  *VAR_5 = VAR_8;
  return 1;
}
