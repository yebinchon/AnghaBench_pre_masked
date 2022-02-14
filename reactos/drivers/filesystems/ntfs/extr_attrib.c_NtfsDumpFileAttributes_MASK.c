
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int PNTFS_ATTR_RECORD ;
typedef int PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FIND_ATTR_CONTXT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

VOID
FUNC_5(PDEVICE_EXTENSION VAR_1,
                       PFILE_RECORD_HEADER VAR_2)
{
    NTSTATUS VAR_3;
    FIND_ATTR_CONTXT VAR_4;
    PNTFS_ATTR_RECORD VAR_5;

    VAR_3 = FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_0, &VAR_5);
    while (FUNC_3(VAR_3))
    {
        FUNC_4(VAR_1, VAR_5);

        VAR_3 = FUNC_2(&VAR_4, &VAR_5);
    }

    FUNC_0(&VAR_4);
}
