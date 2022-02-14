
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int * cur_async_frame; int * prev_async_frame; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(obs_source_t *VAR_0, uint64_t VAR_1)
{
 if (VAR_0->prev_async_frame) {
  FUNC_1(VAR_0, VAR_0->prev_async_frame);
  VAR_0->prev_async_frame = ((void*)0);
 }
 if (VAR_0->cur_async_frame) {
  FUNC_1(VAR_0, VAR_0->cur_async_frame);
  VAR_0->cur_async_frame = ((void*)0);
 }

 FUNC_0(VAR_0, VAR_1);
}
