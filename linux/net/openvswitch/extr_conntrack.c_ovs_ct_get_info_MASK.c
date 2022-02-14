
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conn {int status; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nf_conntrack_tuple_hash const*) ;
 struct nf_conn* FUNC_1 (struct nf_conntrack_tuple_hash const*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static enum ip_conntrack_info
FUNC_3(const struct nf_conntrack_tuple_hash *VAR_7)
{
 const struct nf_conn *VAR_8 = FUNC_1(VAR_7);

 if (FUNC_0(VAR_7) == VAR_2)
  return VAR_4;

 if (FUNC_2(VAR_1, &VAR_8->status))
  return VAR_3;
 if (FUNC_2(VAR_0, &VAR_8->status))
  return VAR_6;
 return VAR_5;
}
