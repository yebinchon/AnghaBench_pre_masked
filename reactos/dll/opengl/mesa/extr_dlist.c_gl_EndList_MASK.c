
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Exec; int API; int CompileFlag; int ExecuteFlag; int * CurrentListPtr; scalar_t__ CurrentListNum; TYPE_1__* Shared; } ;
struct TYPE_7__ {int DisplayList; } ;
typedef int Node ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int *) ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;

void FUNC_4( GLcontext *VAR_4 )
{
   Node *VAR_5;


   if (!VAR_4->CurrentListPtr) {
      FUNC_3( VAR_4, VAR_1, "glEndList" );
      return;
   }

   VAR_5 = FUNC_1( VAR_4, VAR_3, 0 );
   (void)VAR_5;


   FUNC_2(VAR_4, VAR_4->CurrentListNum);

   FUNC_0(VAR_4->Shared->DisplayList, VAR_4->CurrentListNum, VAR_4->CurrentListPtr);

   VAR_4->CurrentListNum = 0;
   VAR_4->CurrentListPtr = ((void*)0);
   VAR_4->ExecuteFlag = VAR_2;
   VAR_4->CompileFlag = VAR_0;

   VAR_4->API = VAR_4->Exec;
}
