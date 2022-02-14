
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ position; } ;
struct TYPE_6__ {TYPE_1__ travellog; } ;
typedef int HRESULT ;
typedef TYPE_2__ DocHost ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

HRESULT FUNC_2(DocHost *VAR_1)
{
    if(!VAR_1->travellog.position) {
        FUNC_0("No history available\n");
        return VAR_0;
    }

    return FUNC_1(VAR_1, VAR_1->travellog.position-1);
}
