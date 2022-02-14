
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_type {int owner; } ;
struct xfrm_state_afinfo {struct xfrm_type* type_ipip6; struct xfrm_type* type_routing; struct xfrm_type* type_dstopts; struct xfrm_type* type_ipip; struct xfrm_type* type_esp; struct xfrm_type* type_ah; struct xfrm_type* type_comp; } ;
 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned short,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct xfrm_state_afinfo* FUNC_4 (unsigned short) ;

__attribute__((used)) static const struct xfrm_type *FUNC_5(u8 VAR_0, unsigned short VAR_1)
{
 const struct xfrm_type *VAR_2 = ((void*)0);
 struct xfrm_state_afinfo *VAR_3;
 int VAR_4 = 0;

retry:
 VAR_3 = FUNC_4(VAR_1);
 if (FUNC_3(VAR_3 == ((void*)0)))
  return ((void*)0);

 switch (VAR_0) {
 case 133:
  VAR_2 = VAR_3->type_comp;
  break;
 case 134:
  VAR_2 = VAR_3->type_ah;
  break;
 case 131:
  VAR_2 = VAR_3->type_esp;
  break;
 case 130:
  VAR_2 = VAR_3->type_ipip;
  break;
 case 132:
  VAR_2 = VAR_3->type_dstopts;
  break;
 case 128:
  VAR_2 = VAR_3->type_routing;
  break;
 case 129:
  VAR_2 = VAR_3->type_ipip6;
  break;
 default:
  break;
 }

 if (FUNC_3(VAR_2 && !FUNC_2(VAR_2->owner)))
  VAR_2 = ((void*)0);

 FUNC_0();

 if (!VAR_2 && !VAR_4) {
  FUNC_1("xfrm-type-%d-%d", VAR_1, VAR_0);
  VAR_4 = 1;
  goto retry;
 }

 return VAR_2;
}
