
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t len; size_t cap; int* data; } ;
typedef TYPE_2__ uni_buf ;
typedef int fz_pool ;
struct TYPE_8__ {char* text; } ;
struct TYPE_10__ {int bidi_level; int type; struct TYPE_10__* next; TYPE_1__ content; } ;
typedef TYPE_3__ fz_html_flow ;
typedef int fz_context ;
typedef int fz_bidi_direction ;
struct TYPE_11__ {TYPE_2__* buffer; TYPE_3__* flow; int * pool; int * ctx; } ;
typedef TYPE_4__ bidi_data ;
 int VAR_0 ;
 int FUNC_0 (int *,int*,size_t,int *,int ,TYPE_4__*,int ) ;
 int FUNC_1 (int*,char const*) ;
 int* FUNC_2 (int *,int*,size_t,int ) ;
 size_t FUNC_3 (char*) ;
 int VAR_1 ;

__attribute__((used)) static fz_bidi_direction
FUNC_4(fz_context *VAR_2, fz_pool *VAR_3, uni_buf *VAR_4, fz_bidi_direction VAR_5, fz_html_flow *VAR_6)
{
 fz_html_flow *VAR_7 = VAR_6;
 bidi_data VAR_8;

 while (VAR_7)
 {
  int VAR_9 = VAR_7->bidi_level;



  VAR_4->len = 0;
  while (VAR_7 && (VAR_9 & 1) == (VAR_7->bidi_level & 1))
  {
   size_t VAR_10 = 0;
   const char *VAR_11 = "";
   int VAR_12 = 0;

   switch (VAR_7->type)
   {
   case 128:
    VAR_10 = FUNC_3(VAR_7->content.text);
    VAR_11 = VAR_7->content.text;
    break;
   case 129:
    VAR_10 = 1;
    VAR_11 = " ";
    break;
   case 130:
   case 131:
    break;
   case 133:
   case 132:
    VAR_12 = 1;
    break;
   }

   VAR_7 = VAR_7->next;

   if (VAR_12)
    break;


   if (VAR_4->len + VAR_10 > VAR_4->cap)
   {
    size_t VAR_13 = VAR_4->cap;
    if (VAR_13 < 128)
     VAR_13 = 128;

    while (VAR_13 < VAR_4->len + VAR_10)
     VAR_13 = (VAR_13 * 3) / 2;

    VAR_4->data = FUNC_2(VAR_2, VAR_4->data, VAR_13, VAR_1);
    VAR_4->cap = VAR_13;
   }


   while (*VAR_11)
   {
    int VAR_14;
    VAR_11 += FUNC_1(&VAR_14, VAR_11);
    VAR_4->data[VAR_4->len++] = VAR_14;
   }
  }


  VAR_8.ctx = VAR_2;
  VAR_8.pool = VAR_3;
  VAR_8.flow = VAR_6;
  VAR_8.buffer = VAR_4;
  FUNC_0(VAR_2, VAR_4->data, VAR_4->len, &VAR_5, VAR_0, &VAR_8, 0 );
  VAR_6 = VAR_7;
 }
 return VAR_5;
}
