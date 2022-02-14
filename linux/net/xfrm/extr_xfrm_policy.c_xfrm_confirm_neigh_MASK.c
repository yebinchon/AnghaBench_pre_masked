
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* confirm_neigh ) (struct dst_entry const*,void const*) ;} ;


 int FUNC_0 (struct dst_entry const*,void const*) ;
 struct dst_entry* FUNC_1 (struct dst_entry const*) ;
 void* FUNC_2 (struct dst_entry const*,void const*) ;

__attribute__((used)) static void FUNC_3(const struct dst_entry *VAR_0, const void *VAR_1)
{
 const struct dst_entry *VAR_2 = FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0, VAR_1);
 VAR_2->ops->confirm_neigh(VAR_2, VAR_1);
}
