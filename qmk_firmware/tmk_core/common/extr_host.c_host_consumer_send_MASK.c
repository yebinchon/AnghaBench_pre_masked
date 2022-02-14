
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int (* send_consumer ) (scalar_t__) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(uint16_t VAR_2) {
    if (VAR_2 == VAR_1) return;
    VAR_1 = VAR_2;

    if (!VAR_0) return;
    (*VAR_0->send_consumer)(VAR_2);
}
