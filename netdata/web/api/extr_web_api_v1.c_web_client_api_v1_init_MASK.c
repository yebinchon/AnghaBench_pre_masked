
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_6__ {scalar_t__ name; void* hash; } ;
struct TYPE_5__ {scalar_t__ name; void* hash; } ;
struct TYPE_4__ {scalar_t__ name; void* hash; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;

void FUNC_4(void) {
    int VAR_3;

    for(VAR_3 = 0; VAR_2[VAR_3].name ; VAR_3++)
        VAR_2[VAR_3].hash = FUNC_0(VAR_2[VAR_3].name);

    for(VAR_3 = 0; VAR_0[VAR_3].name ; VAR_3++)
        VAR_0[VAR_3].hash = FUNC_0(VAR_0[VAR_3].name);

    for(VAR_3 = 0; VAR_1[VAR_3].name ; VAR_3++)
        VAR_1[VAR_3].hash = FUNC_0(VAR_1[VAR_3].name);

    FUNC_3();

 uuid_t VAR_4;


 FUNC_1(VAR_4);


 char VAR_5[37];
 FUNC_2(VAR_4, VAR_5);
}
