
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* ssIOCtxPtr ;
struct TYPE_5__ {TYPE_1__* snk; } ;
typedef TYPE_2__ ssIOCtx ;
typedef int gdIOCtx ;
struct TYPE_4__ {int (* sink ) (int ,void const*,int) ;int context; } ;


 int FUNC_0 (int ,void const*,int) ;

__attribute__((used)) static int FUNC_1 (gdIOCtx * VAR_0, const void *VAR_1, int VAR_2)
{
 ssIOCtxPtr VAR_3;
 int VAR_4;

 VAR_3 = (ssIOCtx *) VAR_0;

 VAR_4 = (VAR_3->snk->sink) (VAR_3->snk->context, VAR_1, VAR_2);

 if (VAR_4 <= 0) {
  return 0;
 } else {
  return VAR_4;
 }
}
