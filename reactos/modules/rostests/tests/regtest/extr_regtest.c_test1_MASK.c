
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_8__ {int NameLength; char** Name; } ;
struct TYPE_7__ {int DataOffset; int NameLength; char** Name; char* Type; int DataLength; } ;
typedef char* PWCHAR ;
typedef int PCHAR ;
typedef int OBJECT_ATTRIBUTES ;
typedef char* NTSTATUS ;
typedef int KeyValueInformation ;
typedef int KeyInformation ;
typedef TYPE_1__ KEY_VALUE_FULL_INFORMATION ;
typedef TYPE_2__ KEY_BASIC_INFORMATION ;
typedef int * HKEY ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *,int ,int ,TYPE_2__*,int,int*) ;
 char* FUNC_3 (int *,int ,int ,TYPE_1__*,int,int*) ;
 char* FUNC_4 (int **,int ,int *) ;
 char* FUNC_5 (int *,int ,TYPE_2__*,int,int*) ;
 char* FUNC_6 (int *,int *,int ,TYPE_1__*,int,int*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,char*) ;
 char* VAR_6 ;
 int FUNC_9 (char*,...) ;

void FUNC_10(void)
{
 HKEY VAR_7 = ((void*)0), VAR_8;
 OBJECT_ATTRIBUTES VAR_9;
 NTSTATUS VAR_10;
 UNICODE_STRING VAR_11 = FUNC_7(L"\\Registry");
 ULONG VAR_12,VAR_13,VAR_14;
 KEY_BASIC_INFORMATION VAR_15[5];
 KEY_VALUE_FULL_INFORMATION VAR_16[5];

  FUNC_9("NtOpenKey \\Registry : ");
  FUNC_0(&VAR_9,
                               &VAR_11,
                               VAR_4,
                               ((void*)0),
                               ((void*)0));
  VAR_10=FUNC_4( &VAR_8, VAR_3, &VAR_9);
  FUNC_9("\t\t\t\tStatus =%x\n",VAR_10);
  if(VAR_10==0)
  {
    FUNC_9("NtQueryKey : ");
    VAR_10=FUNC_5(VAR_8,VAR_1
  ,&VAR_15[0], sizeof(VAR_15)
  ,&VAR_13);
    FUNC_9("\t\t\t\t\tStatus =%x\n",VAR_10);
    if (VAR_10 == VAR_6)
    {
        FUNC_9("\tKey Name = ");
   for (VAR_14=0;VAR_14<VAR_15[0].NameLength/2;VAR_14++)
  FUNC_9("%C",VAR_15[0].Name[VAR_14]);
        FUNC_9("\n");
    }
    FUNC_9("NtEnumerateKey : \n");
    VAR_12=0;
    while(VAR_10 == VAR_6)
    {
      VAR_10=FUNC_2(VAR_8,VAR_12++,VAR_1
  ,&VAR_15[0], sizeof(VAR_15)
  ,&VAR_13);
      if(VAR_10== VAR_6)
 {
        FUNC_9("\tSubKey Name = ");
   for (VAR_14=0;VAR_14<VAR_15[0].NameLength/2;VAR_14++)
  FUNC_9("%C",VAR_15[0].Name[VAR_14]);
        FUNC_9("\n");
 }
    }
    FUNC_9("NtClose : ");
    VAR_10 = FUNC_1( VAR_8 );
    FUNC_9("\t\t\t\t\tStatus =%x\n",VAR_10);
  }
  FUNC_1(VAR_7);

  FUNC_9("NtOpenKey \\Registry\\Machine : ");
  FUNC_8(&VAR_11, L"\\Registry\\Machine");
  FUNC_0(&VAR_9,
                               &VAR_11,
                               VAR_4,
                               ((void*)0),
                               ((void*)0));
  VAR_10=FUNC_4( &VAR_8, VAR_3, &VAR_9);
  FUNC_9("\t\t\tStatus =%x\n",VAR_10);

  FUNC_9("NtOpenKey System\\Setup : ");
  FUNC_8(&VAR_11, L"System\\Setup");
  FUNC_0(&VAR_9, &VAR_11, VAR_4
    , VAR_8 , ((void*)0));
  VAR_10 = FUNC_4 ( &VAR_7, VAR_0 , &VAR_9);
  FUNC_9("\t\t\tStatus =%x\n",VAR_10);
  if(VAR_10==0)
  {
    FUNC_9("NtQueryValueKey : ");
    FUNC_8(&VAR_11, L"CmdLine");
    VAR_10=FUNC_6(VAR_7,&VAR_11,VAR_2
  ,&VAR_16[0], sizeof(VAR_16)
  ,&VAR_13);
    FUNC_9("\t\t\t\tStatus =%x\n",VAR_10);
    if (VAR_10 == VAR_6)
    {
      FUNC_9("\tValue:DO=%d, DL=%d, NL=%d, Name = "
       ,VAR_16[0].DataOffset
       ,VAR_16[0].DataLength
       ,VAR_16[0].NameLength);
      for (VAR_14=0;VAR_14<10 && VAR_14<VAR_16[0].NameLength/2;VAR_14++)
 FUNC_9("%C",VAR_16[0].Name[VAR_14]);
      FUNC_9("\n");
      FUNC_9("\t\tType = %d\n",VAR_16[0].Type);
      if (VAR_16[0].Type == VAR_5)
 FUNC_9("\t\tValue = %S\n",
  (PWCHAR)((PCHAR)&VAR_16[0] + VAR_16[0].DataOffset));
    }
    FUNC_9("NtEnumerateValueKey : \n");
    VAR_12=0;
    while(VAR_10 == VAR_6)
    {
      VAR_10=FUNC_3(VAR_7,VAR_12++,VAR_2
  ,&VAR_16[0], sizeof(VAR_16)
  ,&VAR_13);
      if(VAR_10== VAR_6)
 {
        FUNC_9("\tValue:DO=%d, DL=%d, NL=%d, Name = "
  ,VAR_16[0].DataOffset
  ,VAR_16[0].DataLength
  ,VAR_16[0].NameLength);
   for (VAR_14=0;VAR_14<VAR_16[0].NameLength/2;VAR_14++)
  FUNC_9("%C",VAR_16[0].Name[VAR_14]);
        FUNC_9(", Type = %d\n",VAR_16[0].Type);
   if (VAR_16[0].Type == VAR_5)
          FUNC_9("\t\tValue = %S\n",((char*)&VAR_16[0]
         +VAR_16[0].DataOffset));
 }
    }
    FUNC_9("NtClose : ");
    VAR_10 = FUNC_1( VAR_7 );
    FUNC_9("\t\t\t\t\tStatus =%x\n",VAR_10);
  }
  FUNC_1( VAR_8 );
}
