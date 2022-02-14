
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,int ) ;

__attribute__((used)) static
cmsBool FUNC_3(const char *VAR_3, const char *VAR_4, char *VAR_5, cmsUInt32Number VAR_6)
{
    char *VAR_7;
    cmsUInt32Number VAR_8;


    if (FUNC_0(VAR_3)) {

        FUNC_1(VAR_5, VAR_3, VAR_6);
        VAR_5[VAR_6-1] = 0;
        return VAR_2;
    }


    FUNC_1(VAR_5, VAR_4, VAR_6);
    VAR_5[VAR_6-1] = 0;

    VAR_7 = FUNC_2(VAR_5, VAR_0);
    if (VAR_7 == ((void*)0)) return VAR_1;

    VAR_8 = (cmsUInt32Number) (VAR_7 - VAR_5);
    if (VAR_8 >= VAR_6) return VAR_1;


    FUNC_1(VAR_7 + 1, VAR_3, VAR_6 - VAR_8);

    return VAR_2;
}
