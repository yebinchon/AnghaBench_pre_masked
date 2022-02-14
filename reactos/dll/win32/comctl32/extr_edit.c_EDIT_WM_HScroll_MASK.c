
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int right; int left; } ;
struct TYPE_8__ {int style; scalar_t__ x_offset; int char_width; scalar_t__ text_width; TYPE_1__ format_rect; int hwndSelf; int flags; } ;
typedef int LRESULT ;
typedef int INT ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_3 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_6 (char*,...) ;
 int VAR_7 ;

__attribute__((used)) static LRESULT FUNC_7(EDITSTATE *VAR_8, INT VAR_9, INT VAR_10)
{
 INT VAR_11;
 INT VAR_12;

 if (!(VAR_8->style & VAR_3))
  return 0;

 if (!(VAR_8->style & VAR_2))
  return 0;

 VAR_11 = 0;
 VAR_12 = VAR_8->format_rect.right - VAR_8->format_rect.left;
 switch (VAR_9) {
 case 134:
  FUNC_6("SB_LINELEFT\n");
  if (VAR_8->x_offset)
   VAR_11 = -VAR_8->char_width;
  break;
 case 133:
  FUNC_6("SB_LINERIGHT\n");
  if (VAR_8->x_offset < VAR_8->text_width)
   VAR_11 = VAR_8->char_width;
  break;
 case 132:
  FUNC_6("SB_PAGELEFT\n");
  if (VAR_8->x_offset)
   VAR_11 = -VAR_12 / VAR_5 / VAR_8->char_width * VAR_8->char_width;
  break;
 case 131:
  FUNC_6("SB_PAGERIGHT\n");
  if (VAR_8->x_offset < VAR_8->text_width)
   VAR_11 = VAR_12 / VAR_5 / VAR_8->char_width * VAR_8->char_width;
  break;
 case 135:
  FUNC_6("SB_LEFT\n");
  if (VAR_8->x_offset)
   VAR_11 = -VAR_8->x_offset;
  break;
 case 130:
  FUNC_6("SB_RIGHT\n");
  if (VAR_8->x_offset < VAR_8->text_width)
   VAR_11 = VAR_8->text_width - VAR_8->x_offset;
  break;
 case 128:
  FUNC_6("SB_THUMBTRACK %d\n", VAR_10);
  VAR_8->flags |= VAR_0;
  if(VAR_8->style & VAR_7)
      VAR_11 = VAR_10 - VAR_8->x_offset;
  else
  {
      INT VAR_13, VAR_14;

      if(VAR_10 < 0 || VAR_10 > 100) return 0;

      VAR_13 = VAR_8->format_rect.right - VAR_8->format_rect.left;
      VAR_14 = VAR_10 * (VAR_8->text_width - VAR_13) / 100;
      VAR_11 = VAR_8->text_width ? (VAR_14 - VAR_8->x_offset) : 0;
  }
  break;
 case 129:
  FUNC_6("SB_THUMBPOSITION %d\n", VAR_10);
  VAR_8->flags &= ~VAR_0;
  if(FUNC_5( VAR_8->hwndSelf, VAR_4 ) & VAR_7)
      VAR_11 = VAR_10 - VAR_8->x_offset;
  else
  {
      INT VAR_15, VAR_16;

      if(VAR_10 < 0 || VAR_10 > 100) return 0;

      VAR_15 = VAR_8->format_rect.right - VAR_8->format_rect.left;
      VAR_16 = VAR_10 * (VAR_8->text_width - VAR_15) / 100;
      VAR_11 = VAR_8->text_width ? (VAR_16 - VAR_8->x_offset) : 0;
  }
  if (!VAR_11) {

   FUNC_2(VAR_8);
   FUNC_1(VAR_8, VAR_1);
  }
  break;
 case 136:
  FUNC_6("SB_ENDSCROLL\n");
  break;






 case 138:
 {
  LRESULT VAR_17;
  if(FUNC_5( VAR_8->hwndSelf, VAR_4 ) & VAR_7)
      VAR_17 = FUNC_4(VAR_8->hwndSelf, VAR_6);
  else
  {

      INT VAR_18 = VAR_8->format_rect.right - VAR_8->format_rect.left;
      VAR_17 = VAR_8->text_width ? VAR_8->x_offset * 100 / (VAR_8->text_width - VAR_18) : 0;
  }
  FUNC_6("EM_GETTHUMB: returning %ld\n", VAR_17);
  return VAR_17;
 }
 case 137:
  FUNC_6("EM_LINESCROLL16\n");
  VAR_11 = VAR_10;
  break;

 default:
  FUNC_3("undocumented WM_HSCROLL action %d (0x%04x), please report\n",
                    VAR_9, VAR_9);
  return 0;
 }
 if (VAR_11)
 {
     INT VAR_19 = VAR_8->format_rect.right - VAR_8->format_rect.left;

     if(VAR_8->x_offset + VAR_11 + VAR_19 > VAR_8->text_width)
  VAR_11 = VAR_8->text_width - VAR_19 - VAR_8->x_offset;
     if(VAR_11)
  FUNC_0(VAR_8, VAR_11, 0);
 }
 return 0;
}
