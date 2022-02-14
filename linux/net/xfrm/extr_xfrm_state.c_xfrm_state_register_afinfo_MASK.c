
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {size_t family; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct xfrm_state_afinfo*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int ** VAR_3 ;
 int VAR_4 ;

int FUNC_5(struct xfrm_state_afinfo *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_0(VAR_5->family >= VAR_2))
  return -VAR_0;

 FUNC_2(&VAR_4);
 if (FUNC_4(VAR_3[VAR_5->family] != ((void*)0)))
  VAR_6 = -VAR_1;
 else
  FUNC_1(VAR_3[VAR_5->family], VAR_5);
 FUNC_3(&VAR_4);
 return VAR_6;
}
