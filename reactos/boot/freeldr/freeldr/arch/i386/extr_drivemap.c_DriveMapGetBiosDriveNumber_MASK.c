
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef char* PCSTR ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int ) ;

UCHAR FUNC_3(PCSTR VAR_0)
{
    UCHAR VAR_1 = 0;

    FUNC_0("DriveMapGetBiosDriveNumber(%s)\n", VAR_0);



    if (VAR_0[0] >= '0' && VAR_0[0] <= '9')
    {
        return (UCHAR)FUNC_2(VAR_0, ((void*)0), 0);
    }



    VAR_1 = FUNC_1(&VAR_0[2]);


    if ((VAR_0[0] == 'h' || VAR_0[0] == 'H') &&
        (VAR_0[1] == 'd' || VAR_0[1] == 'D'))
    {
        VAR_1 |= 0x80;
    }

    return VAR_1;
}
