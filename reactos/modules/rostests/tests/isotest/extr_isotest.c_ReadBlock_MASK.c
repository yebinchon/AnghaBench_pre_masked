
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Status; int Information; } ;
typedef int PVOID ;
typedef int * PULONG ;
typedef int PLARGE_INTEGER ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,...) ;

BOOL
FUNC_7(HANDLE VAR_5,
   PVOID VAR_6,
   PLARGE_INTEGER VAR_7,
   ULONG VAR_8,
   PULONG VAR_9)
{
  IO_STATUS_BLOCK VAR_10;
  OBJECT_ATTRIBUTES VAR_11;
  NTSTATUS VAR_12;
  HANDLE VAR_13;

  FUNC_0(&VAR_11,
        ((void*)0), 0, ((void*)0), ((void*)0));

  VAR_12 = FUNC_3(&VAR_13,
    VAR_0,
    &VAR_11,
    VAR_4,
    VAR_1);
  if (!FUNC_1(VAR_12))
    {
      FUNC_6("NtCreateEvent() failed\n");
      return(VAR_1);
    }

  VAR_12 = FUNC_4(VAR_5,
        VAR_13,
        ((void*)0),
        ((void*)0),
        &VAR_10,
        VAR_6,
        VAR_8,
        VAR_7,
        ((void*)0));
  if (VAR_12 == VAR_3)
    {
      FUNC_5(VAR_13, VAR_1, ((void*)0));
      VAR_12 = VAR_10.Status;
    }

  FUNC_2(VAR_13);

  if (VAR_12 != VAR_3 && VAR_9 != ((void*)0))
    {
      *VAR_9 = VAR_10.Information;
    }
  if (!FUNC_1(VAR_12) && VAR_12 != VAR_2)
    {
      FUNC_6("ReadBlock() failed (Status: %lx)\n", VAR_12);
      return(VAR_1);
    }

  return(VAR_4);
}
