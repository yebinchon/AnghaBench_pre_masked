
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*,size_t,int,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ) ;
 long FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (size_t) ;
 int VAR_2 ;

char * FUNC_9(const char VAR_3[], long *VAR_4)
{
    FILE *VAR_5;
    char *VAR_6;


    if (!(VAR_5 = FUNC_2(VAR_3, "r"))) {
        FUNC_3(VAR_2, "XML file %s not found\n", VAR_3);
        return ((void*)0);
    }

    if (FUNC_6(VAR_5, 0, VAR_0) == -1) {
        FUNC_3(VAR_2, "XML file %s broken (seek error)\n", VAR_3);
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    if ((*VAR_4 = FUNC_7(VAR_5)) == -1) {
        FUNC_3(VAR_2, "XML file %s broken (seek error)\n", VAR_3);
        FUNC_1(VAR_5);
        return ((void*)0);
    }
    FUNC_0(*VAR_4 >= 0);

    if (FUNC_6(VAR_5, 0, VAR_1) == -1) {
        FUNC_3(VAR_2, "XML file %s broken (seek error)\n", VAR_3);
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    VAR_6 = (char *)FUNC_8((size_t) * VAR_4);

    if (FUNC_4(VAR_6, (size_t)*VAR_4, 1, VAR_5) != 1) {
        FUNC_3(VAR_2, "XML file %s broken (read error)\n", VAR_3);
        FUNC_5(VAR_6);
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    FUNC_1(VAR_5);

    return VAR_6;
}
