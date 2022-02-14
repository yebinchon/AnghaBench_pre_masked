
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int ioctlCode; int (* pCommand ) (int,int **) ;int command; } ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef int BOOL ;


 unsigned short FUNC_0 (TYPE_1__*) ;
 int ** FUNC_1 (int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int,int **) ;
 scalar_t__ FUNC_5 (int *) ;

NTSTATUS FUNC_6(wchar_t * VAR_4)
{
 NTSTATUS VAR_5 = VAR_2;
 int VAR_6;
 wchar_t ** VAR_7 = FUNC_1(VAR_4, &VAR_6);
 unsigned short VAR_8;
 BOOL VAR_9 = VAR_0;

 if(VAR_7 && (VAR_6 > 0))
 {
  for(VAR_8 = 0; !VAR_9 && (VAR_8 < FUNC_0(VAR_3)); VAR_8++)
  {
   if((VAR_9 = FUNC_2(VAR_7[0], VAR_3[VAR_8].command) == 0))
   {
    if(VAR_3[VAR_8].pCommand)
     VAR_5 = VAR_3[VAR_8].pCommand(VAR_6 - 1, VAR_7 + 1);
    else
     FUNC_3(VAR_3[VAR_8].ioctlCode, ((void*)0), 0);
   }
  }
  if(!VAR_9)
   FUNC_3(VAR_1, VAR_4, (DWORD) (FUNC_5(VAR_4) + 1) * sizeof(wchar_t));
 }
 return VAR_5;
}
