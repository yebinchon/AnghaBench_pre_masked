
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
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;

void FUNC_7(void)
{
  OBJECT_ATTRIBUTES VAR_2;
  UNICODE_STRING VAR_3 = FUNC_5(L"\\Registry\\Machine\\Software\\testkey");
  UNICODE_STRING VAR_4 = FUNC_5(L"TestValue");
  HANDLE VAR_5;
  NTSTATUS VAR_6;

  FUNC_6("Open key '\\Registry\\Machine\\Software\\testkey':\n");

  FUNC_0(&VAR_2,
        &VAR_3,
        VAR_1,
        ((void*)0),
        ((void*)0));
  VAR_6=FUNC_4(&VAR_5,
     VAR_0,
     &VAR_2);
  FUNC_6("  Status = %lx\n", VAR_6);
  if (!FUNC_1(VAR_6))
    return;

  FUNC_6("Delete value:\n");


  VAR_6 = FUNC_3(VAR_5,
       &VAR_4);
  FUNC_6("  Status = %lx\n", VAR_6);

  FUNC_6("Close key:\n");
  VAR_6 = FUNC_2(VAR_5);
  FUNC_6("  Status = %lx\n", VAR_6);
}
