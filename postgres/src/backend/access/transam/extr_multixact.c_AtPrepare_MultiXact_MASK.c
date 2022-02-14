
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MultiXactId ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int VAR_2 ;

void
FUNC_2(void)
{
 MultiXactId VAR_3 = VAR_1[VAR_0];

 if (FUNC_0(VAR_3))
  FUNC_1(VAR_2, 0,
          &VAR_3, sizeof(MultiXactId));
}
