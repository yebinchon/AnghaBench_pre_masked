
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct he_stat {int period; int nr_events; } ;



__attribute__((used)) static void FUNC_0(struct he_stat *VAR_0)
{
 VAR_0->period = (VAR_0->period * 7) / 8;
 VAR_0->nr_events = (VAR_0->nr_events * 7) / 8;

}
