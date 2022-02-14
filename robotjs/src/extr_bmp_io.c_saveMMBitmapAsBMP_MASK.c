
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MMBitmapRef ;
typedef int FILE ;


 int * FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,size_t,int,int *) ;

int FUNC_5(MMBitmapRef VAR_0, const char *VAR_1)
{
 FILE *VAR_2;
 size_t VAR_3;
 uint8_t *VAR_4;

 if ((VAR_2 = FUNC_2(VAR_1, "wb")) == ((void*)0)) return -1;

 if ((VAR_4 = FUNC_0(VAR_0, &VAR_3)) == ((void*)0)) {
  FUNC_1(VAR_2);
  return -1;
 }

 if (FUNC_4(VAR_4, VAR_3, 1, VAR_2) == 0) {
  FUNC_3(VAR_4);
  FUNC_1(VAR_2);
  return -1;
 }

 FUNC_3(VAR_4);
 FUNC_1(VAR_2);
 return 0;
}
