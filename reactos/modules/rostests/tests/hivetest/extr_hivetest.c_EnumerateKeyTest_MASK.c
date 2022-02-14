
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_4__ {int NameLength; int * Name; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int KeyInformation ;
typedef TYPE_1__ KEY_BASIC_INFORMATION ;
typedef int * HANDLE ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,TYPE_1__*,int,int*) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int ,TYPE_1__*,int,int*) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;

void FUNC_8(void)
{
  HANDLE VAR_3 = ((void*)0);
  OBJECT_ATTRIBUTES VAR_4;
  NTSTATUS VAR_5;
  UNICODE_STRING VAR_6 = FUNC_6(L"\\Registry\\Machine\\Software");
  ULONG VAR_7;
  ULONG VAR_8;
  ULONG VAR_9;
  KEY_BASIC_INFORMATION VAR_10[5];

  FUNC_7("Enumerate key '\\Registry\\Machine\\Software':\n");

  FUNC_0(&VAR_4,
        &VAR_6,
        VAR_2,
        ((void*)0),
        ((void*)0));
  FUNC_7("NtOpenKey:\n");
  VAR_5 = FUNC_4(&VAR_3,
       VAR_0,
       &VAR_4);
  FUNC_7("  Status = %lx\n", VAR_5);
  if (!FUNC_1(VAR_5))
    return;

  FUNC_7("NtQueryKey:\n");
  VAR_5 = FUNC_5(VAR_3,
        VAR_1,
        &VAR_10[0],
        sizeof(VAR_10),
        &VAR_8);
  FUNC_7("  Status = %lx\n", VAR_5);
  if (FUNC_1(VAR_5))
    {
      FUNC_7("\tKey Name = ");
      for (VAR_9 = 0; VAR_9 < VAR_10[0].NameLength / 2; VAR_9++)
 FUNC_7("%C", VAR_10[0].Name[VAR_9]);
      FUNC_7("\n");
    }

  FUNC_7("NtEnumerateKey:\n");
  VAR_7=0;
  while(FUNC_1(VAR_5))
    {
      VAR_5 = FUNC_3(VAR_3,
         VAR_7,
         VAR_1,
         &VAR_10[0],
         sizeof(VAR_10),
         &VAR_8);
      if (FUNC_1(VAR_5))
 {
   FUNC_7("\tSubKey Name = ");
   for (VAR_9 = 0; VAR_9 < VAR_10[0].NameLength / 2; VAR_9++)
     FUNC_7("%C", VAR_10[0].Name[VAR_9]);
   FUNC_7("\n");
 }
      VAR_7++;
    }

  FUNC_7("NtClose:\n");
  VAR_5 = FUNC_2(VAR_3);
  FUNC_7("  Status = %lx\n", VAR_5);
}
