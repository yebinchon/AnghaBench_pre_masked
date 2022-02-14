
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static npy_intp
FUNC_3(double VAR_4)
{
    double VAR_5;

    VAR_5 = FUNC_1(VAR_4);

    if (FUNC_2(VAR_5)) {
        FUNC_0(VAR_3,
            "arange: cannot compute length");
        return -1;
    }
    if (!(VAR_1 <= VAR_5 && VAR_5 <= VAR_0)) {
        FUNC_0(VAR_2,
                "arange: overflow while computing length");
        return -1;
    }

    return (npy_intp)VAR_5;
}
