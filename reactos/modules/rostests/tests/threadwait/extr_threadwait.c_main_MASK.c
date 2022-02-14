
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;

int FUNC_4(int VAR_2, char **VAR_3)
{
 DWORD VAR_4;
 HANDLE VAR_5;

 VAR_5 = FUNC_0(0, 0, VAR_1, 0, 0, &VAR_4);
 FUNC_3("Main: ThreadId for new thread is %08lx\n", VAR_4);
 FUNC_3("Main: Waiting on thread...\n");
 FUNC_2(VAR_5, VAR_0);
 FUNC_3("Main: OK, somebody fixed the PsUnblockThread spinlock double-acquire crash\n");
 FUNC_1(VAR_5);
 FUNC_3("Main: Terminating...\n");
 return 0;
}
