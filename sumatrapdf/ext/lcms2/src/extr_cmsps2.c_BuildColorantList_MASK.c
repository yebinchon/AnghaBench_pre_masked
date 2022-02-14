
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t cmsUInt32Number ;
typedef double cmsUInt16Number ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,char*,double) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static
void FUNC_2(char *VAR_1, cmsUInt32Number VAR_2, cmsUInt16Number VAR_3[])
{
    char VAR_4[32];
    cmsUInt32Number VAR_5;

    VAR_1[0] = 0;
    if (VAR_2 > VAR_0)
        VAR_2 = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

        FUNC_0(VAR_4, 31, "%.3f", VAR_3[VAR_5] / 65535.0);
        VAR_4[31] = 0;
        FUNC_1(VAR_1, VAR_4);
        if (VAR_5 < VAR_2 - 1)
            FUNC_1(VAR_1, " ");

    }
}
