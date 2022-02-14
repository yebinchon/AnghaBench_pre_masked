
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int PVOID ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int ,int *,int ,int *) ;
 int FUNC_4 (int ,int *,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;

void FUNC_7(void)
{
  HANDLE VAR_5;
  OBJECT_ATTRIBUTES VAR_6;
  UNICODE_STRING VAR_7 = FUNC_5(L"\\Registry\\Machine\\Software\\testkey");
  UNICODE_STRING VAR_8 = FUNC_5(L"TestValue");
  NTSTATUS VAR_9;

  FUNC_6("Create key '\\Registry\\Machine\\Software\\testkey':\n");

  FUNC_0(&VAR_6,
        &VAR_7,
        VAR_1 | VAR_2,
        ((void*)0),
        ((void*)0));
  FUNC_6("NtCreateKey:\n");
  VAR_9 = FUNC_3(&VAR_5,
         VAR_0,
         &VAR_6,
         0,
         ((void*)0),
         VAR_3,
         ((void*)0));
  FUNC_6("  Status = %lx\n",VAR_9);
  if (!FUNC_1(VAR_9))
    return;


  FUNC_6("NtSetValueKey:\n");
  VAR_9 = FUNC_4(VAR_5,
    &VAR_8,
    0,
    VAR_4,
    (PVOID)L"TestString",
    24);
  FUNC_6("  Status = %lx\n",VAR_9);

  FUNC_2(VAR_5);
}
