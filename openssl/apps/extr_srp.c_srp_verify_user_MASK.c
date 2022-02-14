
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int password ;
struct TYPE_3__ {char const* prompt_info; char const* password; } ;
typedef TYPE_1__ PW_CB_DATA ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char*,char**,char**,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_1, const char *VAR_2,
                             char *VAR_3, const char *VAR_4, const char *VAR_5,
                             const char *VAR_6, int VAR_7)
{
    char VAR_8[1025];
    PW_CB_DATA VAR_9;
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    int VAR_12;

    VAR_9.prompt_info = VAR_1;
    VAR_9.password = VAR_6;

    VAR_12 = FUNC_5(VAR_8, sizeof(VAR_8)-1, 0, &VAR_9);
    if (VAR_12 > 0) {
        VAR_8[VAR_12] = 0;
        if (VAR_7)
            FUNC_0(VAR_0,
                       "Validating\n   user=\"%s\"\n srp_verifier=\"%s\"\n srp_usersalt=\"%s\"\n g=\"%s\"\n N=\"%s\"\n",
                       VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        if (VAR_7 > 1)
            FUNC_0(VAR_0, "Pass %s\n", VAR_8);

        FUNC_1(VAR_3 != ((void*)0));
        if ((VAR_11 = FUNC_4(VAR_1, VAR_8, &VAR_3,
                                        &VAR_10, VAR_5, VAR_4)) == ((void*)0)) {
            FUNC_0(VAR_0, "Internal error validating SRP verifier\n");
        } else {
            if (FUNC_6(VAR_10, VAR_2))
                VAR_11 = ((void*)0);
            FUNC_3(VAR_10);
        }
        FUNC_2(VAR_8, VAR_12);
    }
    return VAR_11;
}
