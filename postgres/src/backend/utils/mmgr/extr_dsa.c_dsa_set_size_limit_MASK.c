
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* control; } ;
typedef TYPE_2__ dsa_area ;
struct TYPE_5__ {size_t max_total_segment_size; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void
FUNC_3(dsa_area *VAR_1, size_t VAR_2)
{
 FUNC_1(FUNC_0(VAR_1), VAR_0);
 VAR_1->control->max_total_segment_size = VAR_2;
 FUNC_2(FUNC_0(VAR_1));
}
