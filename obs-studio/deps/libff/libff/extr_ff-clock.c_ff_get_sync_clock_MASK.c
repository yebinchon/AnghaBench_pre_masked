
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_clock {double (* sync_clock ) (int ) ;int opaque; } ;


 double FUNC_0 (int ) ;

double FUNC_1(struct ff_clock *VAR_0)
{
 return VAR_0->sync_clock(VAR_0->opaque);
}
