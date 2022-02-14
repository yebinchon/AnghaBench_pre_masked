
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(int (VAR_3)(bool VAR_4))
{
 int VAR_5 = 1;

 if (FUNC_0(VAR_0 | VAR_2 | VAR_1)) {
  FUNC_2("mlockall");
  return VAR_5;
 }

 VAR_5 = VAR_3(0);
 FUNC_1();
 return VAR_5;
}
