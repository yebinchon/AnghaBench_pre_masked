
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int,char*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static
void FUNC_5(cmsContext VAR_6, cmsUInt16Number VAR_7[])
{
    cmsUInt32Number VAR_8, VAR_9;
    char VAR_10[VAR_5];
    cmsUInt32Number VAR_11;

    VAR_9 = FUNC_0(VAR_6, VAR_1);
    for (VAR_8=0; VAR_8 < VAR_9; VAR_8++) {

        if (VAR_2 != ((void*)0)) {

            FUNC_1(VAR_6, VAR_2, VAR_8, VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        }
        else {
            FUNC_4(VAR_10, "Channel #%u", VAR_8 + 1);
        }

        if (VAR_3 > 0)
            FUNC_3("%s=", VAR_10);

        VAR_11 = VAR_7[VAR_8];

        if (VAR_0) {

            if (VAR_4)
                FUNC_3("0x%04X ", (int) FUNC_2(VAR_11 + .5));
            else
                FUNC_3("0x%02X ", (int) FUNC_2(VAR_11 / 257. + .5));

        } else {

            if (VAR_4)
                FUNC_3("%d ", (int) FUNC_2(VAR_11 + .5));
            else
                FUNC_3("%d ", (int) FUNC_2(VAR_11 / 257. + .5));
        }

    }

    FUNC_3("\n");
}
