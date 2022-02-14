
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ RelatedFileObject; } ;
typedef int * PWSTR ;
typedef int * PNTFS_FCB ;
typedef TYPE_1__* PFILE_OBJECT ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int ,int **,int **,int *,int ) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__,int *,int **) ;
 int FUNC_8 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static
NTSTATUS
FUNC_9(PDEVICE_EXTENSION VAR_1,
             PFILE_OBJECT VAR_2,
             PWSTR VAR_3,
             BOOLEAN VAR_4,
             PNTFS_FCB * VAR_5)
{
    PNTFS_FCB VAR_6;
    PNTFS_FCB VAR_7;
    NTSTATUS VAR_8;
    PWSTR VAR_9 = ((void*)0);

    FUNC_0("NtfsOpenFile(%p, %p, %S, %s, %p)\n",
            VAR_1,
            VAR_2,
            VAR_3,
            VAR_4 ? "TRUE" : "FALSE",
            VAR_5);

    *VAR_5 = ((void*)0);

    if (VAR_2->RelatedFileObject)
    {
        FUNC_0("Converting relative filename to absolute filename\n");

        VAR_8 = FUNC_7(VAR_2->RelatedFileObject,
                                          VAR_3,
                                          &VAR_9);
        if (VAR_9) VAR_3 = VAR_9;
        if (!FUNC_3(VAR_8))
        {
            return VAR_8;
        }
    }



    FUNC_0("PathName to open: %S\n", VAR_3);


    FUNC_0("Checking for existing FCB in memory\n");
    VAR_7 = FUNC_6(VAR_1,
                               VAR_3);
    if (VAR_7 == ((void*)0))
    {
        FUNC_0("No existing FCB found, making a new one if file exists.\n");
        VAR_8 = FUNC_5(VAR_1,
                                   &VAR_6,
                                   &VAR_7,
                                   VAR_3,
                                   VAR_4);
        if (VAR_6 != ((void*)0))
        {
            FUNC_8(VAR_1,
                           VAR_6);
        }

        if (!FUNC_3(VAR_8))
        {
            FUNC_0("Could not make a new FCB, status: %x\n", VAR_8);

            if (VAR_9)
                FUNC_2(VAR_9, VAR_0);

            return VAR_8;
        }
    }

    FUNC_0("Attaching FCB to fileObject\n");
    VAR_8 = FUNC_4(VAR_1,
                                       VAR_7,
                                       VAR_2);

    if (VAR_9)
        FUNC_1(VAR_9);

    *VAR_5 = VAR_7;

    return VAR_8;
}
