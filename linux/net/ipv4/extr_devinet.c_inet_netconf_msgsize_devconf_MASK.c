
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_7)
{
 int VAR_8 = FUNC_0(sizeof(struct netconfmsg))
     + FUNC_1(4);
 bool VAR_9 = 0;

 if (VAR_7 == VAR_0)
  VAR_9 = 1;

 if (VAR_9 || VAR_7 == VAR_2)
  VAR_8 += FUNC_1(4);
 if (VAR_9 || VAR_7 == VAR_6)
  VAR_8 += FUNC_1(4);
 if (VAR_9 || VAR_7 == VAR_4)
  VAR_8 += FUNC_1(4);
 if (VAR_9 || VAR_7 == VAR_1)
  VAR_8 += FUNC_1(4);
 if (VAR_9 || VAR_7 == VAR_5)
  VAR_8 += FUNC_1(4);
 if (VAR_9 || VAR_7 == VAR_3)
  VAR_8 += FUNC_1(4);

 return VAR_8;
}
