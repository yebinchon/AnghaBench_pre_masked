
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int v ;
typedef scalar_t__ usec_t ;
struct TYPE_4__ {int warned_clamping_cpu_quota_period; } ;
typedef TYPE_1__ Unit ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (char*,int,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,int ) ;

__attribute__((used)) static usec_t FUNC_3(Unit *VAR_7, usec_t VAR_8, usec_t VAR_9) {
        usec_t VAR_10;

        if (VAR_9 == VAR_4)

                return VAR_0;

        if (VAR_8 == VAR_4)

                VAR_8 = VAR_0;


        VAR_10 = FUNC_0(VAR_8, VAR_9, VAR_5, VAR_6);

        if (VAR_10 != VAR_8) {
                char VAR_11[VAR_1];
                FUNC_2(VAR_7, VAR_7->warned_clamping_cpu_quota_period ? VAR_2 : VAR_3, 0,
                              "Clamping CPU interval for cpu.max: period is now %s",
                              FUNC_1(VAR_11, sizeof(VAR_11), VAR_10, 1));
                VAR_7->warned_clamping_cpu_quota_period = 1;
        }

        return VAR_10;
}
