
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 () ;

List *
FUNC_5(bool VAR_3)
{
 List *VAR_4;

 FUNC_4();
 if (VAR_2)
 {
  FUNC_0(1);
  FUNC_4();
 }

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_3)
 {
  while (VAR_4 && FUNC_1(VAR_4) != VAR_0)
   VAR_4 = FUNC_3(VAR_4);
 }

 return VAR_4;
}
