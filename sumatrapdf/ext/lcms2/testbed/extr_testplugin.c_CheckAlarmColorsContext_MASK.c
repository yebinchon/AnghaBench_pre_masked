
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int const*) ;

cmsInt32Number FUNC_6(void)
{
    cmsInt32Number VAR_0 = 0;
    const cmsUInt16Number VAR_1[] = {0x0000, 0x1111, 0x2222, 0x3333, 0x4444, 0x5555, 0x6666, 0x7777, 0x8888, 0x9999, 0xaaaa, 0xbbbb, 0xcccc, 0xdddd, 0xeeee, 0xffff};
    cmsUInt16Number VAR_2[16];
    cmsContext VAR_3, VAR_4, VAR_5;
    int VAR_6;

    VAR_3 = FUNC_2(((void*)0));

    FUNC_5(VAR_3, VAR_1);
    VAR_4 = FUNC_0(VAR_3, ((void*)0));
    VAR_5 = FUNC_0(VAR_4, ((void*)0));

    FUNC_4(VAR_5, VAR_2);

    VAR_0 = 1;
    for (VAR_6=0; VAR_6 < 16; VAR_6++) {
        if (VAR_2[VAR_6] != VAR_1[VAR_6]) {
            FUNC_1("Bad alarm code %x != %x", VAR_2[VAR_6], VAR_1[VAR_6]);
            VAR_0 = 0;
            break;
        }
    }

    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);

    return VAR_0;
}
