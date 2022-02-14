
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,char const*) ;
 char** VAR_2 ;
 size_t FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,int*) ;
 char* VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_8(char *VAR_5, char *VAR_6, char *VAR_7, int *VAR_8, int VAR_9)
{
 int VAR_10 = 0;
 char *VAR_11 = VAR_3, *VAR_12;
 size_t VAR_13 = 0, VAR_14, VAR_15;
 int (*VAR_16)(const char *, const char *) = ((void*)0);


 if (!VAR_4) {
  FUNC_3(VAR_2[VAR_0], VAR_8);
  return -1;
 }

 FUNC_0();

 if (VAR_9 == 's')
  VAR_16 = &FUNC_5;
 else
  VAR_16 = &FUNC_1;

 while (VAR_13 < VAR_4) {
  VAR_14 = FUNC_4(VAR_11);
  VAR_12 = FUNC_6(VAR_11);
  VAR_15 = FUNC_2(VAR_6, VAR_12, VAR_7);
  FUNC_7(VAR_7 + VAR_15 - 1, VAR_5, VAR_1 - VAR_15 - 1);

  if (!VAR_16(VAR_11, VAR_7))
   ++VAR_10;

  VAR_13 += VAR_14 + 1;
  VAR_11 += VAR_14 + 1;
 }

 if (!VAR_10)
  FUNC_3("none created", VAR_8);

 return VAR_10;
}
