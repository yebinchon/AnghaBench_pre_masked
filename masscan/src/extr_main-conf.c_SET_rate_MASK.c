
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {double max_rate; scalar_t__ echo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct Masscan *VAR_3, const char *VAR_4, const char *VAR_5)
{
    double VAR_6 = 0.0;
    double VAR_7 = 10.0;
    unsigned VAR_8;

    if (VAR_3->echo) {
        FUNC_0(VAR_3->echo, "rate = %-10.2f\n", VAR_3->max_rate);
        return 0;
    }

    for (VAR_8=0; VAR_5[VAR_8] && VAR_5[VAR_8] != '.'; VAR_8++) {
        char VAR_9 = VAR_5[VAR_8];
        if (VAR_9 < '0' || '9' < VAR_9) {
            FUNC_0(VAR_2, "CONF: non-digit in rate spec: %s=%s\n", VAR_4, VAR_5);
            return VAR_0;
        }
        VAR_6 = VAR_6 * 10.0 + (VAR_9 - '0');
    }

    if (VAR_5[VAR_8] == '.') {
        VAR_8++;
        while (VAR_5[VAR_8]) {
            char VAR_10 = VAR_5[VAR_8];
            if (VAR_10 < '0' || '9' < VAR_10) {
                FUNC_0(VAR_2, "CONF: non-digit in rate spec: %s=%s\n",
                        VAR_4, VAR_5);
                return VAR_0;
            }
            VAR_6 += (VAR_10 - '0')/VAR_7;
            VAR_7 /= 10.0;
            VAR_5++;
        }
    }

    VAR_3->max_rate = VAR_6;
    return VAR_1;
}
