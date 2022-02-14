
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; scalar_t__ max_size; int device_count; } ;
struct TYPE_5__ {int path; } ;
typedef TYPE_1__ PnP_AudioDevice ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,TYPE_1__*,int) ;

BOOL
FUNC_5(PnP_AudioDevice* VAR_3)
{
    int VAR_4;


    VAR_4 = sizeof(PnP_AudioDevice);
    VAR_4 += FUNC_2(VAR_3->path);

    FUNC_0();







    if (VAR_2->size + VAR_4 > VAR_2->max_size)
    {


        FUNC_1();

        return VAR_0;
    }


    FUNC_4((char*)VAR_2 + VAR_2->size,
           VAR_3,
           VAR_4);


    VAR_2->device_count ++;
    VAR_2->size += VAR_4;

    FUNC_1();

    FUNC_3("Device added to list\n");

    return VAR_1;
}
