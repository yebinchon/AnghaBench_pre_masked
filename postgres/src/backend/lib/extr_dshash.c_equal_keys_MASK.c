
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* compare_function ) (void const*,void const*,int ,int ) ;int key_size; } ;
struct TYPE_5__ {int arg; TYPE_1__ params; } ;
typedef TYPE_2__ dshash_table ;


 scalar_t__ FUNC_0 (void const*,void const*,int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(dshash_table *VAR_0, const void *VAR_1, const void *VAR_2)
{
 return VAR_0->params.compare_function(VAR_1, VAR_2,
              VAR_0->params.key_size,
              VAR_0->arg) == 0;
}
