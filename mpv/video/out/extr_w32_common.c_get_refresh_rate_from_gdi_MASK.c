
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int dmSize; int dmDisplayFrequency; } ;
typedef TYPE_1__ DEVMODEW ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,TYPE_1__*) ;

__attribute__((used)) static double FUNC_1(const wchar_t *VAR_1)
{
    DEVMODEW VAR_2 = { .dmSize = sizeof VAR_2 };
    if (!FUNC_0(VAR_1, VAR_0, &VAR_2))
        return 0.0;




    if (VAR_2.dmDisplayFrequency == 1)
        return 0.0;




    double VAR_3 = VAR_2.dmDisplayFrequency;
    switch (VAR_2.dmDisplayFrequency) {
        case 23:
        case 29:
        case 47:
        case 59:
        case 71:
        case 89:
        case 95:
        case 119:
        case 143:
            VAR_3 = (VAR_3 + 1) / 1.001;
    }

    return VAR_3;
}
