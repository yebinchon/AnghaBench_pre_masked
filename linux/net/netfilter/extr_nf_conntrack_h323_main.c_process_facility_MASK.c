
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
struct TYPE_6__ {int count; int * item; } ;
struct TYPE_5__ {scalar_t__ choice; } ;
struct TYPE_7__ {int options; TYPE_2__ fastStart; int h245Address; int alternativeAddress; TYPE_1__ reason; } ;
typedef TYPE_3__ Facility_UUIE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int,int *) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned char**,int,int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct nf_conn *VAR_5,
       enum ip_conntrack_info VAR_6,
       unsigned int VAR_7,
       unsigned char **VAR_8, int VAR_9,
       Facility_UUIE *VAR_10)
{
 int VAR_11;
 int VAR_12;

 FUNC_2("nf_ct_q931: Facility\n");

 if (VAR_10->reason.choice == VAR_0) {
  if (VAR_10->options & VAR_1)
   return FUNC_0(VAR_4, VAR_5, VAR_6,
           VAR_7, VAR_8, VAR_9,
           &VAR_10->
           alternativeAddress);
  return 0;
 }

 if (VAR_10->options & VAR_3) {
  VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      &VAR_10->h245Address);
  if (VAR_11 < 0)
   return -1;
 }

 if (VAR_10->options & VAR_2) {
  for (VAR_12 = 0; VAR_12 < VAR_10->fastStart.count; VAR_12++) {
   VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_9,
       &VAR_10->fastStart.item[VAR_12]);
   if (VAR_11 < 0)
    return -1;
  }
 }

 return 0;
}
