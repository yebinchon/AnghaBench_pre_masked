
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,scalar_t__,int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,scalar_t__,...) ;

DWORD FUNC_5(void)
{
    DWORD VAR_5 = FUNC_1();
    if (VAR_5 != VAR_0) {
        PSTR VAR_6 = ((void*)0);
        if (FUNC_0(VAR_1|VAR_2,
            0, VAR_5, FUNC_3(VAR_3,VAR_4), (PSTR)&VAR_6, 0, ((void*)0))) {
            if (VAR_6 != ((void*)0)) {
                FUNC_4("ReportLastError() %d - %s\n", VAR_5, VAR_6);
            } else {
                FUNC_4("ERROR: ReportLastError() %d - returned TRUE but with no msg string!\n", VAR_5);
            }
        } else {
            FUNC_4("ReportLastError() %d - unknown error\n", VAR_5);
        }
        if (VAR_6 != ((void*)0)) {
            FUNC_2(VAR_6);
        }
    }
    return VAR_5;
}
