
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intrinsic_latency_duration; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,long long,...) ;
 int FUNC_3 (int ,int ) ;
 long long FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void) {
    long long VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 0;

    VAR_5 = VAR_1.intrinsic_latency_duration*1000000;
    VAR_4 = FUNC_4() + VAR_5;
    FUNC_3(VAR_0, VAR_3);

    while(1) {
        long long VAR_8, VAR_9, VAR_10;

        VAR_8 = FUNC_4();
        FUNC_0();
        VAR_9 = FUNC_4();
        VAR_10 = VAR_9-VAR_8;
        VAR_7++;
        if (VAR_10 <= 0) continue;


        if (VAR_10 > VAR_6) {
            VAR_6 = VAR_10;
            FUNC_2("Max latency so far: %lld microseconds.\n", VAR_6);
        }

        double VAR_11 = (double)VAR_5/VAR_7;
        double VAR_12 = VAR_11 * 1e3;
        if (VAR_2 || VAR_9 > VAR_4) {
            FUNC_2("\n%lld total runs "
                "(avg latency: "
                "%.4f microseconds / %.2f nanoseconds per run).\n",
                VAR_7, VAR_11, VAR_12);
            FUNC_2("Worst run took %.0fx longer than the average latency.\n",
                VAR_6 / VAR_11);
            FUNC_1(0);
        }
    }
}
