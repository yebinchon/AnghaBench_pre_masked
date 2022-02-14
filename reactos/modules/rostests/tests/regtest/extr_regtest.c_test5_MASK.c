
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HKEY ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,...) ;

void FUNC_6(void)
{
  HKEY VAR_2;
  OBJECT_ATTRIBUTES VAR_3;
  UNICODE_STRING VAR_4;
  NTSTATUS VAR_5;

  FUNC_5("NtOpenKey : \n");
  FUNC_5("  \\Registry\\Machine\\Software\\reactos : ");
  FUNC_4(&VAR_4,L"\\Registry\\Machine\\Software\\reactos");
  FUNC_0(&VAR_3, &VAR_4, VAR_1
    , ((void*)0), ((void*)0));
  VAR_5=FUNC_3( &VAR_2, VAR_0, &VAR_3);
  FUNC_5("\t\tStatus=%x\n",VAR_5);
  FUNC_5("NtFlushKey : \n");
  VAR_5 = FUNC_2(VAR_2);
  FUNC_5("\t\tStatus=%x\n",VAR_5);
  FUNC_5("NtCloseKey : \n");
  VAR_5=FUNC_1(VAR_2);
  FUNC_5("\t\tStatus=%x\n",VAR_5);
}
