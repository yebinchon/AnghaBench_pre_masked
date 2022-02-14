
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UCHAR ;
struct TYPE_9__ {scalar_t__ NameType; } ;
struct TYPE_7__ {scalar_t__ ValueOffset; } ;
struct TYPE_8__ {scalar_t__ Type; TYPE_1__ Resident; } ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef int PFILE_RECORD_HEADER ;
typedef TYPE_3__* PFILENAME_ATTRIBUTE ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FIND_ATTR_CONTXT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_2__**) ;
 int FUNC_2 (int *,TYPE_2__**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;

PFILENAME_ATTRIBUTE
FUNC_4(PDEVICE_EXTENSION VAR_5,
                      PFILE_RECORD_HEADER VAR_6,
                      UCHAR VAR_7)
{
    FIND_ATTR_CONTXT VAR_8;
    PNTFS_ATTR_RECORD VAR_9;
    PFILENAME_ATTRIBUTE VAR_10;
    NTSTATUS VAR_11;

    VAR_11 = FUNC_1(&VAR_8, VAR_5, VAR_6, VAR_1, &VAR_9);
    while (FUNC_3(VAR_11))
    {
        if (VAR_9->Type == VAR_0)
        {
            VAR_10 = (PFILENAME_ATTRIBUTE)((ULONG_PTR)VAR_9 + VAR_9->Resident.ValueOffset);
            if (VAR_10->NameType == VAR_7 ||
                (VAR_10->NameType == VAR_4 && VAR_7 == VAR_3) ||
                (VAR_10->NameType == VAR_4 && VAR_7 == VAR_2))
            {
                FUNC_0(&VAR_8);
                return VAR_10;
            }
        }

        VAR_11 = FUNC_2(&VAR_8, &VAR_9);
    }

    FUNC_0(&VAR_8);
    return ((void*)0);
}
