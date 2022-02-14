
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ table_mask; scalar_t__ b_mask; int * table; int * large_bmap; } ;
typedef TYPE_1__ stb_perfect ;


 int FUNC_0 (int *) ;

void FUNC_1(stb_perfect *VAR_0)
{
   if (VAR_0->large_bmap) FUNC_0(VAR_0->large_bmap);
   if (VAR_0->table ) FUNC_0(VAR_0->table);
   VAR_0->large_bmap = ((void*)0);
   VAR_0->table = ((void*)0);
   VAR_0->b_mask = 0;
   VAR_0->table_mask = 0;
}
