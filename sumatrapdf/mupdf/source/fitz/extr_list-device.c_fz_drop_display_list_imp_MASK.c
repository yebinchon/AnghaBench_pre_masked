
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_text ;
typedef int fz_stroke_state ;
typedef int fz_storable ;
typedef int fz_shade ;
typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_image ;
struct TYPE_4__ {int len; int size; int cs; scalar_t__ alpha; int ctm; int cmd; struct TYPE_4__* list; scalar_t__ path; scalar_t__ stroke; scalar_t__ color; scalar_t__ rect; } ;
typedef TYPE_1__ fz_display_node ;
typedef TYPE_1__ fz_display_list ;
typedef int fz_default_colorspaces ;
typedef int fz_context ;
typedef int fz_colorspace ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_4, fz_storable *VAR_5)
{
 fz_display_list *VAR_6 = (fz_display_list *)VAR_5;
 fz_display_node *VAR_7 = VAR_6->list;
 fz_display_node *VAR_8 = VAR_6->list + VAR_6->len;
 int VAR_9 = 1;
 fz_colorspace *VAR_10;

 while (VAR_7 != VAR_8)
 {
  fz_display_node VAR_11 = *VAR_7;
  fz_display_node *VAR_12 = VAR_7 + VAR_11.size;

  VAR_7++;
  if (VAR_11.rect)
  {
   VAR_7 += FUNC_0(sizeof(fz_rect));
  }
  switch (VAR_11.cs)
  {
  default:
  case 139:
   break;
  case 144:
  case 143:
   VAR_9 = 1;
   break;
  case 141:
  case 140:
   VAR_9 = 3;
   break;
  case 146:
  case 145:
   VAR_9 = 4;
   break;
  case 142:
   VAR_10 = *(fz_colorspace **)VAR_7;
   VAR_9 = FUNC_1(VAR_4, VAR_10);
   FUNC_2(VAR_4, VAR_10);
   VAR_7 += FUNC_0(sizeof(fz_colorspace *));
   break;
  }
  if (VAR_11.color)
  {
   VAR_7 += FUNC_0(VAR_9 * sizeof(float));
  }
  if (VAR_11.alpha == VAR_0)
  {
   VAR_7 += FUNC_0(sizeof(float));
  }
  if (VAR_11.ctm & VAR_1)
   VAR_7 += FUNC_0(2*sizeof(float));
  if (VAR_11.ctm & VAR_2)
   VAR_7 += FUNC_0(2*sizeof(float));
  if (VAR_11.ctm & VAR_3)
   VAR_7 += FUNC_0(2*sizeof(float));
  if (VAR_11.stroke)
  {
   FUNC_7(VAR_4, *(fz_stroke_state **)VAR_7);
   VAR_7 += FUNC_0(sizeof(fz_stroke_state *));
  }
  if (VAR_11.path)
  {
   int VAR_13 = FUNC_10((fz_path *)VAR_7);
   FUNC_5(VAR_4, (fz_path *)VAR_7);
   VAR_7 += FUNC_0(VAR_13);
  }
  switch(VAR_11.cmd)
  {
  case 130:
  case 128:
  case 135:
  case 136:
  case 129:
   FUNC_8(VAR_4, *(fz_text **)VAR_7);
   break;
  case 131:
   FUNC_6(VAR_4, *(fz_shade **)VAR_7);
   break;
  case 133:
  case 132:
  case 137:
   FUNC_4(VAR_4, *(fz_image **)VAR_7);
   break;
  case 138:
   FUNC_2(VAR_4, *(fz_colorspace **)VAR_7);
   break;
  case 134:
   FUNC_3(VAR_4, *(fz_default_colorspaces **)VAR_7);
   break;
  }
  VAR_7 = VAR_12;
 }
 FUNC_9(VAR_4, VAR_6->list);
 FUNC_9(VAR_4, VAR_6);
}
