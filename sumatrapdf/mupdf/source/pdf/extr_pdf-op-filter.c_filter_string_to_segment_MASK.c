
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int encoding; } ;
typedef TYPE_3__ pdf_font_desc ;
struct TYPE_13__ {TYPE_5__* gstate; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_10__ {int word_space; TYPE_3__* font; } ;
struct TYPE_11__ {TYPE_1__ text; } ;
struct TYPE_14__ {TYPE_2__ pending; } ;
typedef TYPE_5__ filter_gstate ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*,int,int*) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_4__*,int,int) ;
 int FUNC_4 (int ,unsigned char*,unsigned char*,unsigned int*) ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_1, pdf_filter_processor *VAR_2, unsigned char *VAR_3, int VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
 filter_gstate *VAR_8 = VAR_2->gstate;
 pdf_font_desc *VAR_9 = VAR_8->pending.text.font;
 unsigned char *VAR_10 = VAR_3 + VAR_4;
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_3 += *VAR_5;

 *VAR_7 = 0;

 while (VAR_3 < VAR_10)
 {
  int VAR_14;
  *VAR_6 = FUNC_4(VAR_9->encoding, VAR_3, VAR_10, &VAR_11);
  VAR_3 += *VAR_6;

  VAR_12 = FUNC_5(VAR_9->encoding, VAR_11);
  if (VAR_12 < 0)
  {
   VAR_14 = VAR_0;
   FUNC_2(VAR_1, "cannot encode character");
  }
  else
   VAR_13 = FUNC_0(VAR_1, VAR_2, VAR_12, &VAR_14);
  if (VAR_11 == 32 && *VAR_6 == 1)
   FUNC_1(VAR_1, VAR_2, VAR_8->pending.text.word_space);


  FUNC_3(VAR_1, VAR_2, VAR_14, VAR_13);
  if (VAR_13)
  {
   *VAR_7 = (VAR_11 == 32 && *VAR_6 == 1);
   return;
  }
  *VAR_5 += *VAR_6;
 }
}
