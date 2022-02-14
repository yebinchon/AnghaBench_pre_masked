
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int ,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;

void FUNC_6(void)
{
  HANDLE VAR_3;
  OBJECT_ATTRIBUTES VAR_4;
  NTSTATUS VAR_5;
  UNICODE_STRING VAR_6 = FUNC_4(L"\\Registry\\Machine\\Software\\testkey");

  FUNC_5("Create key '\\Registry\\Machine\\Software\\testkey':\n");

  FUNC_0(&VAR_4,
        &VAR_6,
        VAR_1,
        ((void*)0),
        ((void*)0));
  FUNC_5("NtCreateKey:\n");
  VAR_5 = FUNC_3(&VAR_3,
         VAR_0,
         &VAR_4,
         0,
         ((void*)0),
         VAR_2,
         ((void*)0));
  FUNC_5("  Status = %lx\n",VAR_5);
  if (FUNC_1(VAR_5))
    {
      FUNC_2(VAR_3);
    }
}
