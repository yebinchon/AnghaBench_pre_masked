
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long ULONGLONG ;
typedef int ULONG ;
struct TYPE_4__ {int pRecord; } ;
typedef unsigned long long* PULONGLONG ;
typedef TYPE_1__* PNTFS_ATTR_CONTEXT ;
typedef int PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef int PCWSTR ;
typedef int NTSTATUS ;


 unsigned long long FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_1__**,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

ULONGLONG
FUNC_5(PDEVICE_EXTENSION VAR_1,
                PFILE_RECORD_HEADER VAR_2,
                PCWSTR VAR_3,
                ULONG VAR_4,
                PULONGLONG VAR_5)
{
    ULONGLONG VAR_6 = 0ULL;
    ULONGLONG VAR_7 = 0ULL;
    NTSTATUS VAR_8;
    PNTFS_ATTR_CONTEXT VAR_9;

    VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_0, VAR_3, VAR_4, &VAR_9, ((void*)0));
    if (FUNC_3(VAR_8))
    {
        VAR_6 = FUNC_1(VAR_9->pRecord);
        VAR_7 = FUNC_0(VAR_9->pRecord);
        FUNC_4(VAR_9);
    }

    if (VAR_5 != ((void*)0)) *VAR_5 = VAR_7;

    return VAR_6;
}
