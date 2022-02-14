
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_10__ {int Flags; int hwndOwner; int * lpstrReplaceWith; int * lpstrFindWhat; int wReplaceWithLen; int wFindWhatLen; } ;
struct TYPE_9__ {TYPE_2__* fra; TYPE_1__* frw; } ;
struct TYPE_11__ {TYPE_4__ fr; TYPE_3__ user_fr; } ;
struct TYPE_8__ {int Flags; int lpstrReplaceWith; int lpstrFindWhat; } ;
struct TYPE_7__ {int lpstrReplaceWith; int lpstrFindWhat; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;
typedef TYPE_5__ COMDLG32_FR_Data ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int,int *,int ) ;
 int VAR_12 ;


 int FUNC_5 (int ,int ,int *,int,int ,int) ;
 scalar_t__ FUNC_6 (int ,int,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(HWND VAR_16, COMDLG32_FR_Data *VAR_17, int VAR_18, int VAR_19)
{
 DWORD VAR_20;

 VAR_17->user_fr.fra->Flags &= ~VAR_6;
 if(VAR_17->fr.Flags & VAR_9)
  VAR_17->user_fr.fra->Flags |= VAR_4;

 if(VAR_19 == VAR_0)
        {
  switch(VAR_18)
  {
  case 131:
   if(FUNC_4(VAR_16, VAR_14, VAR_17->fr.lpstrFindWhat, VAR_17->fr.wFindWhatLen) > 0)
                        {
    VAR_17->user_fr.fra->Flags |= FUNC_0(VAR_16) | VAR_5;
                                if(VAR_17->fr.Flags & VAR_10)
                                {
                                    FUNC_5( VAR_1, 0, VAR_17->fr.lpstrFindWhat, -1,
                                                         VAR_17->user_fr.frw->lpstrFindWhat,
                                                         0x7fffffff );
                                }
                                else
                                {
     FUNC_8(VAR_17->user_fr.fra->lpstrFindWhat, VAR_17->fr.lpstrFindWhat);
                                }
    FUNC_7(VAR_17->fr.hwndOwner, VAR_11, 0, (LPARAM)VAR_17->user_fr.fra);
                        }
   break;

  case 132:
   VAR_17->user_fr.fra->Flags |= FUNC_0(VAR_16) | VAR_3;
   FUNC_7(VAR_17->fr.hwndOwner, VAR_11, 0, (LPARAM)VAR_17->user_fr.fra);
          FUNC_1(VAR_16);
   break;

                case 129:
   VAR_20 = VAR_8;
                        goto Replace;

                case 130:
   VAR_20 = VAR_7;
Replace:
   if((VAR_17->fr.Flags & VAR_9)
                        && FUNC_4(VAR_16, VAR_14, VAR_17->fr.lpstrFindWhat, VAR_17->fr.wFindWhatLen) > 0)
                        {
    VAR_17->fr.lpstrReplaceWith[0] = 0;
    FUNC_4(VAR_16, VAR_15, VAR_17->fr.lpstrReplaceWith, VAR_17->fr.wReplaceWithLen);
    VAR_17->user_fr.fra->Flags |= FUNC_0(VAR_16) | VAR_20;
                                if(VAR_17->fr.Flags & VAR_10)
                                {
                                    FUNC_5( VAR_1, 0, VAR_17->fr.lpstrFindWhat, -1,
                                                         VAR_17->user_fr.frw->lpstrFindWhat,
                                                         0x7fffffff );
                                    FUNC_5( VAR_1, 0, VAR_17->fr.lpstrReplaceWith, -1,
                                                         VAR_17->user_fr.frw->lpstrReplaceWith,
                                                         0x7fffffff );
                                }
                                else
                                {
     FUNC_8(VAR_17->user_fr.fra->lpstrFindWhat, VAR_17->fr.lpstrFindWhat);
     FUNC_8(VAR_17->user_fr.fra->lpstrReplaceWith, VAR_17->fr.lpstrReplaceWith);
                                }
    FUNC_7(VAR_17->fr.hwndOwner, VAR_11, 0, (LPARAM)VAR_17->user_fr.fra);
                        }
   break;

  case 128:
   VAR_17->user_fr.fra->Flags |= FUNC_0(VAR_16);
   FUNC_7(VAR_17->fr.hwndOwner, VAR_12, (WPARAM)VAR_16, (LPARAM)VAR_17->user_fr.fra);
   break;
                }
        }
        else if(VAR_19 == VAR_2 && VAR_18 == VAR_14)
 {
  BOOL VAR_21 = FUNC_6(VAR_16, VAR_14, VAR_13, 0, 0) > 0;
  FUNC_2(FUNC_3(VAR_16, 131), VAR_21);
                if(VAR_17->fr.Flags & VAR_9)
                {
   FUNC_2(FUNC_3(VAR_16, 130), VAR_21);
   FUNC_2(FUNC_3(VAR_16, 129), VAR_21);
                }
 }
}
