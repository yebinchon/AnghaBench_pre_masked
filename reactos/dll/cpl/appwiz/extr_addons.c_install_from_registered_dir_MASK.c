
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum install_res { ____Placeholder_install_res } install_res ;
struct TYPE_2__ {char* file_name; } ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,char*,int ,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_2 (char*,int ,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*,char*,char*) ;
 int VAR_9 ;

__attribute__((used)) static enum install_res FUNC_8(void)
{
    char *VAR_10;
    DWORD VAR_11, VAR_12, VAR_13 = VAR_4;
    enum install_res VAR_14;

    VAR_10 = FUNC_4(VAR_13 + sizeof(VAR_8->file_name));

    VAR_11 = FUNC_1(VAR_2, VAR_9, "GeckoCabDir", VAR_7, &VAR_12, (PBYTE)VAR_10, &VAR_13);
    if(VAR_11 == VAR_0) {
        VAR_10 = FUNC_6(VAR_10, VAR_13 + sizeof(VAR_8->file_name));
        VAR_11 = FUNC_1(VAR_2, VAR_9, "GeckoCabDir", VAR_7, &VAR_12, (PBYTE)VAR_10, &VAR_13);
    }

    if(VAR_11 != VAR_1 || (VAR_12 != VAR_6 && VAR_12 != VAR_5)) {
        FUNC_5(VAR_10);
        return VAR_3;
    }

    if (VAR_12 == VAR_5)
    {
        VAR_13 = FUNC_0(VAR_10, ((void*)0), 0);
        if (VAR_13)
        {
            char* VAR_15 = FUNC_4(VAR_13 + sizeof(VAR_8->file_name));
            FUNC_0(VAR_10, VAR_15, VAR_13);
            FUNC_5(VAR_10);
            VAR_10 = VAR_15;
        }
    }

    FUNC_2("Trying %s/%s\n", FUNC_3(VAR_10), FUNC_3(VAR_8->file_name));

    VAR_14 = FUNC_7(VAR_10, "", VAR_8->file_name);

    FUNC_5(VAR_10);
    return VAR_14;
}
