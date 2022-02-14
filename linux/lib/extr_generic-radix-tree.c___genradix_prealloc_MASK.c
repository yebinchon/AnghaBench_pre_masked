
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __genradix {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct __genradix*,size_t,int ) ;

int FUNC_1(struct __genradix *VAR_2, size_t VAR_3,
   gfp_t VAR_4)
{
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_1)
  if (!FUNC_0(VAR_2, VAR_5, VAR_4))
   return -VAR_0;

 return 0;
}
