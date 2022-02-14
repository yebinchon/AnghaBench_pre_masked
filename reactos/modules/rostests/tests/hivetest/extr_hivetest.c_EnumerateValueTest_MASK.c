
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_3__ {int DataOffset; int NameLength; char** Name; char* Type; int DataLength; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef char* NTSTATUS ;
typedef int KeyValueInformation ;
typedef TYPE_1__ KEY_VALUE_FULL_INFORMATION ;
typedef int * HANDLE ;
typedef char* DWORD ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,int ,TYPE_1__*,int,int*) ;
 char* FUNC_4 (int **,int ,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*) ;
 char* VAR_5 ;
 int FUNC_6 (char*,...) ;

void FUNC_7(void)
{
  KEY_VALUE_FULL_INFORMATION VAR_6[5];
  OBJECT_ATTRIBUTES VAR_7;
  UNICODE_STRING VAR_8 = FUNC_5(L"\\Registry\\Machine\\Software\\testkey");
  ULONG VAR_9,VAR_10,VAR_11;
  HANDLE VAR_12 = ((void*)0);
  NTSTATUS VAR_13;

  FUNC_6("Open key '\\Registry\\Machine\\Software\\testkey':\n");

  FUNC_0(&VAR_7,
        &VAR_8,
        VAR_2,
        ((void*)0),
        ((void*)0));
  VAR_13=FUNC_4(&VAR_12,
     VAR_1,
     &VAR_7);
  FUNC_6("  Status = %lx\n", VAR_13);
  if (!FUNC_1(VAR_13))
    return;

  FUNC_6("Enumerate values:\n");
  VAR_9 = 0;
  while (VAR_13 == VAR_5)
    {
      VAR_13 = FUNC_3(VAR_12,
       VAR_9++,
       VAR_0,
       &VAR_6[0],
       sizeof(VAR_6),
       &VAR_10);
      if (VAR_13 == VAR_5)
 {
   FUNC_6("    Value:DO=%d, DL=%d, NL=%d, Name = ",
    VAR_6[0].DataOffset,
    VAR_6[0].DataLength,
    VAR_6[0].NameLength);
   for (VAR_11 = 0; VAR_11 < VAR_6[0].NameLength / 2; VAR_11++)
     FUNC_6("%C", VAR_6[0].Name[VAR_11]);
   FUNC_6(", Type = %d\n", VAR_6[0].Type);

   if (VAR_6[0].Type == VAR_4)
     FUNC_6("    Value = %S\n",
      ((char*)&VAR_6[0]+VAR_6[0].DataOffset));

   if (VAR_6[0].Type == VAR_3)
     FUNC_6("    Value = %X\n",
      *((DWORD*)((char*)&VAR_6[0]+VAR_6[0].DataOffset)));
 }
    }

  FUNC_6("NtClose:\n");
  VAR_13 = FUNC_2(VAR_12);
  FUNC_6("  Status = %lx\n", VAR_13);
}
