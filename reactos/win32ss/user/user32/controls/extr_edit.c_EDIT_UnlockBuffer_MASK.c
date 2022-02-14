
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int lock_count; int * text; scalar_t__ hloc32W; scalar_t__ hloc32A; int hwndSelf; scalar_t__ hlocapp; } ;
typedef scalar_t__ HLOCAL ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ,int ,int *,scalar_t__,int *,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(EDITSTATE *VAR_3, BOOL VAR_4)
{
        if (VAR_3->hlocapp) return;


 if(!FUNC_1(VAR_3->hwndSelf))
 {
     FUNC_8("edit hwnd %p already destroyed\n", VAR_3->hwndSelf);
     return;
 }

 if (!VAR_3->lock_count) {
  FUNC_0("lock_count == 0 ... please report\n");
  return;
 }
 if (!VAR_3->text) {
  FUNC_0("es->text == 0 ... please report\n");
  return;
 }

 if (VAR_4 || (VAR_3->lock_count == 1)) {
     if (VAR_3->hloc32W) {
  UINT VAR_5 = 0;
  UINT VAR_6 = FUNC_10(VAR_3) + 1;

  if(VAR_3->hloc32A)
  {
      UINT VAR_7 = FUNC_9(VAR_0, 0, VAR_3->text, VAR_6, ((void*)0), 0, ((void*)0), ((void*)0));
      FUNC_7("Synchronizing with 32-bit ANSI buffer\n");
      FUNC_7("%d WCHARs translated to %d bytes\n", VAR_6, VAR_7);
      VAR_5 = FUNC_4(VAR_3->hloc32A);
      if(VAR_7 > VAR_5)
      {
   HLOCAL VAR_8;
   UINT VAR_9 = FUNC_6(VAR_7);
   FUNC_7("Resizing 32-bit ANSI buffer from %d to %d bytes\n", VAR_5, VAR_9);
   VAR_8 = FUNC_3(VAR_3->hloc32A, VAR_9, VAR_1 | VAR_2);
   if(VAR_8)
   {
       VAR_3->hloc32A = VAR_8;
       VAR_5 = FUNC_4(VAR_8);
       FUNC_7("Real new size %d bytes\n", VAR_5);
   }
   else
       FUNC_8("FAILED! Will synchronize partially\n");
      }
      FUNC_9(VAR_0, 0, VAR_3->text, VAR_6,
                                        FUNC_2(VAR_3->hloc32A), VAR_5, ((void*)0), ((void*)0));
                    FUNC_5(VAR_3->hloc32A);
  }

  FUNC_5(VAR_3->hloc32W);
  VAR_3->text = ((void*)0);
     }
     else {
  FUNC_0("no buffer ... please report\n");
  return;
     }
 }
 VAR_3->lock_count--;
}
