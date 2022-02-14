
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int DriverName; } ;
typedef int PKIWI_BUFFER ;
typedef TYPE_1__* PDRIVER_OBJECT ;
typedef scalar_t__ NTSTATUS ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__**,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int,int*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ,char*,int,int *) ;

NTSTATUS FUNC_6(PKIWI_BUFFER VAR_3)
{
 NTSTATUS VAR_4;
 ULONG VAR_5, VAR_6;
 PDRIVER_OBJECT * VAR_7 = ((void*)0);
 ULONG VAR_8;

 VAR_4 = FUNC_2(((void*)0), 0, &VAR_5);
 if((VAR_4 == VAR_2) && VAR_5)
 {
  VAR_6 = sizeof(PDRIVER_OBJECT) * VAR_5;
  if((VAR_7 = (PDRIVER_OBJECT *) FUNC_0(VAR_0, VAR_6, VAR_1)))
  {
   VAR_4 = FUNC_2(VAR_7, VAR_6, &VAR_5);
   for(VAR_8 = 0; FUNC_3(VAR_4) && (VAR_8 < VAR_5); VAR_8++)
   {
    VAR_4 = FUNC_5(VAR_3, L"[%.2u] %wZ\n",VAR_8 , &(VAR_7[VAR_8]->DriverName));
    FUNC_4(VAR_7[VAR_8]);
   }
   FUNC_1(VAR_7, VAR_1);
  }
 }
 return VAR_4;
}
