
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ao {int dummy; } ;
typedef int pa_subscription_event_type_t ;
typedef int pa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ao*) ;

__attribute__((used)) static void FUNC_1(pa_context *VAR_5, pa_subscription_event_type_t VAR_6,
                         uint32_t VAR_7, void *VAR_8)
{
    struct ao *VAR_9 = VAR_8;
    int VAR_10 = VAR_6 & VAR_4;
    int VAR_11 = VAR_6 & VAR_0;
    if ((VAR_10 == VAR_1 || VAR_10 == VAR_2)
        && VAR_11 == VAR_3)
    {
        FUNC_0(VAR_9);
    }
}
