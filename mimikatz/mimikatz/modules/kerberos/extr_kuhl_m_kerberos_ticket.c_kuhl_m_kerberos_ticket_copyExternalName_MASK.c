
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_5__ {int NameCount; int * Names; int NameType; } ;
typedef TYPE_1__* PKERB_EXTERNAL_NAME ;
typedef int KERB_EXTERNAL_NAME ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;

PKERB_EXTERNAL_NAME FUNC_3(PKERB_EXTERNAL_NAME VAR_2)
{
 PKERB_EXTERNAL_NAME VAR_3 = ((void*)0);
 DWORD VAR_4;
 BOOL VAR_5 = VAR_1;
 if(VAR_2)
 {
  if((VAR_3 = (PKERB_EXTERNAL_NAME) FUNC_0(VAR_0, sizeof(KERB_EXTERNAL_NAME) + ((VAR_2->NameCount - 1) * sizeof(UNICODE_STRING)))))
  {
   VAR_3->NameType = VAR_2->NameType;
   VAR_3->NameCount = VAR_2->NameCount;
   for(VAR_4 = 0; VAR_4 < VAR_2->NameCount; VAR_4++)
    VAR_5 &= FUNC_2(&VAR_2->Names[VAR_4], &VAR_3->Names[VAR_4]);

   if(!VAR_5)
    VAR_3 = (PKERB_EXTERNAL_NAME) FUNC_1(VAR_3);
  }
 }
 return VAR_3;
}
