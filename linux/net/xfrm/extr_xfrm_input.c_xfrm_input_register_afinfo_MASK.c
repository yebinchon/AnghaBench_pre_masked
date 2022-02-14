
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_input_afinfo {size_t family; } ;


 size_t FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,struct xfrm_input_afinfo const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int ** VAR_2 ;
 int VAR_3 ;

int FUNC_6(const struct xfrm_input_afinfo *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_1(VAR_4->family >= FUNC_0(VAR_2)))
  return -VAR_0;

 FUNC_3(&VAR_3);
 if (FUNC_5(VAR_2[VAR_4->family] != ((void*)0)))
  VAR_5 = -VAR_1;
 else
  FUNC_2(VAR_2[VAR_4->family], VAR_4);
 FUNC_4(&VAR_3);
 return VAR_5;
}
