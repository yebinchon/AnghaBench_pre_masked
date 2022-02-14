
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct concat_filter {size_t current; size_t count; int ws_buf; scalar_t__ pad; TYPE_3__** chain; } ;
struct TYPE_5__ {scalar_t__ wp; int error; int * rp; scalar_t__ pos; scalar_t__ state; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;
struct TYPE_6__ {scalar_t__ wp; scalar_t__ rp; scalar_t__ error; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *,TYPE_3__*,size_t) ;
 int FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(fz_context *VAR_1, fz_stream *VAR_2, size_t VAR_3)
{
 struct concat_filter *VAR_4 = (struct concat_filter *)VAR_2->state;
 size_t VAR_5;

 while (VAR_4->current < VAR_4->count)
 {

  if (VAR_2->wp == VAR_4->chain[VAR_4->current]->wp)
   VAR_4->chain[VAR_4->current]->rp = VAR_2->wp;
  VAR_5 = FUNC_0(VAR_1, VAR_4->chain[VAR_4->current], VAR_3);
  if (VAR_5)
  {
   VAR_2->rp = VAR_4->chain[VAR_4->current]->rp;
   VAR_2->wp = VAR_4->chain[VAR_4->current]->wp;
   VAR_2->pos += VAR_5;
   return *VAR_2->rp++;
  }
  else
  {
   if (VAR_4->chain[VAR_4->current]->error)
   {
    VAR_2->error = 1;
    break;
   }
   VAR_4->current++;
   FUNC_1(VAR_1, VAR_4->chain[VAR_4->current-1]);
   if (VAR_4->pad)
   {
    VAR_2->rp = (&VAR_4->ws_buf)+1;
    VAR_2->wp = VAR_2->rp + 1;
    VAR_2->pos++;
    return 32;
   }
  }
 }

 VAR_2->rp = VAR_2->wp;

 return VAR_0;
}
