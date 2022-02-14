
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpls_shim_hdr {int label_stack_entry; } ;
struct mpls_entry_decoded {unsigned int label; unsigned int ttl; unsigned int tc; unsigned int bos; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline struct mpls_entry_decoded FUNC_1(struct mpls_shim_hdr *VAR_8)
{
 struct mpls_entry_decoded VAR_9;
 unsigned VAR_10 = FUNC_0(VAR_8->label_stack_entry);

 VAR_9.label = (VAR_10 & VAR_0) >> VAR_1;
 VAR_9.ttl = (VAR_10 & VAR_6) >> VAR_7;
 VAR_9.tc = (VAR_10 & VAR_4) >> VAR_5;
 VAR_9.bos = (VAR_10 & VAR_2) >> VAR_3;

 return VAR_9;
}
