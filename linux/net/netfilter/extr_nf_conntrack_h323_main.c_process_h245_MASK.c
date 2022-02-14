
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_5__ {int choice; int openLogicalChannelAck; } ;
struct TYPE_6__ {int choice; int openLogicalChannel; } ;
struct TYPE_7__ {int choice; TYPE_1__ response; TYPE_2__ request; } ;
typedef TYPE_3__ MultimediaSystemControlMessage ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int,int *) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int,int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct nf_conn *VAR_3,
   enum ip_conntrack_info VAR_4,
   unsigned int VAR_5, unsigned char **VAR_6, int VAR_7,
   MultimediaSystemControlMessage *VAR_8)
{
 switch (VAR_8->choice) {
 case 129:
  if (VAR_8->request.choice ==
      VAR_0) {
   return FUNC_1(VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_7,
        &VAR_8->request.openLogicalChannel);
  }
  FUNC_0("nf_ct_h323: H.245 Request %d\n",
    VAR_8->request.choice);
  break;
 case 128:
  if (VAR_8->response.choice ==
      VAR_1) {
   return FUNC_2(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7,
         &VAR_8->response.
         openLogicalChannelAck);
  }
  FUNC_0("nf_ct_h323: H.245 Response %d\n",
    VAR_8->response.choice);
  break;
 default:
  FUNC_0("nf_ct_h323: H.245 signal %d\n", VAR_8->choice);
  break;
 }

 return 0;
}
