
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int style; int y_offset; int line_count; int hwndSelf; int flags; } ;
typedef int LRESULT ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_4 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (char*,...) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_9(EDITSTATE *VAR_7, INT VAR_8, INT VAR_9)
{
 INT VAR_10;

 if (!(VAR_7->style & VAR_3))
  return 0;

 if (!(VAR_7->style & VAR_2))
  return 0;

 VAR_10 = 0;
 switch (VAR_8) {
 case 133:
 case 134:
 case 131:
 case 132:
  FUNC_7("action %d (%s)\n", VAR_8, (VAR_8 == 133 ? "SB_LINEUP" :
         (VAR_8 == 134 ? "SB_LINEDOWN" :
          (VAR_8 == 131 ? "SB_PAGEUP" :
           "SB_PAGEDOWN"))));
  FUNC_1(VAR_7, VAR_8);
  return 0;
 case 128:
  FUNC_7("SB_TOP\n");
  VAR_10 = -VAR_7->y_offset;
  break;
 case 136:
  FUNC_7("SB_BOTTOM\n");
  VAR_10 = VAR_7->line_count - 1 - VAR_7->y_offset;
  break;
 case 129:
  FUNC_7("SB_THUMBTRACK %d\n", VAR_9);
  VAR_7->flags |= VAR_0;
  if(VAR_7->style & VAR_6)
      VAR_10 = VAR_9 - VAR_7->y_offset;
  else
  {

      INT VAR_11, VAR_12;

      if(VAR_9 < 0 || VAR_9 > 100) return 0;
      VAR_11 = FUNC_8(VAR_7);
      VAR_12 = VAR_9 * (VAR_7->line_count - VAR_11) / 100;
      VAR_10 = VAR_7->line_count ? (VAR_12 - VAR_7->y_offset) : 0;
      FUNC_7("line_count=%d, y_offset=%d, pos=%d, dy = %d\n",
       VAR_7->line_count, VAR_7->y_offset, VAR_9, VAR_10);
  }
  break;
 case 130:
  FUNC_7("SB_THUMBPOSITION %d\n", VAR_9);
  VAR_7->flags &= ~VAR_0;
  if(VAR_7->style & VAR_6)
      VAR_10 = VAR_9 - VAR_7->y_offset;
  else
  {

      INT VAR_13, VAR_14;

      if(VAR_9 < 0 || VAR_9 > 100) return 0;
      VAR_13 = FUNC_8(VAR_7);
      VAR_14 = VAR_9 * (VAR_7->line_count - VAR_13) / 100;
      VAR_10 = VAR_7->line_count ? (VAR_14 - VAR_7->y_offset) : 0;
      FUNC_7("line_count=%d, y_offset=%d, pos=%d, dy = %d\n",
       VAR_7->line_count, VAR_7->y_offset, VAR_9, VAR_10);
  }
  if (!VAR_10)
  {

   FUNC_3(VAR_7);
   FUNC_2(VAR_7, VAR_1);
  }
  break;
 case 135:
  FUNC_7("SB_ENDSCROLL\n");
  break;






 case 138:
 {
  LRESULT VAR_15;
  if(FUNC_6( VAR_7->hwndSelf, VAR_4 ) & VAR_6)
      VAR_15 = FUNC_5(VAR_7->hwndSelf, VAR_5);
  else
  {

      INT VAR_16 = FUNC_8(VAR_7);
      VAR_15 = VAR_7->line_count ? VAR_7->y_offset * 100 / (VAR_7->line_count - VAR_16) : 0;
  }
  FUNC_7("EM_GETTHUMB: returning %ld\n", VAR_15);
  return VAR_15;
 }
 case 137:
  FUNC_7("EM_LINESCROLL %d\n", VAR_9);
  VAR_10 = VAR_9;
  break;

 default:
  FUNC_4("undocumented WM_VSCROLL action %d (0x%04x), please report\n",
                    VAR_8, VAR_8);
  return 0;
 }
 if (VAR_10)
  FUNC_0(VAR_7, 0, VAR_10);
 return 0;
}
