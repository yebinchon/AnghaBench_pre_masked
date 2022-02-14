
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mpls_shim_hdr {int label_stack_entry; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline struct mpls_shim_hdr FUNC_1(u32 VAR_4, unsigned VAR_5, unsigned VAR_6, bool VAR_7)
{
 struct mpls_shim_hdr VAR_8;
 VAR_8.label_stack_entry =
  FUNC_0((VAR_4 << VAR_0) |
       (VAR_6 << VAR_2) |
       (VAR_7 ? (1 << VAR_1) : 0) |
       (VAR_5 << VAR_3));
 return VAR_8;
}
