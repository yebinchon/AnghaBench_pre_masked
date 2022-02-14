
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int * VAR_1 ;
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int,char*,int *,int *,int *,int *) ;
 double FUNC_2 (double) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static
void FUNC_5(cmsContext VAR_7, cmsFloat64Number VAR_8[])
{
    cmsUInt32Number VAR_9, VAR_10;
    char VAR_11[VAR_4];
    cmsFloat64Number VAR_12;

    VAR_10 = FUNC_0(VAR_7, VAR_0);
    for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {

        if (VAR_1 != ((void*)0)) {

            FUNC_1(VAR_7, VAR_1, VAR_9, VAR_11, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        }
        else {
            VAR_2 = 1;
            FUNC_4(VAR_11, "Channel #%u", VAR_9 + 1);
        }

        VAR_12 = (cmsFloat64Number) VAR_8[VAR_9]* VAR_2;

        if (VAR_5)
            VAR_12 = FUNC_2(VAR_12 + 0.5);

        if (!VAR_6) {

               if (VAR_12 < 0)
                      VAR_12 = 0;
               if (VAR_12 > VAR_2)
                      VAR_12 = VAR_2;
        }

        if (VAR_3 <= 0)
            FUNC_3("%.4f ", VAR_12);
        else
            FUNC_3("%s=%.4f ", VAR_11, VAR_12);
    }

    FUNC_3("\n");
}
