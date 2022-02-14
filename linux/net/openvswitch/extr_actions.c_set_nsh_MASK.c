
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_6__ {void* path_hdr; void* ttl; void* flags; } ;
struct TYPE_8__ {int context; TYPE_2__ base; } ;
struct sw_flow_key {TYPE_4__ nsh; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int path_hdr; int ttl; int flags; } ;
struct ovs_key_nsh {int * context; TYPE_1__ base; } ;
struct TYPE_7__ {void** context; } ;
struct nshhdr {void* path_hdr; int mdtype; TYPE_3__ md1; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 void* FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int ,void**,int) ;
 int FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (struct nshhdr*) ;
 void* FUNC_4 (struct nshhdr*) ;
 struct nshhdr* FUNC_5 (struct sk_buff*) ;
 size_t FUNC_6 (struct nshhdr*) ;
 int FUNC_7 (struct nlattr const*,struct ovs_key_nsh*,struct ovs_key_nsh*) ;
 int FUNC_8 (struct nshhdr*,void*,void*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,struct nshhdr*,size_t) ;
 int FUNC_13 (struct sk_buff*,struct nshhdr*,size_t) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_4, struct sw_flow_key *VAR_5,
     const struct nlattr *VAR_6)
{
 struct nshhdr *VAR_7;
 size_t VAR_8;
 int VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 int VAR_12;

 struct ovs_key_nsh VAR_13;
 struct ovs_key_nsh VAR_14;

 VAR_9 = FUNC_7(VAR_6, &VAR_13, &VAR_14);
 if (VAR_9)
  return VAR_9;


 if (!FUNC_9(VAR_4, FUNC_11(VAR_4) + VAR_2))
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_4);
 VAR_8 = FUNC_6(VAR_7);


 VAR_9 = FUNC_10(VAR_4, FUNC_11(VAR_4) +
           VAR_8);
 if (FUNC_14(VAR_9))
  return VAR_9;

 VAR_7 = FUNC_5(VAR_4);
 FUNC_12(VAR_4, VAR_7, VAR_8);
 VAR_10 = FUNC_3(VAR_7);
 VAR_10 = FUNC_0(VAR_10, VAR_13.base.flags, VAR_14.base.flags);
 VAR_5->nsh.base.flags = VAR_10;
 VAR_11 = FUNC_4(VAR_7);
 VAR_11 = FUNC_0(VAR_11, VAR_13.base.ttl, VAR_14.base.ttl);
 VAR_5->nsh.base.ttl = VAR_11;
 FUNC_8(VAR_7, VAR_10, VAR_11);
 VAR_7->path_hdr = FUNC_0(VAR_7->path_hdr, VAR_13.base.path_hdr,
      VAR_14.base.path_hdr);
 VAR_5->nsh.base.path_hdr = VAR_7->path_hdr;
 switch (VAR_7->mdtype) {
 case 129:
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_7->md1.context[VAR_12] =
       FUNC_0(VAR_7->md1.context[VAR_12], VAR_13.context[VAR_12],
           VAR_14.context[VAR_12]);
  }
  FUNC_1(VAR_5->nsh.context, VAR_7->md1.context,
         sizeof(VAR_7->md1.context));
  break;
 case 128:
  FUNC_2(VAR_5->nsh.context, 0,
         sizeof(VAR_5->nsh.context));
  break;
 default:
  return -VAR_0;
 }
 FUNC_13(VAR_4, VAR_7, VAR_8);
 return 0;
}
