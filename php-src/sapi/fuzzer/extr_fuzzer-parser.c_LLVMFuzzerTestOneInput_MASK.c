
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int const*,size_t) ;

int FUNC_3(const uint8_t *VAR_0, size_t VAR_1) {
 char *VAR_2;
 if (VAR_1 > 32 * 1024) {


  return 0;
 }

 VAR_2 = FUNC_1(VAR_1+1);
 FUNC_2(VAR_2, VAR_0, VAR_1);
 VAR_2[VAR_1] = '\0';

 FUNC_0("fuzzer.php", VAR_2, VAR_1);


 return 0;
}
