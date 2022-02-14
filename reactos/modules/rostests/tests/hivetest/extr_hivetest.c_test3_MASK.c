
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int ,int *,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int,int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,...) ;

void FUNC_8(void)
{
 HANDLE VAR_4;
 OBJECT_ATTRIBUTES VAR_5;
 UNICODE_STRING VAR_6;
 NTSTATUS VAR_7;
 char VAR_8[10];
 DWORD VAR_9;
  FUNC_7("NtCreateKey non volatile: \n");
  FUNC_7("  \\Registry\\Machine\\Software\\test3reactos: ");
  FUNC_6(&VAR_6, L"\\Registry\\Machine\\Software\\test3reactos");
  FUNC_0(&VAR_5, &VAR_6, VAR_2
    , ((void*)0), ((void*)0));
  VAR_7 = FUNC_2 ( &VAR_4, VAR_1 , &VAR_5
  ,0,((void*)0),VAR_3,((void*)0));
  FUNC_7("\t\tStatus=%x\n",VAR_7);
  FUNC_1(VAR_4);

  FUNC_7("delete \\Registry\\Machine\\software\\test3reactos ?");
  FUNC_5(VAR_0, VAR_8, 3, &VAR_9, ((void*)0)) ;
  if (VAR_8[0] != 'y' && VAR_8[0] != 'Y') return;

  FUNC_7("delete \\Registry\\Machine\\software\\test3reactos ?");
  FUNC_6(&VAR_6, L"\\Registry\\Machine\\Software\\test3reactos");
  FUNC_0(&VAR_5,
                               &VAR_6,
                               VAR_2,
                               ((void*)0),
                               ((void*)0));
  FUNC_7("NtOpenKey : ");
  VAR_7=FUNC_4( &VAR_4, VAR_1, &VAR_5);
  FUNC_7("\t\t\t\tStatus =%x\n",VAR_7);
  FUNC_7("NtDeleteKey : ");
  VAR_7=FUNC_3(VAR_4);
  FUNC_7("\t\t\t\tStatus =%x\n",VAR_7);
  FUNC_1(VAR_4);
}
