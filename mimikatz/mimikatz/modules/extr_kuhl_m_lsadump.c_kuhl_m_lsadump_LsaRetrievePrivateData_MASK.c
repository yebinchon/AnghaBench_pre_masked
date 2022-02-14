
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int MaximumLength; void* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_15__ {int member_0; } ;
typedef void* PWSTR ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef TYPE_3__ LSA_OBJECT_ATTRIBUTES ;
typedef int LSA_HANDLE ;
typedef int LARGE_INTEGER ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,int ,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_5 (int ,TYPE_1__**,int *,TYPE_1__**,int *) ;
 int FUNC_6 (int ,TYPE_1__*,TYPE_1__**) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (void*,void*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS FUNC_10(PCWSTR VAR_4, PCWSTR VAR_5, PUNICODE_STRING VAR_6, BOOL VAR_7)
{
 NTSTATUS VAR_8 = VAR_3;
 LSA_OBJECT_ATTRIBUTES VAR_9 = {0};
 LSA_HANDLE VAR_10, VAR_11;
 UNICODE_STRING VAR_12, VAR_13, *VAR_14, *VAR_15;
 LARGE_INTEGER VAR_16, VAR_17;

 if(VAR_5)
 {
  FUNC_9(&VAR_12, VAR_5);
  FUNC_9(&VAR_13, VAR_4);
  VAR_8 = FUNC_3(&VAR_13, &VAR_9, VAR_1, &VAR_10);
  if(FUNC_7(VAR_8))
  {
   if(!VAR_7)
   {
    VAR_8 = FUNC_6(VAR_10, &VAR_12, &VAR_14);
    if(FUNC_7(VAR_8))
    {
     if(VAR_14)
     {
      *VAR_6 = *VAR_14;
      if((VAR_6->Buffer = (PWSTR) FUNC_0(VAR_0, VAR_6->MaximumLength)))
       FUNC_8(VAR_6->Buffer, VAR_14->Buffer, VAR_6->MaximumLength);
      FUNC_2(VAR_14);
     }
    }
   }
   else
   {
    VAR_8 = FUNC_4(VAR_10, &VAR_12, VAR_2, &VAR_11);
    if(FUNC_7(VAR_8))
    {
     VAR_8 = FUNC_5(VAR_11, &VAR_14, &VAR_16, &VAR_15, &VAR_17);
     if(FUNC_7(VAR_8))
     {
      if(VAR_14)
      {
       *VAR_6 = *VAR_14;
       if((VAR_6->Buffer = (PWSTR) FUNC_0(VAR_0, VAR_6->MaximumLength)))
        FUNC_8(VAR_6->Buffer, VAR_14->Buffer, VAR_6->MaximumLength);
       FUNC_2(VAR_14);
      }
      if(VAR_15)
       FUNC_2(VAR_15);
     }
     FUNC_1(VAR_11);
    }
   }
   FUNC_1(VAR_10);
  }
 }
 return VAR_8;
}
