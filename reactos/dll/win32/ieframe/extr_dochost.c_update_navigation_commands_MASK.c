
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int loading_pos; unsigned int position; unsigned int length; } ;
struct TYPE_6__ {TYPE_1__ travellog; } ;
typedef TYPE_2__ DocHost ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1(DocHost *VAR_2)
{
    unsigned VAR_3 = VAR_2->travellog.loading_pos == -1 ? VAR_2->travellog.position : VAR_2->travellog.loading_pos;

    FUNC_0(VAR_2, VAR_0, VAR_3 > 0);
    FUNC_0(VAR_2, VAR_1, VAR_3 < VAR_2->travellog.length);
}
