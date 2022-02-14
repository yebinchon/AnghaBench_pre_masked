
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int * BaseAddress; scalar_t__ size; struct TYPE_4__* next; } ;
typedef TYPE_1__* PDEBUG_MODULE ;
typedef int DEBUG_MODULE ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_5( PDEBUG_MODULE *VAR_3, ULONG VAR_4 )
{
 ULONG VAR_5;
 PDEBUG_MODULE VAR_6 = ((void*)0), VAR_7 = *VAR_3;

 FUNC_1();

 FUNC_0(VAR_7==((void*)0));

 for(VAR_5=1;VAR_5<=VAR_4;VAR_5++){
  VAR_7 = (PDEBUG_MODULE)FUNC_2( VAR_1, sizeof( DEBUG_MODULE ) );
  if( !VAR_7 ){
   FUNC_3(VAR_6);
   return VAR_0;
  }
  VAR_7->next = VAR_6;
  VAR_7->size = 0;
  VAR_7->BaseAddress = ((void*)0);

  VAR_6 = VAR_7;
 }
 *VAR_3 = VAR_7;

 FUNC_4();

 return VAR_2;
}
