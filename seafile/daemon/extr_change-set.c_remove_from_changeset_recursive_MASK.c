
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gboolean ;
typedef int ChangeSetDirent ;
typedef int ChangeSet ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,scalar_t__*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6 (ChangeSet *VAR_1,
                                 const char *VAR_2,
                                 gboolean VAR_3,
                                 const char *VAR_4)
{
    ChangeSetDirent *VAR_5;
    gboolean VAR_6 = VAR_0;

    VAR_5 = FUNC_1 (VAR_1, VAR_2, &VAR_6);
    FUNC_0 (VAR_5);

    if (VAR_3 && VAR_6) {
        char *VAR_7 = FUNC_3(VAR_2);
        char *VAR_8 = FUNC_5 (VAR_7, '/');
        if (VAR_8) {
            *VAR_8 = '\0';
            if (FUNC_4(VAR_7) >= FUNC_4(VAR_4)) {

                FUNC_6 (VAR_1,
                                                 VAR_7,
                                                 VAR_3,
                                                 VAR_4);
            }
        }
        FUNC_2 (VAR_7);
    }
}
