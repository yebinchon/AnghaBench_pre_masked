
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int style; int flags; int hwndSelf; int selection_end; int line_height; int char_width; int font; } ;
struct TYPE_13__ {int tmAveCharWidth; int tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef int RECT ;
typedef int HFONT ;
typedef int HDC ;
typedef TYPE_2__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int VAR_7 ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_16(EDITSTATE *VAR_8, HFONT VAR_9, BOOL VAR_10)
{
 TEXTMETRICW VAR_11;
 HDC VAR_12;
 HFONT VAR_13 = 0;
 RECT VAR_14;

 VAR_8->font = VAR_9;
 FUNC_5(VAR_8);
 VAR_12 = FUNC_10(VAR_8->hwndSelf);
 if (VAR_9)
  VAR_13 = FUNC_13(VAR_12, VAR_9);
 FUNC_11(VAR_12, &VAR_11);
 VAR_8->line_height = VAR_11.tmHeight;
 VAR_8->char_width = VAR_11.tmAveCharWidth;
 if (VAR_9)
  FUNC_13(VAR_12, VAR_13);
 FUNC_12(VAR_8->hwndSelf, VAR_12);


 FUNC_9(VAR_8->hwndSelf, &VAR_14);
 FUNC_7(VAR_8, &VAR_14);
 FUNC_4(VAR_8, VAR_0 | VAR_1,
      VAR_2, VAR_2, VAR_6);

 if (VAR_8->style & VAR_5)
  FUNC_2(VAR_8, 0, FUNC_15(VAR_8), 0, ((void*)0));
 else
     FUNC_3(VAR_8);

 if (VAR_10)
  FUNC_8(VAR_8, ((void*)0), VAR_7);
 if (VAR_8->flags & VAR_4) {
  FUNC_1();
  FUNC_0(VAR_8->hwndSelf, 0, 1, VAR_8->line_height);
  FUNC_6(VAR_8, VAR_8->selection_end,
     VAR_8->flags & VAR_3);
  FUNC_14(VAR_8->hwndSelf);
 }
}
