
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfnl_ct_hook {scalar_t__ (* parse ) (struct nlattr const* const,struct nf_conn*) ;int (* attach_expect ) (struct nlattr const* const,struct nf_conn*,int ,int ) ;struct nf_conn* (* get_ct ) (int ,int*) ;} ;
struct nf_queue_entry {int skb; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {int portid; } ;


 TYPE_1__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct nlmsghdr const*) ;
 struct nf_conn* FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (struct nlattr const* const,struct nf_conn*) ;
 int FUNC_4 (struct nlattr const* const,struct nf_conn*,int ,int ) ;

__attribute__((used)) static struct nf_conn *FUNC_5(struct nfnl_ct_hook *VAR_2,
          const struct nlmsghdr *VAR_3,
          const struct nlattr * const VAR_4[],
          struct nf_queue_entry *VAR_5,
          enum ip_conntrack_info *VAR_6)
{
 struct nf_conn *VAR_7;

 VAR_7 = VAR_2->get_ct(VAR_5->skb, VAR_6);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 if (VAR_2->parse(VAR_4[VAR_0], VAR_7) < 0)
  return ((void*)0);

 if (VAR_4[VAR_1])
  VAR_2->attach_expect(VAR_4[VAR_1], VAR_7,
          FUNC_0(VAR_5->skb).portid,
          FUNC_1(VAR_3));
 return VAR_7;
}
