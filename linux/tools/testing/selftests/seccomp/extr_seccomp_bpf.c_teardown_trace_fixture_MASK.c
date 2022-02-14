
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __test_metadata {scalar_t__ passed; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int*,int ) ;

void FUNC_4(struct __test_metadata *VAR_1,
       pid_t VAR_2)
{
 if (VAR_2) {
  int VAR_3;




  FUNC_0(0, FUNC_2(VAR_2, VAR_0));
  FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_3, 0));
  if (FUNC_1(VAR_3))
   VAR_1->passed = 0;
 }
}
