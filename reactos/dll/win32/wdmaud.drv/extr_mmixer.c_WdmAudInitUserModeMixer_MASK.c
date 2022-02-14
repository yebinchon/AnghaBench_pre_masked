
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef scalar_t__ MIXER_STATUS ;
typedef scalar_t__ HDEVINFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int ) ;
 scalar_t__ VAR_8 ;

BOOL
FUNC_4()
{
    HDEVINFO VAR_9;
    MIXER_STATUS VAR_10;

    if (VAR_6)
    {

        return VAR_8;
    }



    VAR_9 = FUNC_3(&VAR_0,
                                       ((void*)0),
                                       ((void*)0),
                                       VAR_1 );

    if (VAR_9 == VAR_4)
    {

        return VAR_3;
    }



    VAR_10 = FUNC_1(&VAR_7, VAR_2, (PVOID)VAR_9);


    FUNC_2(VAR_9);

    if (VAR_10 != VAR_5)
    {

        FUNC_0("Failed to initialize mixer library with %x\n", VAR_10);
        return VAR_3;
    }


    VAR_6 = VAR_8;


    return VAR_8;
}
