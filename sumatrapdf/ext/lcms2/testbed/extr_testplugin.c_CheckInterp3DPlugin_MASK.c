
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int cmsInt32Number ;
typedef int * cmsContext ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int*,int*,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int,int,int,int*) ;

cmsInt32Number FUNC_10(void)
{

    cmsPipeline* VAR_2;
    cmsStage* VAR_3;
    cmsContext VAR_4;
    cmsUInt16Number VAR_5[3], VAR_6[3];
    cmsUInt16Number VAR_7[] = {

       0, 0, 0,
       0, 0, 0xffff,
       0, 0xffff, 0,
       0, 0xffff, 0xffff,
       0xffff, 0, 0,
       0xffff, 0, 0xffff,
       0xffff, 0xffff, 0,
       0xffff, 0xffff, 0xffff
    };


    VAR_4 = FUNC_2(((void*)0));
    if (VAR_4 == ((void*)0)) {
        FUNC_0("Cannot create context");
       return 0;
    }

    FUNC_8(VAR_4, &VAR_0);

    VAR_2 = FUNC_4(VAR_4, 3, 3);
    VAR_3 = FUNC_9(VAR_4, 2, 3, 3, VAR_7);
    FUNC_7(VAR_4, VAR_2, VAR_1, VAR_3);



    VAR_5[0] = 0; VAR_5[1] = 0; VAR_5[2] = 0;
    FUNC_5(VAR_4, VAR_5, VAR_6, VAR_2);

    if (!FUNC_1("0", VAR_6[0], 0xFFFF - 0)) goto Error;
    if (!FUNC_1("1", VAR_6[1], 0xFFFF - 0)) goto Error;
    if (!FUNC_1("2", VAR_6[2], 0xFFFF - 0)) goto Error;

    VAR_5[0] = 0x1234; VAR_5[1] = 0x5678; VAR_5[2] = 0x9ABC;
    FUNC_5(VAR_4, VAR_5, VAR_6, VAR_2);

    if (!FUNC_1("0", 0xFFFF - 0x9ABC, VAR_6[0])) goto Error;
    if (!FUNC_1("1", 0xFFFF - 0x5678, VAR_6[1])) goto Error;
    if (!FUNC_1("2", 0xFFFF - 0x1234, VAR_6[2])) goto Error;

    FUNC_6(VAR_4, VAR_2);
    FUNC_3(VAR_4);



    VAR_2 = FUNC_4(((void*)0), 3, 3);
    VAR_3 = FUNC_9(((void*)0), 2, 3, 3, VAR_7);
    FUNC_7(((void*)0), VAR_2, VAR_1, VAR_3);

    VAR_5[0] = 0; VAR_5[1] = 0; VAR_5[2] = 0;
    FUNC_5(((void*)0), VAR_5, VAR_6, VAR_2);

    if (!FUNC_1("0", 0, VAR_6[0])) goto Error;
    if (!FUNC_1("1", 0, VAR_6[1])) goto Error;
    if (!FUNC_1("2", 0, VAR_6[2])) goto Error;

    VAR_5[0] = 0x1234; VAR_5[1] = 0x5678; VAR_5[2] = 0x9ABC;
    FUNC_5(((void*)0), VAR_5, VAR_6, VAR_2);

    if (!FUNC_1("0", 0x1234, VAR_6[0])) goto Error;
    if (!FUNC_1("1", 0x5678, VAR_6[1])) goto Error;
    if (!FUNC_1("2", 0x9ABC, VAR_6[2])) goto Error;

    FUNC_6(((void*)0), VAR_2);
    return 1;

Error:
    FUNC_6(((void*)0), VAR_2);
    return 0;
}
