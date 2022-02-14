
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_estimator {int cps; int inpps; int outpps; int inbps; int outbps; } ;
struct ip_vs_stats {struct ip_vs_estimator est; } ;
struct ip_vs_kstats {int cps; int inpps; int outpps; int inbps; int outbps; } ;



void FUNC_0(struct ip_vs_kstats *VAR_0, struct ip_vs_stats *VAR_1)
{
 struct ip_vs_estimator *VAR_2 = &VAR_1->est;

 VAR_0->cps = (VAR_2->cps + 0x1FF) >> 10;
 VAR_0->inpps = (VAR_2->inpps + 0x1FF) >> 10;
 VAR_0->outpps = (VAR_2->outpps + 0x1FF) >> 10;
 VAR_0->inbps = (VAR_2->inbps + 0xF) >> 5;
 VAR_0->outbps = (VAR_2->outbps + 0xF) >> 5;
}
