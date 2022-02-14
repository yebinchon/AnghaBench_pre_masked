
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_kstats {int outpkts; int inpkts; int conns; int outbytes; int inbytes; } ;
struct ip_vs_estimator {scalar_t__ outbps; scalar_t__ inbps; scalar_t__ outpps; scalar_t__ inpps; scalar_t__ cps; int last_outpkts; int last_inpkts; int last_conns; int last_outbytes; int last_inbytes; } ;
struct ip_vs_stats {struct ip_vs_kstats kstats; struct ip_vs_estimator est; } ;



void FUNC_0(struct ip_vs_stats *VAR_0)
{
 struct ip_vs_estimator *VAR_1 = &VAR_0->est;
 struct ip_vs_kstats *VAR_2 = &VAR_0->kstats;


 VAR_1->last_inbytes = VAR_2->inbytes;
 VAR_1->last_outbytes = VAR_2->outbytes;
 VAR_1->last_conns = VAR_2->conns;
 VAR_1->last_inpkts = VAR_2->inpkts;
 VAR_1->last_outpkts = VAR_2->outpkts;
 VAR_1->cps = 0;
 VAR_1->inpps = 0;
 VAR_1->outpps = 0;
 VAR_1->inbps = 0;
 VAR_1->outbps = 0;
}
