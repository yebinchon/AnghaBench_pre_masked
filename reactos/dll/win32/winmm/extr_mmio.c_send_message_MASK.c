
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IOProcList {scalar_t__ is_unicode; int (* pIOProc ) (int ,int ,int ,int ) ;} ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef scalar_t__ LPMMIOINFO ;
typedef int LPARAM ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static LRESULT FUNC_3(struct IOProcList* VAR_2, LPMMIOINFO VAR_3,
                             DWORD VAR_4, LPARAM VAR_5,
                             LPARAM VAR_6, BOOL VAR_7)
{
    LRESULT VAR_8 = VAR_0;
    LPARAM VAR_9 = VAR_5, VAR_10 = VAR_6;

    if (!VAR_2) {
 FUNC_0("ioProc NULL\n");
 return VAR_1;
    }

    if (VAR_2->is_unicode != VAR_7) {

        FUNC_1("NIY 32 A<=>W mapping\n");
    }
    VAR_8 = (VAR_2->pIOProc)((LPSTR)VAR_3, VAR_4, VAR_9, VAR_10);







    return VAR_8;
}
