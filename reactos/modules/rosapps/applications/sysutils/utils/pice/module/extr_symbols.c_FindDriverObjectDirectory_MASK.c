
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_11__ {TYPE_3__ head; } ;
struct TYPE_8__ {int Buffer; } ;
struct TYPE_9__ {TYPE_1__ Name; } ;
typedef TYPE_2__* POBJECT_HEADER ;
typedef int * POBJECT ;
typedef TYPE_3__* PLIST_ENTRY ;
typedef int * PDIRECTORY_OBJECT ;


 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,char*) ;
 TYPE_4__** VAR_2 ;

POBJECT FUNC_6( void )
{
    PLIST_ENTRY VAR_3;
    POBJECT_HEADER VAR_4;
 PDIRECTORY_OBJECT VAR_5;

 FUNC_2();

 if( VAR_2 && *VAR_2 ){
  VAR_3 = (*VAR_2)->head.Flink;
  while (VAR_3!=(&((*VAR_2)->head)))
  {
   VAR_4 = FUNC_0(VAR_3,VAR_1,VAR_0);
       FUNC_1((0,"Scanning %S\n",VAR_4->Name.Buffer));
   if (FUNC_5(VAR_4->Name.Buffer, L"Modules")==0)
   {
    VAR_5=FUNC_3(VAR_4);
    FUNC_1(*(0,"Found it %x\n",VAR_5));
    return VAR_5;
   }
     VAR_3 = VAR_3->Flink;
  }
 }
 FUNC_4();
 return ((void*)0);
}
