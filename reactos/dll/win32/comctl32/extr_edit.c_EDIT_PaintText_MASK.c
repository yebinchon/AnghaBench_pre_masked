
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ left; } ;
struct TYPE_13__ {scalar_t__ composition_len; int style; scalar_t__ text; scalar_t__ x_offset; TYPE_1__ format_rect; int tabs; int tabs_count; } ;
struct TYPE_12__ {int lfUnderline; } ;
struct TYPE_11__ {scalar_t__ cx; } ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ LOGFONTW ;
typedef scalar_t__ INT ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef TYPE_4__ EDITSTATE ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int VAR_5 ;
 int FUNC_15 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static INT FUNC_17(EDITSTATE *VAR_6, HDC VAR_7, INT VAR_8, INT VAR_9, INT VAR_10, INT VAR_11, INT VAR_12, BOOL VAR_13)
{
 COLORREF VAR_14;
 COLORREF VAR_15;
 LOGFONTW VAR_16;
 HFONT VAR_17 = 0;
 HFONT VAR_18 = 0;
 INT VAR_19;
 INT VAR_20;
 INT VAR_21;
 SIZE VAR_22;

 if (!VAR_12)
  return 0;
 VAR_21 = FUNC_4(VAR_7);
 VAR_14 = FUNC_3(VAR_7);
 VAR_15 = FUNC_8(VAR_7);
 if (VAR_13) {
         if (VAR_6->composition_len == 0)
         {
   FUNC_12(VAR_7, FUNC_7(VAR_0));
   FUNC_14(VAR_7, FUNC_7(VAR_1));
   FUNC_13( VAR_7, VAR_4);
         }
  else
  {
   HFONT VAR_23 = FUNC_5(VAR_7,VAR_3);
   FUNC_6(VAR_23,sizeof(LOGFONTW),&VAR_16);
   VAR_16.lfUnderline = VAR_5;
   VAR_17 = FUNC_0(&VAR_16);
   VAR_18 = FUNC_11(VAR_7,VAR_17);
         }
 }
 VAR_20 = FUNC_2(VAR_6, VAR_10);
 if (VAR_6->style & VAR_2) {
  VAR_19 = (INT)FUNC_10(FUNC_15(VAR_7, VAR_8, VAR_9, VAR_6->text + VAR_20 + VAR_11, VAR_12,
     VAR_6->tabs_count, VAR_6->tabs, VAR_6->format_rect.left - VAR_6->x_offset));
 } else {
  FUNC_16(VAR_7, VAR_8, VAR_9, VAR_6->text + VAR_20 + VAR_11, VAR_12);
  FUNC_9(VAR_7, VAR_6->text + VAR_20 + VAR_11, VAR_12, &VAR_22);
  VAR_19 = VAR_22.cx;
 }
 if (VAR_13) {
  if (VAR_6->composition_len == 0)
  {
   FUNC_12(VAR_7, VAR_14);
   FUNC_14(VAR_7, VAR_15);
   FUNC_13( VAR_7, VAR_21);
  }
  else
  {
   if (VAR_18)
    FUNC_11(VAR_7,VAR_18);
   if (VAR_17)
    FUNC_1(VAR_17);
         }
 }
 return VAR_19;
}
