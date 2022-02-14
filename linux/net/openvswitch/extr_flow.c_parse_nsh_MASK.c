
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int mdtype; int path_hdr; int np; int ttl; int flags; } ;
struct TYPE_6__ {int context; TYPE_1__ base; } ;
struct sw_flow_key {TYPE_3__ nsh; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int context; } ;
struct nshhdr {TYPE_2__ md1; int path_hdr; int np; int mdtype; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;

 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct nshhdr*) ;
 int FUNC_4 (struct nshhdr*) ;
 scalar_t__ FUNC_5 (struct nshhdr*) ;
 struct nshhdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct nshhdr*) ;
 unsigned int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct sw_flow_key *VAR_4)
{
 struct nshhdr *VAR_5;
 unsigned int VAR_6 = FUNC_8(VAR_3);
 u8 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_6 + VAR_1);
 if (FUNC_9(VAR_9))
  return VAR_9;

 VAR_5 = FUNC_6(VAR_3);
 VAR_7 = FUNC_5(VAR_5);
 VAR_8 = FUNC_7(VAR_5);

 if (VAR_7 != 0)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3, VAR_6 + VAR_8);
 if (FUNC_9(VAR_9))
  return VAR_9;

 VAR_5 = FUNC_6(VAR_3);
 VAR_4->nsh.base.flags = FUNC_3(VAR_5);
 VAR_4->nsh.base.ttl = FUNC_4(VAR_5);
 VAR_4->nsh.base.mdtype = VAR_5->mdtype;
 VAR_4->nsh.base.np = VAR_5->np;
 VAR_4->nsh.base.path_hdr = VAR_5->path_hdr;
 switch (VAR_4->nsh.base.mdtype) {
 case 129:
  if (VAR_8 != VAR_2)
   return -VAR_0;
  FUNC_1(VAR_4->nsh.context, VAR_5->md1.context,
         sizeof(VAR_5->md1));
  break;
 case 128:
  FUNC_2(VAR_4->nsh.context, 0,
         sizeof(VAR_5->md1));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
