
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_mode {int family; } ;




 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct xfrm_mode* VAR_1 ;
 struct xfrm_mode* VAR_2 ;

__attribute__((used)) static const struct xfrm_mode *FUNC_1(unsigned int VAR_3, int VAR_4)
{
 const struct xfrm_mode *VAR_5;

 if (FUNC_0(VAR_3 >= VAR_0))
  return ((void*)0);

 switch (VAR_4) {
 case 129:
  VAR_5 = &VAR_1[VAR_3];
  if (VAR_5->family == VAR_4)
   return VAR_5;
  break;
 case 128:
  VAR_5 = &VAR_2[VAR_3];
  if (VAR_5->family == VAR_4)
   return VAR_5;
  break;
 default:
  break;
 }

 return ((void*)0);
}
