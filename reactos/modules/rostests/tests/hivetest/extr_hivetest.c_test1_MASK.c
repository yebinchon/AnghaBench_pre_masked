
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_4__ {int NameLength; scalar_t__* Name; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int KeyInformation ;
typedef TYPE_1__ KEY_BASIC_INFORMATION ;
typedef int * HANDLE ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_3 (int **,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_1__*,int,int*) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*,...) ;

void FUNC_7(void)
{
 HANDLE VAR_4 = ((void*)0), VAR_5;
 OBJECT_ATTRIBUTES VAR_6;
 NTSTATUS VAR_7;
 UNICODE_STRING VAR_8 = FUNC_5(L"\\Registry\\Machine\\Software");
 ULONG VAR_9,VAR_10,VAR_11;
 KEY_BASIC_INFORMATION VAR_12[5];




  FUNC_6("NtOpenKey \\Registry\\Machine\\Software : ");
  FUNC_0(&VAR_6,
                               &VAR_8,
                               VAR_2,
                               ((void*)0),
                               ((void*)0));
  VAR_7=FUNC_3( &VAR_5, VAR_1, &VAR_6);
  FUNC_6("\t\t\t\tStatus =%x\n",VAR_7);
  if(VAR_7==0)
  {
    FUNC_6("NtQueryKey : ");
    VAR_7=FUNC_4(VAR_5,VAR_0
  ,&VAR_12[0], sizeof(VAR_12)
  ,&VAR_10);
    FUNC_6("\t\t\t\t\tStatus =%x\n",VAR_7);
    if (VAR_7 == VAR_3)
    {
        FUNC_6("\tKey Name = ");
   for (VAR_11=0;VAR_11<VAR_12[0].NameLength/2;VAR_11++)
  FUNC_6("%C",VAR_12[0].Name[VAR_11]);
        FUNC_6("\n");
    }
    FUNC_6("NtEnumerateKey : \n");
    VAR_9=0;
    while(VAR_7 == VAR_3)
    {
      VAR_7=FUNC_2(VAR_5,VAR_9++,VAR_0
  ,&VAR_12[0], sizeof(VAR_12)
  ,&VAR_10);
      if(VAR_7== VAR_3)
 {
        FUNC_6("\tSubKey Name = ");
   for (VAR_11=0;VAR_11<VAR_12[0].NameLength/2;VAR_11++)
  FUNC_6("%C",VAR_12[0].Name[VAR_11]);
        FUNC_6("\n");
 }
    }
    FUNC_6("NtClose : ");
    VAR_7 = FUNC_1( VAR_5 );
    FUNC_6("\t\t\t\t\tStatus =%x\n",VAR_7);
  }
  FUNC_1(VAR_4);
}
