
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {scalar_t__ pf; } ;
struct TYPE_3__ {unsigned int stream_timeout; unsigned int timeout; } ;
struct TYPE_4__ {TYPE_1__ gre; } ;
struct nf_conn {int status; TYPE_2__ proto; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conn*,int,struct sk_buff*,unsigned int) ;
 unsigned int* FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (int ,int*) ;

int FUNC_7(struct nf_conn *VAR_7,
       struct sk_buff *VAR_8,
       unsigned int VAR_9,
       enum ip_conntrack_info VAR_10,
       const struct nf_hook_state *VAR_11)
{
 if (VAR_11->pf != VAR_5)
  return -VAR_6;

 if (!FUNC_2(VAR_7)) {
  unsigned int *VAR_12 = FUNC_5(VAR_7);

  if (!VAR_12)
   VAR_12 = FUNC_0(FUNC_3(VAR_7));



  VAR_7->proto.gre.stream_timeout = VAR_12[VAR_0];
  VAR_7->proto.gre.timeout = VAR_12[VAR_1];
 }



 if (VAR_7->status & VAR_4) {
  FUNC_4(VAR_7, VAR_10, VAR_8,
       VAR_7->proto.gre.stream_timeout);

  if (!FUNC_6(VAR_3, &VAR_7->status))
   FUNC_1(VAR_2, VAR_7);
 } else
  FUNC_4(VAR_7, VAR_10, VAR_8,
       VAR_7->proto.gre.timeout);

 return VAR_6;
}
