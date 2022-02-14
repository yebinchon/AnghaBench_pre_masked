
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfrm_state_afinfo* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int ** VAR_3 ;
 int VAR_4 ;

int FUNC_7(struct xfrm_state_afinfo *VAR_5)
{
 int VAR_6 = 0, VAR_7 = VAR_5->family;

 if (FUNC_1(VAR_7 >= VAR_2))
  return -VAR_0;

 FUNC_4(&VAR_4);
 if (FUNC_2(VAR_3[VAR_5->family] != ((void*)0))) {
  if (FUNC_3(VAR_3[VAR_7]) != VAR_5)
   VAR_6 = -VAR_1;
  else
   FUNC_0(VAR_3[VAR_5->family], ((void*)0));
 }
 FUNC_5(&VAR_4);
 FUNC_6();
 return VAR_6;
}
