
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_10__ {TYPE_1__* manager; } ;
struct TYPE_9__ {int timeout_idle_usec; scalar_t__ expire_event_source; } ;
struct TYPE_8__ {int event; } ;
typedef TYPE_2__ Automount ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(Automount *VAR_4) {
        int VAR_5;
        usec_t VAR_6;

        FUNC_2(VAR_4);

        if (VAR_4->timeout_idle_usec == 0)
                return 0;

        VAR_6 = FUNC_3(VAR_0) + FUNC_0(VAR_4->timeout_idle_usec/3, VAR_2);

        if (VAR_4->expire_event_source) {
                VAR_5 = FUNC_7(VAR_4->expire_event_source, VAR_6);
                if (VAR_5 < 0)
                        return VAR_5;

                return FUNC_6(VAR_4->expire_event_source, VAR_1);
        }

        VAR_5 = FUNC_4(
                        FUNC_1(VAR_4)->manager->event,
                        &VAR_4->expire_event_source,
                        VAR_0, VAR_6, 0,
                        VAR_3, VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        (void) FUNC_5(VAR_4->expire_event_source, "automount-expire");

        return 0;
}
