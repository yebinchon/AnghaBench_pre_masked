
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int ULONG ;
typedef int PWSTR ;
typedef int PVOID ;
typedef int * PHANDLE ;
typedef int PFILE_OBJECT ;
typedef int PFILE_FULL_EA_INFORMATION ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int *,int ,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int *,int *,int ,int ,int,int ,int ,int ,int ) ;

NTSTATUS FUNC_7(
    PWSTR VAR_9,
    ULONG VAR_10,
    PFILE_FULL_EA_INFORMATION VAR_11,
    PHANDLE VAR_12,
    PFILE_OBJECT *VAR_13)
{
 OBJECT_ATTRIBUTES VAR_14;
 IO_STATUS_BLOCK VAR_15;
 UNICODE_STRING VAR_16;
 NTSTATUS VAR_17;

 FUNC_3(&VAR_16, VAR_9);
 FUNC_0(
  &VAR_14,
  &VAR_16,
  VAR_8,
  ((void*)0),
  ((void*)0));

 VAR_17 = FUNC_6(
  VAR_12,
  VAR_4 | VAR_5,
  &VAR_14,
  &VAR_15,
  0,
  VAR_0,
  VAR_2 | VAR_3,
  VAR_1,
  0,
  VAR_11,
  VAR_10);

 if (FUNC_1(VAR_17))
  {
   VAR_17 = FUNC_2(
    *VAR_12,
    VAR_4 | VAR_5,
    ((void*)0),
    VAR_6,
    (PVOID*)VAR_13,
    ((void*)0));

   if (!FUNC_1(VAR_17))
    {
     FUNC_4(VAR_7, ("ObReferenceObjectByHandle() failed with status (0x%X).\n", VAR_17));
     FUNC_5(*VAR_12);
    }
  }
 else
  {
   FUNC_4(VAR_7, ("ZwCreateFile() failed with status (0x%X)\n", VAR_17));
  }

    return VAR_17;
}
