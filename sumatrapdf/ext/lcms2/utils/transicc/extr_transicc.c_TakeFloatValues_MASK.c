
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,scalar_t__,int,char*,int *,int *,int *,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int*,int *,int) ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static
void FUNC_9(cmsContext VAR_7, cmsFloat64Number VAR_8[])
{
    cmsUInt32Number VAR_9, VAR_10;
    char VAR_11[VAR_4];
    char VAR_12[4096];

    if (FUNC_8(VAR_6))
        FUNC_5(VAR_5, "\nEnter values, 'q' to quit\n");

    if (VAR_2) {


        cmsUInt16Number VAR_13 = FUNC_0(VAR_7);
        FUNC_6(VAR_8, &VAR_13, sizeof(cmsUInt16Number));
        return;
    }

    VAR_10 = FUNC_3(VAR_7, VAR_0);
    for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {

        if (VAR_1) {
            FUNC_4(VAR_7, VAR_1, VAR_9, VAR_11, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        }
        else {
            VAR_3 = 1;
            FUNC_7(VAR_11, "Channel #%u", VAR_9+1);
        }

        FUNC_1(VAR_7, VAR_12, "%s? ", VAR_11);

        VAR_8[VAR_9] = (cmsFloat64Number) FUNC_2(VAR_12) / VAR_3;
    }

    if (FUNC_8(VAR_6))
        FUNC_5(VAR_5, "\n");
}
