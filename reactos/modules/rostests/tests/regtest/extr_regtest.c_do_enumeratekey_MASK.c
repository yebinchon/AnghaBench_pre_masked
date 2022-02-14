
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_3__ {int NameLength; int * Name; } ;
typedef int PWSTR ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int KeyInformation ;
typedef TYPE_1__ KEY_BASIC_INFORMATION ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,...) ;

void FUNC_6(PWSTR VAR_4)
{
 ULONG VAR_5,VAR_6,VAR_7;
 KEY_BASIC_INFORMATION VAR_8[5];
 NTSTATUS VAR_9;
 OBJECT_ATTRIBUTES VAR_10;
 HANDLE VAR_11;
 UNICODE_STRING VAR_12;

  FUNC_4(&VAR_12, VAR_4);
  FUNC_0(&VAR_10, &VAR_12, VAR_2
    , ((void*)0), ((void*)0));
  VAR_9=FUNC_3( &VAR_11, VAR_1, &VAR_10);
    FUNC_5("NtEnumerateKey : \n");
    VAR_5=0;
    while(VAR_9 == VAR_3)
    {
      VAR_9=FUNC_2(VAR_11,VAR_5++,VAR_0
  ,&VAR_8[0], sizeof(VAR_8)
  ,&VAR_6);
      if(VAR_9== VAR_3)
 {
        FUNC_5("\tSubKey Name = ");
   for (VAR_7=0;VAR_7<VAR_8[0].NameLength/2;VAR_7++)
  FUNC_5("%C",VAR_8[0].Name[VAR_7]);
        FUNC_5("\n");
 }
    }
  FUNC_1(VAR_11);
}
