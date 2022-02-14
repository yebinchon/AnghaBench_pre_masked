
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_3__ {int DataOffset; int NameLength; char** Name; char* Type; int DataLength; } ;
typedef int PVOID ;
typedef int OBJECT_ATTRIBUTES ;
typedef char* NTSTATUS ;
typedef int KeyValueInformation ;
typedef TYPE_1__ KEY_VALUE_FULL_INFORMATION ;
typedef int * HKEY ;
typedef int DWORD ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int **,int ,int *,int ,int *,int ,int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *,int ,int ,TYPE_1__*,int,int*) ;
 char* FUNC_5 (int **,int ,int *) ;
 char* FUNC_6 (int *,int *,int ,scalar_t__,int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ,char*,int,int *,int *) ;
 int FUNC_8 (int *,char*) ;
 char* VAR_8 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;

void FUNC_11(void)
{
 HKEY VAR_9,VAR_10;
 OBJECT_ATTRIBUTES VAR_11;
 UNICODE_STRING VAR_12,VAR_13;
 NTSTATUS VAR_14;
 KEY_VALUE_FULL_INFORMATION VAR_15[5];
 ULONG VAR_16,VAR_17,VAR_18;
 char VAR_19[10];
 DWORD VAR_20;
  FUNC_10("NtCreateKey volatile: \n");
  FUNC_10("  \\Registry\\Machine\\Software\\test2reactos: ");
  FUNC_8(&VAR_12, L"\\Registry\\Machine\\Software\\test2reactos");
  FUNC_0(&VAR_11, &VAR_12, VAR_4
    , ((void*)0), ((void*)0));
  VAR_14 = FUNC_2 ( &VAR_9, VAR_1 , &VAR_11
  ,0,((void*)0),VAR_6,((void*)0));
  FUNC_10("\t\tStatus=%x\n",VAR_14);
  FUNC_1(VAR_9);
  FUNC_9(L"\\Registry\\Machine\\Software");
  FUNC_10("  ...\\test2 :");
  FUNC_8(&VAR_12, L"\\Registry\\Machine\\Software\\test2reactos\\test2");
  FUNC_0(&VAR_11, &VAR_12, VAR_4
    , ((void*)0), ((void*)0));
  VAR_14 = FUNC_2 ( &VAR_10, VAR_1 , &VAR_11
  ,0,((void*)0),VAR_6,((void*)0));
  FUNC_10("\t\t\t\t\tStatus=%x\n",VAR_14);
  FUNC_10("  ...\\TestVolatile :");
  FUNC_8(&VAR_12, L"TestVolatile");
  FUNC_0(&VAR_11, &VAR_12, VAR_4
    , VAR_10, ((void*)0));
  VAR_14 = FUNC_2 ( &VAR_9, VAR_1 , &VAR_11
  ,0,((void*)0),VAR_6,((void*)0));
  FUNC_10("\t\t\t\tStatus=%x\n",VAR_14);
  FUNC_1(VAR_10);
  FUNC_8(&VAR_13, L"TestREG_SZ");
  FUNC_10("NtSetValueKey reg_sz: ");
  VAR_14=FUNC_6(VAR_9,&VAR_13,0,VAR_7,(PVOID)L"Test Reg_sz",24);
  FUNC_10("\t\t\t\tStatus=%x\n",VAR_14);
  FUNC_8(&VAR_13, L"TestDWORD");
  FUNC_10("NtSetValueKey reg_dword: ");
  VAR_14=FUNC_6(VAR_9,&VAR_13,0,VAR_5,(PVOID)"reac",4);
  FUNC_10("\t\t\tStatus=%x\n",VAR_14);
  FUNC_1(VAR_9);
  FUNC_10("NtOpenKey \\Registry\\Machine\\Software\\test2reactos\\test2\\TestVolatile : ");
  FUNC_8(&VAR_12, L"\\Registry\\Machine\\Software\\test2reactos\\test2\\TestVolatile");
  FUNC_0(&VAR_11,
                               &VAR_12,
                               VAR_4,
                               ((void*)0),
                               ((void*)0));
  VAR_14=FUNC_5( &VAR_9, VAR_3, &VAR_11);
  FUNC_10("\t\t\t\tStatus =%x\n",VAR_14);
  if(VAR_14==0)
  {
    FUNC_10("NtEnumerateValueKey : \n");
    VAR_16=0;
    while(VAR_14 == VAR_8)
    {
      VAR_14=FUNC_4(VAR_9,VAR_16++,VAR_2
  ,&VAR_15[0], sizeof(VAR_15)
  ,&VAR_17);
      if(VAR_14== VAR_8)
 {
        FUNC_10("\tValue:DO=%d, DL=%d, NL=%d, Name = "
  ,VAR_15[0].DataOffset
  ,VAR_15[0].DataLength
  ,VAR_15[0].NameLength);
   for (VAR_18=0;VAR_18<VAR_15[0].NameLength/2;VAR_18++)
  FUNC_10("%C",VAR_15[0].Name[VAR_18]);
        FUNC_10(", Type = %d\n",VAR_15[0].Type);
   if (VAR_15[0].Type == VAR_7)
          FUNC_10("\t\tValue = %S\n",((char*)&VAR_15[0]
         +VAR_15[0].DataOffset));
 }
    }
  }
  FUNC_1(VAR_9);
  FUNC_10("delete \\Registry\\Machine\\software\\test2reactos ?");
  FUNC_7(VAR_0, VAR_19, 3, &VAR_20, ((void*)0)) ;
  if (VAR_19[0] != 'y' && VAR_19[0] != 'Y') return;
  FUNC_8(&VAR_12, L"\\Registry\\Machine\\Software\\test2reactos\\test2\\TestVolatile");
  FUNC_0(&VAR_11,
                               &VAR_12,
                               VAR_4,
                               ((void*)0),
                               ((void*)0));
  FUNC_10("NtOpenKey : ");
  VAR_14=FUNC_5( &VAR_9, VAR_1, &VAR_11);
  FUNC_10("\t\t\t\tStatus =%x\n",VAR_14);
  FUNC_10("NtDeleteKey : ");
  VAR_14=FUNC_3(VAR_9);
  FUNC_10("\t\t\t\tStatus =%x\n",VAR_14);
  FUNC_1(VAR_9);
  FUNC_8(&VAR_12, L"\\Registry\\Machine\\Software\\test2reactos\\test2");
  FUNC_0(&VAR_11,
                               &VAR_12,
                               VAR_4,
                               ((void*)0),
                               ((void*)0));
  FUNC_10("NtOpenKey : ");
  VAR_14=FUNC_5( &VAR_9, VAR_1, &VAR_11);
  FUNC_10("\t\t\t\tStatus =%x\n",VAR_14);
  FUNC_10("NtDeleteKey : ");
  VAR_14=FUNC_3(VAR_9);
  FUNC_10("\t\t\t\tStatus =%x\n",VAR_14);
  FUNC_1(VAR_9);
  FUNC_8(&VAR_12, L"\\Registry\\Machine\\Software\\test2reactos");
  FUNC_0(&VAR_11,
                               &VAR_12,
                               VAR_4,
                               ((void*)0),
                               ((void*)0));
  FUNC_10("NtOpenKey : ");
  VAR_14=FUNC_5( &VAR_9, VAR_1, &VAR_11);
  FUNC_10("\t\t\t\tStatus =%x\n",VAR_14);
  FUNC_10("NtDeleteKey : ");
  VAR_14=FUNC_3(VAR_9);
  FUNC_10("\t\t\t\tStatus =%x\n",VAR_14);
  FUNC_1(VAR_9);
}
