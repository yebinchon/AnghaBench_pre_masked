
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_6__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_5__ {int Attributes; TYPE_3__ Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef TYPE_3__ LUID ;
typedef int LONG ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int ,TYPE_2__*,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,char*,char*) ;
 int FUNC_7 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,...) ;

void FUNC_9(void)
{
 OBJECT_ATTRIBUTES VAR_6;
 UNICODE_STRING VAR_7;
 NTSTATUS VAR_8;
 LONG VAR_9;
 TOKEN_PRIVILEGES VAR_10;
 HANDLE VAR_11,VAR_12;
 LUID VAR_13 = {0};
 BOOLEAN VAR_14;
  VAR_8=FUNC_5(FUNC_1()
 ,VAR_5,&VAR_11);

  FUNC_8("\t\t\t\tStatus =%x\n",VAR_8);


  VAR_10.PrivilegeCount = 1;
  VAR_10.Privileges[0].Luid = VAR_13;


  VAR_10.Privileges[0].Attributes = VAR_4;


  VAR_14 = FUNC_0(
            VAR_11,
            VAR_0,
            &VAR_10,
            0,
            ((void*)0),
            ((void*)0)
            );
  FUNC_8("\t\t\t\tbRes =%x\n",VAR_14);





  FUNC_7(&VAR_7,L"test5");
  FUNC_2(&VAR_6, &VAR_7, VAR_3
    , ((void*)0), ((void*)0));
  VAR_8 = FUNC_3((HANDLE)VAR_1,&VAR_6);
  FUNC_8("\t\t\t\tStatus =%x\n",VAR_8);
  VAR_9=FUNC_6(VAR_1,"def"
  ,"test5");
  FUNC_8("\t\t\t\tdwError =%x\n",VAR_9);

  FUNC_8("NtOpenKey \\Registry\\Machine : ");
  FUNC_7(&VAR_7, L"\\Registry\\Machine");
  FUNC_2(&VAR_6,
                               &VAR_7,
                               VAR_3,
                               ((void*)0),
                               ((void*)0));
  VAR_8=FUNC_4( &VAR_12, VAR_2, &VAR_6);
  FUNC_8("\t\t\tStatus =%x\n",VAR_8);
  FUNC_7(&VAR_7,L"test5");
  FUNC_2(&VAR_6, &VAR_7, VAR_3
    , ((void*)0), ((void*)0));
  VAR_8 = FUNC_3(VAR_12,&VAR_6);
  FUNC_8("\t\t\t\tStatus =%x\n",VAR_8);
}
