
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ output; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,long long,long long,double,long long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(long long VAR_5, long long VAR_6, double VAR_7, long long VAR_8) {
    if (VAR_3.output == VAR_2) {
        FUNC_1("min: %lld, max: %lld, avg: %.2f (%lld samples)",
                VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_0(VAR_4);
    } else if (VAR_3.output == VAR_0) {
        FUNC_1("%lld,%lld,%.2f,%lld\n", VAR_5, VAR_6, VAR_7, VAR_8);
    } else if (VAR_3.output == VAR_1) {
        FUNC_1("%lld %lld %.2f %lld\n", VAR_5, VAR_6, VAR_7, VAR_8);
    }
}
