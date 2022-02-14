
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct xt_hashlimit_htable {TYPE_1__ cfg; int rnd; } ;
struct dsthash_dst {int dummy; } ;


 int FUNC_0 (int const*,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int32_t
FUNC_2(const struct xt_hashlimit_htable *VAR_0, const struct dsthash_dst *VAR_1)
{
 u_int32_t VAR_2 = FUNC_0((const u32 *)VAR_1,
    sizeof(*VAR_1)/sizeof(u32),
    VAR_0->rnd);






 return FUNC_1(VAR_2, VAR_0->cfg.size);
}
