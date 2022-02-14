
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {scalar_t__ us; scalar_t__ s; scalar_t__ i; scalar_t__ h; scalar_t__ d; scalar_t__ m; scalar_t__ y; } ;
struct TYPE_12__ {int have_relative; int dst; scalar_t__ z; int sse; scalar_t__ sse_uptodate; TYPE_10__ relative; } ;
typedef TYPE_1__ timelib_time ;
struct TYPE_13__ {int y; int m; int d; int h; int i; int s; int us; scalar_t__ invert; } ;
typedef TYPE_2__ timelib_rel_time ;


 int FUNC_0 (TYPE_10__*,int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

timelib_time *FUNC_4(timelib_time *VAR_0, timelib_rel_time *VAR_1)
{
 int VAR_2 = 1;
 timelib_time *VAR_3 = FUNC_1(VAR_0);

 if (VAR_1->invert) {
  VAR_2 = -1;
 }

 FUNC_0(&VAR_3->relative, 0, sizeof(timelib_rel_time));
 VAR_3->relative.y = 0 - (VAR_1->y * VAR_2);
 VAR_3->relative.m = 0 - (VAR_1->m * VAR_2);
 VAR_3->relative.d = 0 - (VAR_1->d * VAR_2);
 VAR_3->relative.h = 0 - (VAR_1->h * VAR_2);
 VAR_3->relative.i = 0 - (VAR_1->i * VAR_2);
 VAR_3->relative.s = 0 - (VAR_1->s * VAR_2);
 VAR_3->relative.us = 0 - (VAR_1->us * VAR_2);
 VAR_3->have_relative = 1;
 VAR_3->sse_uptodate = 0;

 FUNC_3(VAR_3, ((void*)0));


 if (VAR_0->dst == 1 && VAR_3->dst == 0 && !VAR_1->y && !VAR_1->m && !VAR_1->d) {
  VAR_3->sse -= VAR_0->z;
  VAR_3->sse += VAR_3->z;
 }

 if (VAR_0->dst == 0 && VAR_3->dst == 1 && !VAR_1->y && !VAR_1->m && !VAR_1->d ) {
  VAR_3->sse -= VAR_0->z;
  VAR_3->sse += VAR_3->z;
 }

 FUNC_2(VAR_3);

 VAR_3->have_relative = 0;

 return VAR_3;
}
