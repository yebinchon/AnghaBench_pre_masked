
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int VAR_5 ;
 void* VAR_6 ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char const*) ;
 void* FUNC_4 (char const*,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (char*,int ) ;
 int VAR_9 ;
 void* VAR_10 ;
 int * VAR_11 ;
 scalar_t__ FUNC_6 (char const*,char*) ;

int
FUNC_7 (const char *VAR_12, const char *VAR_13,
                  const char *VAR_14)
{
    FUNC_2 (((void*)0), VAR_4 | VAR_0
                       | VAR_1, VAR_9, ((void*)0));
    FUNC_2 ("Ccnet", VAR_4 | VAR_0
                       | VAR_1, VAR_5, ((void*)0));


    VAR_6 = FUNC_4(VAR_13, VAR_3);
    VAR_10 = FUNC_4(VAR_14, VAR_2);

    if (FUNC_6(VAR_12, "-") == 0) {
        VAR_8 = VAR_11;
        VAR_7 = FUNC_3 (VAR_12);
    }
    else {
        VAR_7 = FUNC_0(VAR_12);
        if ((VAR_8 = FUNC_1 (VAR_7, "a+")) == ((void*)0)) {
            FUNC_5 ("Failed to open file %s\n", VAR_7);
            return -1;
        }
    }

    return 0;
}
