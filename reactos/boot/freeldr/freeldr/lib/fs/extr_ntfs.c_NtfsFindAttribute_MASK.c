
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef size_t ULONG ;
struct TYPE_7__ {scalar_t__ AttributesOffset; } ;
struct TYPE_6__ {scalar_t__ MftRecordSize; } ;
typedef TYPE_1__* PNTFS_VOLUME_INFO ;
typedef TYPE_2__* PNTFS_MFT_RECORD ;
typedef scalar_t__ PNTFS_ATTR_RECORD ;
typedef int PNTFS_ATTR_CONTEXT ;
typedef scalar_t__ PCHAR ;


 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,size_t,scalar_t__ const*,size_t) ;

__attribute__((used)) static PNTFS_ATTR_CONTEXT FUNC_1(PNTFS_VOLUME_INFO VAR_0, PNTFS_MFT_RECORD VAR_1, ULONG VAR_2, const WCHAR *VAR_3)
{
    PNTFS_ATTR_RECORD VAR_4;
    PNTFS_ATTR_RECORD VAR_5;
    ULONG VAR_6;

    VAR_4 = (PNTFS_ATTR_RECORD)((PCHAR)VAR_1 + VAR_1->AttributesOffset);
    VAR_5 = (PNTFS_ATTR_RECORD)((PCHAR)VAR_1 + VAR_0->MftRecordSize);
    for (VAR_6 = 0; VAR_3[VAR_6] != 0; VAR_6++)
        ;

    return FUNC_0(VAR_0, VAR_4, VAR_5, VAR_2, VAR_3, VAR_6);
}
