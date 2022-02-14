
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct l2tp_tunnel {int sock; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (int ) ;

__attribute__((used)) static inline u32 FUNC_3(const struct l2tp_tunnel *VAR_0)
{
 struct dst_entry *VAR_1;
 u32 VAR_2;

 VAR_1 = FUNC_2(VAR_0->sock);
 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return VAR_2;
}
