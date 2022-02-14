
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {int CtlID; void* hwndItem; void* CtlType; } ;
struct TYPE_10__ {int CtlID; void* hwndItem; void* CtlType; } ;
struct TYPE_9__ {int CtlID; void* hwndItem; void* CtlType; } ;
struct TYPE_8__ {int owner; void* self; } ;
struct TYPE_7__ {int CtlID; void* CtlType; } ;
typedef TYPE_1__ MEASUREITEMSTRUCT ;
typedef int LRESULT ;
typedef TYPE_2__* LPHEADCOMBO ;
typedef scalar_t__ LPARAM ;
typedef void* HWND ;
typedef TYPE_3__ DRAWITEMSTRUCT ;
typedef TYPE_4__ DELETEITEMSTRUCT ;
typedef TYPE_5__ COMPAREITEMSTRUCT ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 void* VAR_1 ;
 int FUNC_1 (int ,int,int,scalar_t__) ;
 int FUNC_2 (char*,void*,int) ;





__attribute__((used)) static LRESULT FUNC_3( LPHEADCOMBO VAR_2, UINT VAR_3, LPARAM VAR_4 )
{
   HWND VAR_5 = VAR_2->self;
   UINT VAR_6 = (UINT)FUNC_0( VAR_5, VAR_0 );

   FUNC_2("[%p]: ownerdraw op %04x\n", VAR_2->self, VAR_3 );

   switch( VAR_3 )
   {
   case 130:
       {
           DELETEITEMSTRUCT *VAR_7 = (DELETEITEMSTRUCT *)VAR_4;
           VAR_7->CtlType = VAR_1;
           VAR_7->CtlID = VAR_6;
           VAR_7->hwndItem = VAR_5;
           break;
       }
   case 129:
       {
           DRAWITEMSTRUCT *VAR_8 = (DRAWITEMSTRUCT *)VAR_4;
           VAR_8->CtlType = VAR_1;
           VAR_8->CtlID = VAR_6;
           VAR_8->hwndItem = VAR_5;
           break;
       }
   case 131:
       {
           COMPAREITEMSTRUCT *VAR_9 = (COMPAREITEMSTRUCT *)VAR_4;
           VAR_9->CtlType = VAR_1;
           VAR_9->CtlID = VAR_6;
           VAR_9->hwndItem = VAR_5;
           break;
       }
   case 128:
       {
           MEASUREITEMSTRUCT *VAR_10 = (MEASUREITEMSTRUCT *)VAR_4;
           VAR_10->CtlType = VAR_1;
           VAR_10->CtlID = VAR_6;
           break;
       }
   }
   return FUNC_1(VAR_2->owner, VAR_3, VAR_6, VAR_4);
}
