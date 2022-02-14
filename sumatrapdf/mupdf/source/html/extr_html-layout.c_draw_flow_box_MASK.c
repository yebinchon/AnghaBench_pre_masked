
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_29__ {float scale; unsigned int glyph_count; scalar_t__ start; scalar_t__ end; int font; TYPE_2__* glyph_info; TYPE_1__* glyph_pos; } ;
typedef TYPE_6__ string_walker ;
typedef int hb_buffer_t ;
typedef int fz_text ;
struct TYPE_30__ {float a; float d; float e; float f; scalar_t__ c; scalar_t__ b; } ;
typedef TYPE_7__ fz_matrix ;
struct TYPE_26__ {int image; } ;
struct TYPE_31__ {scalar_t__ type; float y; float h; int bidi_level; float x; float w; TYPE_3__ content; int markup_lang; TYPE_4__* box; int script; scalar_t__ breaks_line; struct TYPE_31__* next; } ;
typedef TYPE_8__ fz_html_flow ;
struct TYPE_32__ {int markup_dir; TYPE_8__* flow_head; } ;
typedef TYPE_9__ fz_html_box ;
typedef int fz_device ;
struct TYPE_28__ {float r; float g; float b; } ;
struct TYPE_23__ {scalar_t__ visibility; int small_caps; int font; TYPE_5__ color; } ;
typedef TYPE_10__ fz_css_style ;
typedef int fz_context ;
struct TYPE_27__ {float em; TYPE_10__* style; } ;
struct TYPE_25__ {scalar_t__ cluster; int codepoint; } ;
struct TYPE_24__ {int x_offset; int y_offset; scalar_t__ y_advance; scalar_t__ x_advance; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ,TYPE_7__,int,int ) ;
 int FUNC_4 (int *,int *,int *,TYPE_7__,int ,float*,int,int ) ;
 int * FUNC_5 (int *) ;
 TYPE_7__ FUNC_6 (TYPE_7__,float,float) ;
 TYPE_7__ FUNC_7 (TYPE_7__,float,float) ;
 int FUNC_8 (int *,int *,int ,TYPE_7__,int,int,int ,int,int ,int ) ;
 char* FUNC_9 (int *,TYPE_8__*) ;
 int FUNC_10 (int *,TYPE_6__*,int *,int,int ,int ,int ,int ,char const*) ;
 scalar_t__ FUNC_11 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_12(fz_context *VAR_6, fz_html_box *VAR_7, float VAR_8, float VAR_9, fz_device *VAR_10, fz_matrix VAR_11, hb_buffer_t *VAR_12)
{
 fz_html_flow *VAR_13;
 fz_text *VAR_14;
 fz_matrix VAR_15;
 float VAR_16[3];
 float VAR_17[3];



 VAR_14 = ((void*)0);
 VAR_17[0] = 0;
 VAR_17[1] = 0;
 VAR_17[2] = 0;

 for (VAR_13 = VAR_7->flow_head; VAR_13; VAR_13 = VAR_13->next)
 {
  const fz_css_style *VAR_18 = VAR_13->box->style;

  if (VAR_13->type == VAR_0)
  {
   if (VAR_13->y >= VAR_9 || VAR_13->y + VAR_13->h <= VAR_8)
    continue;
  }
  else
  {
   if (VAR_13->y > VAR_9 || VAR_13->y < VAR_8)
    continue;
  }

  if (VAR_13->type == VAR_3 || VAR_13->type == VAR_2 || VAR_13->type == VAR_1)
  {
   string_walker VAR_19;
   const char *VAR_20;
   float VAR_21, VAR_22;

   if (VAR_13->type == VAR_2 && VAR_13->breaks_line)
    continue;
   if (VAR_13->type == VAR_1 && !VAR_13->breaks_line)
    continue;
   if (VAR_18->visibility != VAR_4)
    continue;

   VAR_16[0] = VAR_18->color.r / 255.0f;
   VAR_16[1] = VAR_18->color.g / 255.0f;
   VAR_16[2] = VAR_18->color.b / 255.0f;

   if (VAR_16[0] != VAR_17[0] || VAR_16[1] != VAR_17[1] || VAR_16[2] != VAR_17[2])
   {
    if (VAR_14)
    {
     FUNC_4(VAR_6, VAR_10, VAR_14, VAR_11, FUNC_1(VAR_6), VAR_17, 1, VAR_5);
     FUNC_2(VAR_6, VAR_14);
     VAR_14 = ((void*)0);
    }
    VAR_17[0] = VAR_16[0];
    VAR_17[1] = VAR_16[1];
    VAR_17[2] = VAR_16[2];
   }

   if (!VAR_14)
    VAR_14 = FUNC_5(VAR_6);

   if (VAR_13->bidi_level & 1)
    VAR_21 = VAR_13->x + VAR_13->w;
   else
    VAR_21 = VAR_13->x;
   VAR_22 = VAR_13->y;

   VAR_15.a = VAR_13->box->em;
   VAR_15.b = 0;
   VAR_15.c = 0;
   VAR_15.d = -VAR_13->box->em;
   VAR_15.e = VAR_21;
   VAR_15.f = VAR_22 - VAR_8;

   VAR_20 = FUNC_9(VAR_6, VAR_13);
   FUNC_10(VAR_6, &VAR_19, VAR_12, VAR_13->bidi_level & 1, VAR_18->font, VAR_13->script, VAR_13->markup_lang, VAR_18->small_caps, VAR_20);
   while (FUNC_11(&VAR_19))
   {
    float VAR_23 = VAR_13->box->em / VAR_19.scale;
    unsigned int VAR_24;
    uint32_t VAR_25;
    int VAR_26, VAR_27;


    int VAR_28 = 0;
    int VAR_29 = 0;
    for (VAR_24 = 0; VAR_24 < VAR_19.glyph_count; ++VAR_24)
    {
     VAR_19.glyph_pos[VAR_24].x_offset += VAR_28;
     VAR_19.glyph_pos[VAR_24].y_offset += VAR_29;
     VAR_28 += VAR_19.glyph_pos[VAR_24].x_advance;
     VAR_29 += VAR_19.glyph_pos[VAR_24].y_advance;
    }

    if (VAR_13->bidi_level & 1)
     VAR_21 -= VAR_28 * VAR_23;


    VAR_25 = 0;
    while (VAR_19.start + VAR_25 < VAR_19.end)
    {
     VAR_27 = FUNC_0(&VAR_26, VAR_19.start + VAR_25);

     for (VAR_24 = 0; VAR_24 < VAR_19.glyph_count; ++VAR_24)
     {
      if (VAR_19.glyph_info[VAR_24].cluster == VAR_25)
      {
       VAR_15.e = VAR_21 + VAR_19.glyph_pos[VAR_24].x_offset * VAR_23;
       VAR_15.f = VAR_22 - VAR_19.glyph_pos[VAR_24].y_offset * VAR_23 - VAR_8;
       FUNC_8(VAR_6, VAR_14, VAR_19.font, VAR_15,
         VAR_19.glyph_info[VAR_24].codepoint, VAR_26,
         0, VAR_13->bidi_level, VAR_7->markup_dir, VAR_13->markup_lang);
       VAR_26 = -1;
      }
     }


     if (VAR_26 != -1)
     {
      FUNC_8(VAR_6, VAR_14, VAR_19.font, VAR_15,
        -1, VAR_26,
        0, VAR_13->bidi_level, VAR_7->markup_dir, VAR_13->markup_lang);
     }

     VAR_25 += VAR_27;
    }

    if ((VAR_13->bidi_level & 1) == 0)
     VAR_21 += VAR_28 * VAR_23;

    VAR_22 += VAR_29 * VAR_23;
   }
  }
  else if (VAR_13->type == VAR_0)
  {
   if (VAR_14)
   {
    FUNC_4(VAR_6, VAR_10, VAR_14, VAR_11, FUNC_1(VAR_6), VAR_16, 1, VAR_5);
    FUNC_2(VAR_6, VAR_14);
    VAR_14 = ((void*)0);
   }
   if (VAR_18->visibility == VAR_4)
   {
    fz_matrix VAR_30 = FUNC_7(VAR_11, VAR_13->x, VAR_13->y - VAR_8);
    VAR_30 = FUNC_6(VAR_30, VAR_13->w, VAR_13->h);
    FUNC_3(VAR_6, VAR_10, VAR_13->content.image, VAR_30, 1, VAR_5);
   }
  }
 }

 if (VAR_14)
 {
  FUNC_4(VAR_6, VAR_10, VAR_14, VAR_11, FUNC_1(VAR_6), VAR_16, 1, VAR_5);
  FUNC_2(VAR_6, VAR_14);
  VAR_14 = ((void*)0);
 }
}
