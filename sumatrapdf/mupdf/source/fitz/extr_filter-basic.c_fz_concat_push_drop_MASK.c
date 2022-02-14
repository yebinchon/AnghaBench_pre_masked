
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct concat_filter {scalar_t__ count; scalar_t__ max; TYPE_1__** chain; } ;
struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;

void
FUNC_2(fz_context *VAR_1, fz_stream *VAR_2, fz_stream *VAR_3)
{
 struct concat_filter *VAR_4 = (struct concat_filter *)VAR_2->state;

 if (VAR_4->count == VAR_4->max)
 {
  FUNC_0(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_0, "Concat filter size exceeded");
 }

 VAR_4->chain[VAR_4->count++] = VAR_3;
}
