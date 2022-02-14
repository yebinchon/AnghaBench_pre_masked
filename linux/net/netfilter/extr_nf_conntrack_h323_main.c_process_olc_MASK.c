
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_23__ {scalar_t__ choice; int localAreaAddress; } ;
struct TYPE_18__ {scalar_t__ choice; } ;
struct TYPE_19__ {scalar_t__ choice; TYPE_4__ t120; } ;
struct TYPE_20__ {TYPE_5__ application; } ;
struct TYPE_21__ {scalar_t__ choice; TYPE_6__ data; } ;
struct TYPE_15__ {scalar_t__ choice; int h2250LogicalChannelParameters; } ;
struct TYPE_22__ {TYPE_7__ dataType; TYPE_1__ multiplexParameters; } ;
struct TYPE_16__ {scalar_t__ choice; int h2250LogicalChannelParameters; } ;
struct TYPE_17__ {int options; TYPE_2__ multiplexParameters; } ;
struct TYPE_13__ {TYPE_9__ networkAddress; } ;
struct TYPE_14__ {int options; TYPE_10__ separateStack; TYPE_8__ forwardLogicalChannelParameters; TYPE_3__ reverseLogicalChannelParameters; } ;
typedef TYPE_11__ OpenLogicalChannel ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int,int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_9, struct nf_conn *VAR_10,
         enum ip_conntrack_info VAR_11,
         unsigned int VAR_12,
         unsigned char **VAR_13, int VAR_14,
         OpenLogicalChannel *VAR_15)
{
 int VAR_16;

 FUNC_1("nf_ct_h323: OpenLogicalChannel\n");

 if (VAR_15->forwardLogicalChannelParameters.multiplexParameters.choice ==
     VAR_4)
 {
  VAR_16 = FUNC_2(VAR_9, VAR_10, VAR_11,
        VAR_12, VAR_13, VAR_14,
        &VAR_15->
        forwardLogicalChannelParameters.
        multiplexParameters.
        h2250LogicalChannelParameters);
  if (VAR_16 < 0)
   return -1;
 }

 if ((VAR_15->options &
      VAR_5) &&
     (VAR_15->reverseLogicalChannelParameters.options &
      VAR_6)
     && (VAR_15->reverseLogicalChannelParameters.multiplexParameters.
  choice ==
  VAR_7))
 {
  VAR_16 =
      FUNC_2(VAR_9, VAR_10, VAR_11,
      VAR_12, VAR_13, VAR_14,
      &VAR_15->
      reverseLogicalChannelParameters.
      multiplexParameters.
      h2250LogicalChannelParameters);
  if (VAR_16 < 0)
   return -1;
 }

 if ((VAR_15->options & VAR_8) &&
     VAR_15->forwardLogicalChannelParameters.dataType.choice ==
     VAR_2 &&
     VAR_15->forwardLogicalChannelParameters.dataType.data.application.
     choice == VAR_0 &&
     VAR_15->forwardLogicalChannelParameters.dataType.data.application.
     t120.choice == VAR_1 &&
     VAR_15->separateStack.networkAddress.choice ==
     VAR_3) {
  VAR_16 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
      &VAR_15->separateStack.networkAddress.
      localAreaAddress);
  if (VAR_16 < 0)
   return -1;
 }

 return 0;
}
