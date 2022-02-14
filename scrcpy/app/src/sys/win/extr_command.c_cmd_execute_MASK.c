
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int si ;
typedef enum process_result { ____Placeholder_process_result } process_result ;
typedef int cmd ;
struct TYPE_7__ {int * hProcess; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int * HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *,int ,int,int *,int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,char const* const*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int * FUNC_6 (char*) ;

enum process_result
FUNC_7(const char *VAR_6, const char *const VAR_7[], HANDLE *VAR_8) {
    STARTUPINFOW VAR_9;
    PROCESS_INFORMATION VAR_10;
    FUNC_5(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.cb = sizeof(VAR_9);

    char VAR_11[256];
    if (FUNC_4(VAR_11, sizeof(VAR_11), VAR_7)) {
        *VAR_8 = ((void*)0);
        return VAR_3;
    }

    wchar_t *VAR_12 = FUNC_6(VAR_11);
    if (!VAR_12) {
        FUNC_2("Could not allocate wide char string");
        return VAR_3;
    }




    int VAR_13 = 0;

    if (!FUNC_0(((void*)0), VAR_12, ((void*)0), ((void*)0), VAR_2, VAR_13, ((void*)0), ((void*)0), &VAR_9,
                        &VAR_10)) {
        FUNC_3(VAR_12);
        *VAR_8 = ((void*)0);
        if (FUNC_1() == VAR_1) {
            return VAR_4;
        }
        return VAR_3;
    }

    FUNC_3(VAR_12);
    *VAR_8 = VAR_10.hProcess;
    return VAR_5;
}
