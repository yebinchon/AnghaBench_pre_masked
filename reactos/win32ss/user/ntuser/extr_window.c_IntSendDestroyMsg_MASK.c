
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_21__ {TYPE_3__* ppi; TYPE_13__* rpdesk; TYPE_14__* MessageQueue; } ;
struct TYPE_20__ {int style; int * spwndParent; } ;
struct TYPE_19__ {TYPE_2__* prpwinsta; } ;
struct TYPE_18__ {TYPE_4__* spwndClipOwner; } ;
struct TYPE_17__ {scalar_t__ hWnd; } ;
struct TYPE_16__ {TYPE_1__ CaretInfo; TYPE_4__* spwndFocus; TYPE_4__* spwndActive; } ;
struct TYPE_15__ {TYPE_4__* spwndTrack; } ;
typedef TYPE_4__* PWND ;
typedef TYPE_5__* PTHREADINFO ;
typedef scalar_t__ HWND ;


 int FUNC_0 (scalar_t__*,int ) ;
 TYPE_14__* FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_13__*) ;
 scalar_t__* FUNC_4 (TYPE_4__*) ;
 TYPE_5__* FUNC_5 () ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_4__* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (scalar_t__,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_14(HWND VAR_4)
{
   PTHREADINFO VAR_5;
   PWND VAR_6;

   VAR_5 = FUNC_5();
   VAR_6 = FUNC_8(VAR_4);

   if (VAR_6)
   {





      if ( VAR_5->MessageQueue->spwndActive == VAR_6 ||
          (VAR_5->MessageQueue->spwndActive == ((void*)0) && VAR_5->MessageQueue == FUNC_1()) )
      {
         FUNC_13(VAR_6);
      }


      if (VAR_5->MessageQueue->spwndFocus == VAR_6)
      {
         if ((VAR_6->style & (VAR_2 | VAR_3)) == VAR_2)
         {
            FUNC_12(VAR_6->spwndParent);
         }
         else
         {
            FUNC_12(((void*)0));
         }
      }

      if (VAR_5->MessageQueue->CaretInfo.hWnd == FUNC_9(VAR_6))
      {
         FUNC_10(VAR_5);
      }


      if (VAR_5->rpdesk->spwndTrack == VAR_6)
      {
          FUNC_3(VAR_5->rpdesk);
      }
   }


   if (VAR_5->ppi->prpwinsta != ((void*)0) && VAR_6 == VAR_5->ppi->prpwinsta->spwndClipOwner)
   {

       FUNC_7(VAR_6);
   }


   FUNC_11(VAR_4, VAR_1, 0, 0);





   if (FUNC_2(VAR_4))
   {
      HWND* VAR_7;
      int VAR_8;

      if (!(VAR_7 = FUNC_4( VAR_6 ))) return;

      for (VAR_8 = 0; VAR_7[VAR_8]; VAR_8++)
      {
         if (FUNC_2( VAR_7[VAR_8] )) FUNC_14( VAR_7[VAR_8] );
      }
      FUNC_0(VAR_7, VAR_0);
   }
   else
   {
      FUNC_6("destroyed itself while in WM_DESTROY!\n");
   }
}
