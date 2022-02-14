
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 int VAR_3 = FUNC_0(sizeof(struct netconfmsg))
   + FUNC_1(4);
 bool VAR_4 = 0;

 if (VAR_2 == VAR_0)
  VAR_4 = 1;

 if (VAR_4 || VAR_2 == VAR_1)
  VAR_3 += FUNC_1(4);

 return VAR_3;
}
