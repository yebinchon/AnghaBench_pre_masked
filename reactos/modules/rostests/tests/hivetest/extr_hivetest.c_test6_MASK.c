
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Type; int NameLength; int * Name; int DataLength; } ;
typedef int PVOID ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int KeyValueInformation ;
typedef TYPE_1__ KEY_VALUE_FULL_INFORMATION ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int,int *,int ,int *,int,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_5 (int ,int *,int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (char*,...) ;

void FUNC_8(void)
{
  HANDLE VAR_11;
  OBJECT_ATTRIBUTES VAR_12;
  UNICODE_STRING VAR_13,VAR_14;
  NTSTATUS VAR_15;
  KEY_VALUE_FULL_INFORMATION VAR_16[5];
  ULONG VAR_17,VAR_18;

  FUNC_7("Create target key\n");
  FUNC_7("  Key: \\Registry\\Machine\\SOFTWARE\\Reactos\n");
  FUNC_6(&VAR_13, L"\\Registry\\Machine\\SOFTWARE\\Reactos");
  FUNC_0(&VAR_12, &VAR_13, VAR_3
    , ((void*)0), ((void*)0));
  VAR_15 = FUNC_3(&VAR_11, VAR_0 , &VAR_12
  ,0,((void*)0), VAR_8,((void*)0));
  FUNC_7("  NtCreateKey() called (Status %lx)\n",VAR_15);
  if (!FUNC_1(VAR_15))
    return;

  FUNC_7("Create target value\n");
  FUNC_7("  Value: TestValue = 'Test String'\n");
  FUNC_6(&VAR_14, L"TestValue");
  VAR_15=FUNC_5(VAR_11,&VAR_14,0,VAR_9,(PVOID)L"TestString",22);
  FUNC_7("  NtSetValueKey() called (Status %lx)\n",VAR_15);
  if (!FUNC_1(VAR_15))
    return;

  FUNC_7("Close target key\n");
  FUNC_2(VAR_11);


  FUNC_7("Create link key\n");
  FUNC_7("  Key: \\Registry\\Machine\\SOFTWARE\\Test\n");
  FUNC_6(&VAR_13, L"\\Registry\\Machine\\SOFTWARE\\Test");
  FUNC_0(&VAR_12,
        &VAR_13,
        VAR_3 | VAR_5,
        ((void*)0),
        ((void*)0));
  VAR_15 = FUNC_3(&VAR_11,
         VAR_0 | VAR_1,
         &VAR_12,
         0,
         ((void*)0),
         VAR_8 | VAR_7,
         ((void*)0));
  FUNC_7("  NtCreateKey() called (Status %lx)\n",VAR_15);
  if (!FUNC_1(VAR_15))
    return;

  FUNC_7("Create link value\n");
  FUNC_7("  Value: SymbolicLinkValue = '\\Registry\\Machine\\SOFTWARE\\Reactos'\n");
  FUNC_6(&VAR_14, L"SymbolicLinkValue");
  VAR_15=FUNC_5(VAR_11,&VAR_14,0,VAR_6,(PVOID)L"\\Registry\\Machine\\SOFTWARE\\Reactos",68);
  FUNC_7("  NtSetValueKey() called (Status %lx)\n",VAR_15);
  if (!FUNC_1(VAR_15))
    {
      FUNC_7("Creating link value failed! Test failed!\n");
      FUNC_2(VAR_11);
      return;
    }

  FUNC_7("Close link key\n");
  FUNC_2(VAR_11);

  FUNC_7("Open link key\n");
  FUNC_7("  Key: \\Registry\\Machine\\SOFTWARE\\Test\n");
  FUNC_6(&VAR_13, L"\\Registry\\Machine\\SOFTWARE\\Test");
  FUNC_0(&VAR_12, &VAR_13, VAR_3 | VAR_4
    , ((void*)0), ((void*)0));
  VAR_15 = FUNC_3(&VAR_11, VAR_0 , &VAR_12
  ,0,((void*)0), VAR_8, ((void*)0));
  FUNC_7("  NtCreateKey() called (Status %lx)\n",VAR_15);
  if (!FUNC_1(VAR_15))
    return;

  FUNC_7("Query value\n");
  FUNC_7("  Value: TestValue\n");
  FUNC_6(&VAR_14, L"TestValue");
  VAR_15=FUNC_4(VAR_11,
    &VAR_14,
    VAR_2,
    &VAR_16[0],
    sizeof(VAR_16),
    &VAR_17);
  FUNC_7("  NtQueryValueKey() called (Status %lx)\n",VAR_15);
  if (VAR_15 == VAR_10)
    {
      FUNC_7("  Value: Type %d  DataLength %d NameLength %d  Name '",
       VAR_16[0].Type,
       VAR_16[0].DataLength,
       VAR_16[0].NameLength);
      for (VAR_18=0; VAR_18 < VAR_16[0].NameLength / sizeof(WCHAR); VAR_18++)
 FUNC_7("%C",VAR_16[0].Name[VAR_18]);
      FUNC_7("'\n");
      if (VAR_16[0].Type == VAR_9)
 FUNC_7("  Value '%S'\n",
  VAR_16[0].Name+1
  +VAR_16[0].NameLength/2);
    }

  FUNC_7("Close link key\n");
  FUNC_2(VAR_11);

  FUNC_7("Test successful!\n");
}
