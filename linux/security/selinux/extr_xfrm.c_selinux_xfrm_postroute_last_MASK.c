
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {struct xfrm_state* xfrm; } ;
struct common_audit_data {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_1 (struct xfrm_state*) ;
 int VAR_3 ;
 struct dst_entry* FUNC_2 (struct sk_buff*) ;
 struct dst_entry* FUNC_3 (struct dst_entry*) ;

int FUNC_4(u32 VAR_4, struct sk_buff *VAR_5,
    struct common_audit_data *VAR_6, u8 VAR_7)
{
 struct dst_entry *VAR_8;

 switch (VAR_7) {
 case 130:
 case 128:
 case 129:



  return 0;
 default:
  break;
 }

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8) {
  struct dst_entry *VAR_9;

  for (VAR_9 = VAR_8; VAR_9 != ((void*)0); VAR_9 = FUNC_3(VAR_9)) {
   struct xfrm_state *VAR_10 = VAR_9->xfrm;

   if (VAR_10 && FUNC_1(VAR_10))
    return 0;
  }
 }




 return FUNC_0(&VAR_3, VAR_4, VAR_2,
       VAR_1, VAR_0, VAR_6);
}
