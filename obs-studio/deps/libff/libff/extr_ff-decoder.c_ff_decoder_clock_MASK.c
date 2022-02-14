
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_decoder {double current_pts_time; double current_pts; } ;


 double FUNC_0 () ;

double FUNC_1(void *VAR_0)
{
 struct ff_decoder *VAR_1 = VAR_0;
 double VAR_2 = (FUNC_0() - VAR_1->current_pts_time) / 1000000.0;
 return VAR_1->current_pts + VAR_2;
}
