
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_4__* flow; int pool; int ctx; TYPE_1__* buffer; } ;
typedef TYPE_3__ bidi_data ;
struct TYPE_6__ {int text; } ;
struct TYPE_8__ {scalar_t__ type; int bidi_level; int script; struct TYPE_8__* next; TYPE_2__ content; } ;
struct TYPE_5__ {int const* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_4__*,size_t) ;

__attribute__((used)) static void FUNC_2(const uint32_t *VAR_5,
   size_t VAR_6,
   int VAR_7,
   int VAR_8,
   void *VAR_9)
{
 bidi_data *VAR_10 = (bidi_data *)VAR_9;
 size_t VAR_11 = VAR_5 - VAR_10->buffer->data;



 while (VAR_6 > 0)
 {
  size_t VAR_12;

  if (VAR_10->flow->type == VAR_4)
  {
   VAR_12 = 1;
  }
  else if (VAR_10->flow->type == VAR_1 || VAR_10->flow->type == VAR_2 ||
    VAR_10->flow->type == VAR_3 || VAR_10->flow->type == VAR_0)
  {
   VAR_12 = 0;
  }
  else
  {

   VAR_12 = FUNC_0(VAR_10->flow->content.text);
   if (VAR_12 > VAR_6)
   {

    (void)FUNC_1(VAR_10->ctx, VAR_10->pool, VAR_10->flow, VAR_6);
    VAR_12 = FUNC_0(VAR_10->flow->content.text);
   }
  }


  VAR_10->flow->bidi_level = VAR_7;
  VAR_10->flow->script = VAR_8;
  VAR_10->flow = VAR_10->flow->next;
  VAR_11 += VAR_12;
  VAR_6 -= VAR_12;
 }
}
