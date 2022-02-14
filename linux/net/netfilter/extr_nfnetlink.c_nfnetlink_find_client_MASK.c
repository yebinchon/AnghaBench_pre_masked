
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct nfnl_callback {int dummy; } ;
struct nfnetlink_subsystem {size_t cb_count; struct nfnl_callback const* cb; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline const struct nfnl_callback *
FUNC_1(u16 VAR_0, const struct nfnetlink_subsystem *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 >= VAR_1->cb_count)
  return ((void*)0);

 return &VAR_1->cb[VAR_2];
}
