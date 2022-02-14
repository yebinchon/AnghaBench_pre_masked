
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_input_afinfo {size_t family; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_input_afinfo const*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 struct xfrm_input_afinfo const** VAR_1 ;
 int VAR_2 ;

int FUNC_6(const struct xfrm_input_afinfo *VAR_3)
{
 int VAR_4 = 0;

 FUNC_2(&VAR_2);
 if (FUNC_1(VAR_1[VAR_3->family] != ((void*)0))) {
  if (FUNC_5(VAR_1[VAR_3->family] != VAR_3))
   VAR_4 = -VAR_0;
  else
   FUNC_0(VAR_1[VAR_3->family], ((void*)0));
 }
 FUNC_3(&VAR_2);
 FUNC_4();
 return VAR_4;
}
