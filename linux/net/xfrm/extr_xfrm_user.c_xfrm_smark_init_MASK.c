
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_mark {int v; int m; } ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (struct nlattr*) ;

__attribute__((used)) static void FUNC_1(struct nlattr **VAR_2, struct xfrm_mark *VAR_3)
{
 if (VAR_2[VAR_0]) {
  VAR_3->v = FUNC_0(VAR_2[VAR_0]);
  if (VAR_2[VAR_1])
   VAR_3->m = FUNC_0(VAR_2[VAR_1]);
  else
   VAR_3->m = 0xffffffff;
 } else {
  VAR_3->v = VAR_3->m = 0;
 }
}
