
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* src; } ;
typedef TYPE_2__ ssIOCtx ;
typedef int gdIOCtx ;
struct TYPE_3__ {int (* source ) (int ,void*,int) ;int context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1 (gdIOCtx * VAR_1, void *VAR_2, int VAR_3)
{
 ssIOCtx *VAR_4;
 int VAR_5;

 VAR_4 = (ssIOCtx *) VAR_1;

 VAR_5 = ((VAR_4->src->source) (VAR_4->src->context, VAR_2, VAR_3));






 if (VAR_5 == 0) {
  return VAR_0;
 } else if (VAR_5 < 0) {
  return 0;
 } else {
  return VAR_5;
 }
}
