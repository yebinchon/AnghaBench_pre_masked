
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PFILE_RECORD_HEADER ;
typedef int * PFILENAME_ATTRIBUTE ;
typedef int PDEVICE_EXTENSION ;


 int * FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

PFILENAME_ATTRIBUTE
FUNC_1(PDEVICE_EXTENSION VAR_3,
                          PFILE_RECORD_HEADER VAR_4)
{
    PFILENAME_ATTRIBUTE VAR_5;

    VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1);
    if (VAR_5 == ((void*)0))
    {
        VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
        if (VAR_5 == ((void*)0))
        {
            VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_0);
        }
    }

    return VAR_5;
}
