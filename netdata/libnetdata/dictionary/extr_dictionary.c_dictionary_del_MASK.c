
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NAME_VALUE ;
typedef int DICTIONARY ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(DICTIONARY *VAR_1, const char *VAR_2) {
    int VAR_3;

    FUNC_0(VAR_0, "DEL dictionary entry with name '%s'.", VAR_2);

    FUNC_4(VAR_1);

    NAME_VALUE *VAR_4 = FUNC_2(VAR_1, VAR_2, 0);
    if(FUNC_5(!VAR_4)) {
        FUNC_0(VAR_0, "Not found dictionary entry with name '%s'.", VAR_2);
        VAR_3 = -1;
    }
    else {
        FUNC_0(VAR_0, "Found dictionary entry with name '%s'.", VAR_2);
        FUNC_1(VAR_1, VAR_4);
        VAR_3 = 0;
    }

    FUNC_3(VAR_1);

    return VAR_3;
}
