
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn {unsigned long status; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_2 (struct sk_buff*,struct nf_conn*,int,int) ;

unsigned int FUNC_3(struct nf_conn *VAR_6,
      enum ip_conntrack_info VAR_7,
      unsigned int VAR_8,
      struct sk_buff *VAR_9)
{
 enum nf_nat_manip_type VAR_10 = FUNC_1(VAR_8);
 enum ip_conntrack_dir VAR_11 = FUNC_0(VAR_7);
 unsigned int VAR_12 = VAR_4;
 unsigned long VAR_13;

 if (VAR_10 == VAR_5)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_0;


 if (VAR_11 == VAR_3)
  VAR_13 ^= VAR_1;


 if (VAR_6->status & VAR_13)
  VAR_12 = FUNC_2(VAR_9, VAR_6, VAR_10, VAR_11);

 return VAR_12;
}
