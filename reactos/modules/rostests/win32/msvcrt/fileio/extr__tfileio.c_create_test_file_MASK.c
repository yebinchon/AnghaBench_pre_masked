
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(TCHAR* VAR_1, TCHAR* VAR_2, TCHAR* VAR_3, TCHAR* VAR_4)
{
    if (VAR_0) {
        FUNC_1(FUNC_0("STATUS: Attempting to create output file %s\n"), VAR_1);
    }
    if (FUNC_2(VAR_1, VAR_2, VAR_4)) {
        if (VAR_0) {
            FUNC_1(FUNC_0("STATUS: Attempting to verify output file %s\n"), VAR_1);
        }
        if (FUNC_3(VAR_1, VAR_3, VAR_4)) {
            if (VAR_0) {
                FUNC_1(FUNC_0("SUCCESS: %s verified ok\n"), VAR_1);
            }
        } else {

            return 2;
        }
    } else {
        FUNC_1(FUNC_0("ERROR: failed to create file %s\n"), VAR_1);
        return 1;
    }
    return 0;
}
