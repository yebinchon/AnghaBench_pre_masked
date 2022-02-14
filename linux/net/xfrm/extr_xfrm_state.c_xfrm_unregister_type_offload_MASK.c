
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_type_offload {int proto; } ;
struct xfrm_state_afinfo {struct xfrm_type_offload const* type_offload_esp; } ;



 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfrm_state_afinfo* FUNC_3 (unsigned short) ;

void FUNC_4(const struct xfrm_type_offload *VAR_0,
      unsigned short VAR_1)
{
 struct xfrm_state_afinfo *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_2 == ((void*)0)))
  return;

 switch (VAR_0->proto) {
 case 128:
  FUNC_0(VAR_2->type_offload_esp != VAR_0);
  VAR_2->type_offload_esp = ((void*)0);
  break;
 default:
  FUNC_0(1);
  break;
 }
 FUNC_1();
}
