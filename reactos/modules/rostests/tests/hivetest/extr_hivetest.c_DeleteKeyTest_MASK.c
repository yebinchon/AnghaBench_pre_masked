
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;

void FUNC_7(void)
{
  OBJECT_ATTRIBUTES VAR_2;
  UNICODE_STRING VAR_3 = FUNC_5(L"\\Registry\\Machine\\Software\\testkey");
  HANDLE VAR_4;
  NTSTATUS VAR_5;

  FUNC_6("Delete key '\\Registry\\Machine\\Software\\testkey':\n");

  FUNC_0(&VAR_2,
        &VAR_3,
        VAR_1,
        ((void*)0),
        ((void*)0));
  FUNC_6("NtOpenKey:\n");
  VAR_5 = FUNC_4(&VAR_4,
       VAR_0,
       &VAR_2);
  FUNC_6("  Status = %lx\n",VAR_5);
  if (!FUNC_1(VAR_5))
    return;

  FUNC_6("NtDeleteKey:\n");
  VAR_5 = FUNC_3(VAR_4);
  FUNC_6("  Status = %lx\n",VAR_5);
  FUNC_2(VAR_4);
}
