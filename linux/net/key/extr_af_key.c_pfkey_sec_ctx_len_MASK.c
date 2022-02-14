
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sadb_x_sec_ctx {scalar_t__ sadb_x_ctx_len; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_1(const struct sadb_x_sec_ctx *VAR_0)
{
 return FUNC_0(sizeof(struct sadb_x_sec_ctx) +
       VAR_0->sadb_x_ctx_len,
       sizeof(uint64_t));
}
