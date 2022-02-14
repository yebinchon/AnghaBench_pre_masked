
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int m; int y; } ;
typedef TYPE_1__ timelib_time ;
struct TYPE_6__ {int y; int m; int invert; int d; int h; int i; int s; int us; } ;
typedef TYPE_2__ timelib_rel_time ;


 int FUNC_0 (int ,int,int,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int ) ;

void FUNC_2(timelib_time *VAR_0, timelib_rel_time *VAR_1)
{
 FUNC_0(0, 1000000, 1000000, &VAR_1->us, &VAR_1->s);
 FUNC_0(0, 60, 60, &VAR_1->s, &VAR_1->i);
 FUNC_0(0, 60, 60, &VAR_1->i, &VAR_1->h);
 FUNC_0(0, 24, 24, &VAR_1->h, &VAR_1->d);
 FUNC_0(0, 12, 12, &VAR_1->m, &VAR_1->y);

 FUNC_1(&VAR_0->y, &VAR_0->m, &VAR_1->y, &VAR_1->m, &VAR_1->d, VAR_1->invert);
 FUNC_0(0, 12, 12, &VAR_1->m, &VAR_1->y);
}
