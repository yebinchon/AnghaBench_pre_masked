
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, zend_long VAR_1)
{
 zend_long VAR_2, VAR_3, VAR_4;
 char VAR_5;


 VAR_2 = VAR_1;

 if (VAR_2 <= 1) {
  return;
 }

 VAR_4 = VAR_2;

 while (--VAR_4) {
  VAR_3 = FUNC_0(0, VAR_4);
  if (VAR_3 != VAR_4) {
   VAR_5 = VAR_0[VAR_4];
   VAR_0[VAR_4] = VAR_0[VAR_3];
   VAR_0[VAR_3] = VAR_5;
  }
 }
}
