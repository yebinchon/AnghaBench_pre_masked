
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int W_CHAR ;
typedef int FILE ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (char const* const,char*) ;
 int FUNC_2 (int ,char*,int const*) ;
 int FUNC_3 (char const* const,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*,size_t,int,int *) ;
 int VAR_0 ;
 int * VAR_1 ;

int FUNC_6(const char* const VAR_2,
                       const uint8_t* VAR_3, size_t VAR_4) {
  int VAR_5;
  FILE* VAR_6;
  const int VAR_7 = (VAR_2 == ((void*)0)) || !FUNC_3(VAR_2, "-");

  if (VAR_3 == ((void*)0)) {
    return 0;
  }
  VAR_6 = VAR_7 ? FUNC_0(VAR_1) : FUNC_1(VAR_2, "wb");
  if (VAR_6 == ((void*)0)) {
    FUNC_2(VAR_0, "Error! Cannot open output file '%s'\n",
             (const W_CHAR*)VAR_2);
    return 0;
  }
  VAR_5 = (FUNC_5(VAR_3, VAR_4, 1, VAR_6) == 1);
  if (VAR_6 != VAR_1) FUNC_4(VAR_6);
  return VAR_5;
}
