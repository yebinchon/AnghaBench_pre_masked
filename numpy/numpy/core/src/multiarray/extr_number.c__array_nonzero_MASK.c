
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_4__ {TYPE_1__* f; } ;
struct TYPE_3__ {int (* nonzero ) (int ,int *) ;} ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(PyArrayObject *VAR_1)
{
    npy_intp VAR_2;

    VAR_2 = FUNC_4(VAR_1);
    if (VAR_2 == 1) {
        int VAR_3;
        if (FUNC_1(" while converting array to bool")) {
            return -1;
        }
        VAR_3 = FUNC_3(VAR_1)->f->nonzero(FUNC_2(VAR_1), VAR_1);

        if (FUNC_5()) {
            VAR_3 = -1;
        }
        FUNC_7();
        return VAR_3;
    }
    else if (VAR_2 == 0) {

        if (FUNC_0("The truth value of an empty array is ambiguous. "
                      "Returning False, but in future this will result in an error. "
                      "Use `array.size > 0` to check that an array is not empty.") < 0) {
            return -1;
        }
        return 0;
    }
    else {
        FUNC_6(VAR_0,
                        "The truth value of an array "
                        "with more than one element is ambiguous. "
                        "Use a.any() or a.all()");
        return -1;
    }
}
