
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_type_offload {int owner; } ;
struct xfrm_state_afinfo {struct xfrm_type_offload* type_offload_esp; } ;



 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned short,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct xfrm_state_afinfo* FUNC_4 (unsigned short) ;

__attribute__((used)) static const struct xfrm_type_offload *
FUNC_5(u8 VAR_0, unsigned short VAR_1, bool VAR_2)
{
 const struct xfrm_type_offload *VAR_3 = ((void*)0);
 struct xfrm_state_afinfo *VAR_4;

retry:
 VAR_4 = FUNC_4(VAR_1);
 if (FUNC_3(VAR_4 == ((void*)0)))
  return ((void*)0);

 switch (VAR_0) {
 case 128:
  VAR_3 = VAR_4->type_offload_esp;
  break;
 default:
  break;
 }

 if ((VAR_3 && !FUNC_2(VAR_3->owner)))
  VAR_3 = ((void*)0);

 FUNC_0();

 if (!VAR_3 && VAR_2) {
  FUNC_1("xfrm-offload-%d-%d", VAR_1, VAR_0);
  VAR_2 = 0;
  goto retry;
 }

 return VAR_3;
}
