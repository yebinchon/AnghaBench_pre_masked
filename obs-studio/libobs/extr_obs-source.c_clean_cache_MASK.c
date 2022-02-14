
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct async_frame {scalar_t__ unused_count; int frame; int used; } ;
struct TYPE_5__ {size_t num; struct async_frame* array; } ;
struct TYPE_4__ {TYPE_2__ async_cache; } ;
typedef TYPE_1__ obs_source_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__,size_t) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(obs_source_t *VAR_1)
{
 for (size_t VAR_2 = VAR_1->async_cache.num; VAR_2 > 0; VAR_2--) {
  struct async_frame *VAR_3 = &VAR_1->async_cache.array[VAR_2 - 1];
  if (!VAR_3->used) {
   if (++VAR_3->unused_count == VAR_0) {
    FUNC_1(VAR_3->frame);
    FUNC_0(VAR_1->async_cache, VAR_2 - 1);
   }
  }
 }
}
