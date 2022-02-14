
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_5__ {int Length; int * Buffer; } ;
typedef int * PWCHAR ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int PINFCACHE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int INFSTATUS ;
typedef scalar_t__ HINF ;
typedef int HANDLE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int **,int*) ;
 int FUNC_5 (int *,TYPE_1__*,int ,int *,int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int,int *,int *,int ,int) ;
 int FUNC_9 (int ,int *,int *,int *,int *,int *,int,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int *,char*) ;

NTSTATUS
FUNC_11(HINF VAR_5,
             PUNICODE_STRING VAR_6,
             PUNICODE_STRING VAR_7)
{
  OBJECT_ATTRIBUTES VAR_8;
  IO_STATUS_BLOCK VAR_9;
  HANDLE VAR_10;
  NTSTATUS VAR_11;
  INFSTATUS VAR_12;
  PWCHAR VAR_13;
  ULONG VAR_14;
  PWCHAR VAR_15;
  ULONG VAR_16;
  UINT VAR_17;

  VAR_12 = FUNC_4((PINFCACHE) VAR_5, &VAR_13, &VAR_14);
  if (! FUNC_3(VAR_12))
    {
      FUNC_0("Failed to create buffer (Status 0x%lx)\n", VAR_12);
      return VAR_12;
    }


  FUNC_5(&VAR_8,
                             VAR_6,
                             0,
                             ((void*)0),
                             ((void*)0));

  VAR_11 = FUNC_8(&VAR_10,
                      VAR_2 | VAR_4,
                      &VAR_8,
                      &VAR_9,
                      0,
                      VAR_1 | VAR_0);
  if (!FUNC_3(VAR_11))
    {
      FUNC_1("NtOpenFile() failed (Status %lx)\n", VAR_11);
      FUNC_2(VAR_13);
      return VAR_11;
    }

  FUNC_0("NtOpenFile() successful\n");

  if (((void*)0) != VAR_7 && 0 != VAR_7->Length)
    {

      VAR_16 = VAR_7->Length + 7 * sizeof(WCHAR);
      VAR_15 = FUNC_6(VAR_16);
      if (((void*)0) != VAR_15)
        {
          FUNC_10(VAR_15, L"; ");
          for (VAR_17 = 0; VAR_17 < VAR_7->Length / sizeof(WCHAR); VAR_17++)
            {
              VAR_15[2 + VAR_17] = VAR_7->Buffer[VAR_17];
            }
          FUNC_10(VAR_15 + (2 + VAR_7->Length / sizeof(WCHAR)),
                  L"\r\n\r\n");
          FUNC_9(VAR_10,
                      ((void*)0),
                      ((void*)0),
                      ((void*)0),
                      &VAR_9,
                      VAR_15,
                      VAR_16,
                      ((void*)0),
                      ((void*)0));
          FUNC_2(VAR_15);
        }
    }


  VAR_11 = FUNC_9(VAR_10,
                       ((void*)0),
                       ((void*)0),
                       ((void*)0),
                       &VAR_9,
                       VAR_13,
                       VAR_14,
                       ((void*)0),
                       ((void*)0));

  FUNC_7(VAR_10);
  FUNC_2(VAR_13);

  if (!FUNC_3(VAR_11))
    {
      FUNC_1("NtWriteFile() failed (Status %lx)\n", VAR_11);
      return(VAR_11);
    }

  return VAR_3;
}
