
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* md_num_open_segs; } ;
typedef TYPE_1__* SMgrRelation ;


 int VAR_0 ;

void
FUNC_0(SMgrRelation VAR_1)
{

 for (int VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
  VAR_1->md_num_open_segs[VAR_2] = 0;
}
