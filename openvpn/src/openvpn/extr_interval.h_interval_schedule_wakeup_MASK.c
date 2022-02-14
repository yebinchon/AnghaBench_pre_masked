
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct interval {scalar_t__ future_trigger; scalar_t__ refresh; scalar_t__ last_test_true; } ;
typedef scalar_t__ interval_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int const) ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_2(struct interval *VAR_2, interval_t *VAR_3)
{
    const time_t VAR_4 = VAR_1;
    FUNC_1(VAR_3, VAR_2->last_test_true + VAR_2->refresh, VAR_4);
    FUNC_1(VAR_3, VAR_2->future_trigger, VAR_4);



}
