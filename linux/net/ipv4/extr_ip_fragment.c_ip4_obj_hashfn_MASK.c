
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int v4; } ;
struct inet_frag_queue {TYPE_1__ key; } ;
struct frag_v4_compare_key {int dummy; } ;


 int FUNC_0 (int const*,int,int ) ;

__attribute__((used)) static u32 FUNC_1(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct inet_frag_queue *VAR_3 = VAR_0;

 return FUNC_0((const u32 *)&VAR_3->key.v4,
        sizeof(struct frag_v4_compare_key) / sizeof(u32), VAR_2);
}
