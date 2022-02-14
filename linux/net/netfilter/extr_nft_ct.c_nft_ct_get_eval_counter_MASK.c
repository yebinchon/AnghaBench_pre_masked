
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nf_conn_counter {int packets; int bytes; } ;
typedef enum nft_ct_keys { ____Placeholder_nft_ct_keys } nft_ct_keys ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static u64 FUNC_1(const struct nf_conn_counter *VAR_4,
       enum nft_ct_keys VAR_5,
       enum ip_conntrack_dir VAR_6)
{
 if (VAR_6 < VAR_0)
  return VAR_5 == VAR_3 ? FUNC_0(&VAR_4[VAR_6].bytes) :
        FUNC_0(&VAR_4[VAR_6].packets);

 return FUNC_1(VAR_4, VAR_5, VAR_1) +
        FUNC_1(VAR_4, VAR_5, VAR_2);
}
