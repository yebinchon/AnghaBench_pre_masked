
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_3__ {int choice; int infoRequestResponse; int locationConfirm; int locationRequest; int admissionConfirm; int admissionRequest; int unregistrationRequest; int registrationConfirm; int registrationRequest; int gatekeeperConfirm; int gatekeeperRequest; } ;
typedef TYPE_1__ RasMessage ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_4 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_5 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_6 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_7 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_8 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_9 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;
 int FUNC_10 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_0, struct nf_conn *VAR_1,
         enum ip_conntrack_info VAR_2,
         unsigned int VAR_3,
         unsigned char **VAR_4, RasMessage *VAR_5)
{
 switch (VAR_5->choice) {
 case 134:
  return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->gatekeeperRequest);
 case 135:
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->gatekeeperConfirm);
 case 129:
  return FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->registrationRequest);
 case 130:
  return FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->registrationConfirm);
 case 128:
  return FUNC_10(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->unregistrationRequest);
 case 136:
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->admissionRequest);
 case 137:
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->admissionConfirm);
 case 131:
  return FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->locationRequest);
 case 132:
  return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->locationConfirm);
 case 133:
  return FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       &VAR_5->infoRequestResponse);
 default:
  FUNC_0("nf_ct_ras: RAS message %d\n", VAR_5->choice);
  break;
 }

 return 0;
}
