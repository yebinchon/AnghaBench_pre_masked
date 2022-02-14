
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (char const*) ;

bool FUNC_6(const char *VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0;

 FUNC_2();
 VAR_3 = FUNC_0(VAR_1);
 for (; VAR_3; VAR_3 = FUNC_0(VAR_1)) {
  VAR_4 = 1;
  if (VAR_3 == 1) {
   FUNC_4(1);
  } else if (VAR_3 == 2) {
   while (FUNC_0(VAR_1))
    FUNC_1();
  } else {
   FUNC_4(FUNC_3(VAR_0));
  }
  FUNC_5(VAR_2);
 }
 return VAR_4;
}
