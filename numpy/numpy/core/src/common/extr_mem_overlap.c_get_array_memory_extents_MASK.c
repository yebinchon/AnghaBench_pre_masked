
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_uintp ;
typedef scalar_t__ npy_intp ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int,int ,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_7(PyArrayObject *VAR_0,
                         npy_uintp *VAR_1, npy_uintp *VAR_2,
                         npy_uintp *VAR_3)
{
    npy_intp VAR_4, VAR_5;
    int VAR_6;
    FUNC_6(FUNC_3(VAR_0), FUNC_4(VAR_0),
                               FUNC_2(VAR_0), FUNC_5(VAR_0),
                               &VAR_4, &VAR_5);
    *VAR_1 = (npy_uintp)FUNC_0(VAR_0) + (npy_uintp)VAR_4;
    *VAR_2 = (npy_uintp)FUNC_0(VAR_0) + (npy_uintp)VAR_5;

    *VAR_3 = FUNC_3(VAR_0);
    for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_0); ++VAR_6) {
        *VAR_3 *= FUNC_1(VAR_0, VAR_6);
    }
}
