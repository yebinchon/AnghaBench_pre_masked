
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dst_entry {int dummy; } ;
struct dst_cache_pcpu {struct dst_entry* dst; int cookie; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;

__attribute__((used)) static void FUNC_2(struct dst_cache_pcpu *VAR_0,
          struct dst_entry *VAR_1, u32 VAR_2)
{
 FUNC_1(VAR_0->dst);
 if (VAR_1)
  FUNC_0(VAR_1);

 VAR_0->cookie = VAR_2;
 VAR_0->dst = VAR_1;
}
