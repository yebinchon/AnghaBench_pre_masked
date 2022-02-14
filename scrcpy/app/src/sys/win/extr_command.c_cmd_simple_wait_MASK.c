
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool
FUNC_2(HANDLE VAR_2, DWORD *VAR_3) {
    DWORD VAR_4;
    if (FUNC_1(VAR_2, VAR_0) != VAR_1
            || !FUNC_0(VAR_2, &VAR_4)) {

        VAR_4 = -1;
    }
    if (VAR_3) {
        *VAR_3 = VAR_4;
    }
    return !VAR_4;
}
