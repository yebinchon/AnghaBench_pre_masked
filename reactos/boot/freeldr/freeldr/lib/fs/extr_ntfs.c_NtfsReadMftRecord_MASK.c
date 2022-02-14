
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_5__ {int MftRecordSize; int MFTContext; } ;
typedef TYPE_1__* PNTFS_VOLUME_INFO ;
typedef int PNTFS_RECORD ;
typedef scalar_t__ PNTFS_MFT_RECORD ;
typedef int PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ,int) ;

__attribute__((used)) static BOOLEAN FUNC_2(PNTFS_VOLUME_INFO VAR_1, ULONGLONG VAR_2, PNTFS_MFT_RECORD VAR_3)
{
    ULONGLONG VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_1->MFTContext, VAR_2 * VAR_1->MftRecordSize, (PCHAR)VAR_3, VAR_1->MftRecordSize);
    if (VAR_4 != VAR_1->MftRecordSize)
        return VAR_0;


    return FUNC_0(VAR_1, (PNTFS_RECORD)VAR_3);
}
