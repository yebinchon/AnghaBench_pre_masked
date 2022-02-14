
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int verbose; } ;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char const*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void *VAR_3, int VAR_4, const char *VAR_5)
{
    bool VAR_6 = 1;

    switch (VAR_4) {
    case 132:
        VAR_6 = 0;
        break;
    case 130:
    case 129:
    case 134:
    case 131:
        if (VAR_1.verbose < 2) {
            VAR_6 = 0;
        }
        break;
    case 128:
    case 133:
        if (VAR_1.verbose < 1) {
            VAR_6 = 0;
        }
        break;
    default:

        ;
    }

    if (VAR_6) {
        FUNC_0(VAR_2, "SASL (severity %d): %s\n", VAR_4, VAR_5);
    }

    return VAR_0;
}
