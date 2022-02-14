
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char* LPSTR ;
typedef int LPSECURITY_ATTRIBUTES ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5(int VAR_5, char *VAR_6[])
{
   HANDLE VAR_7;
   LPSTR VAR_8 = "\\\\.\\MAILSLOT\\mymailslot";
   LPSTR VAR_9 = "Mailslot test message!";
   DWORD VAR_10, VAR_11;

   VAR_7 = FUNC_1(VAR_8,
     VAR_2,
     VAR_1,
     (LPSECURITY_ATTRIBUTES)((void*)0),
     VAR_4,
     VAR_0,
     (HANDLE)((void*)0));
   FUNC_3("hMailslot %x\n", (DWORD)VAR_7);
   if (VAR_7 == VAR_3)
     {
 FUNC_3("CreateFile() failed\n");
 return 0;
     }

   VAR_10 = (ULONG)FUNC_4(VAR_9)+1;

   FUNC_2(VAR_7,
      VAR_9,
      VAR_10,
      &VAR_11,
      ((void*)0));

   FUNC_0(VAR_7);

   return 0;
}
