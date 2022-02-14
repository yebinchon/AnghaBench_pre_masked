
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_size; int (* hash_function ) (void const*,int ,int ) ;} ;
struct TYPE_5__ {int arg; TYPE_1__ params; } ;
typedef TYPE_2__ dshash_table ;
typedef int dshash_hash ;


 int FUNC_0 (void const*,int ,int ) ;

__attribute__((used)) static inline dshash_hash
FUNC_1(dshash_table *VAR_0, const void *VAR_1)
{
 return VAR_0->params.hash_function(VAR_1,
           VAR_0->params.key_size,
           VAR_0->arg);
}
