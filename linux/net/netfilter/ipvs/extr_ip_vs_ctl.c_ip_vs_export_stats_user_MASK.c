
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ip_vs_stats_user {void* outbps; void* inbps; void* outpps; void* inpps; void* cps; int outbytes; int inbytes; void* outpkts; void* inpkts; void* conns; } ;
struct ip_vs_kstats {scalar_t__ outbps; scalar_t__ inbps; scalar_t__ outpps; scalar_t__ inpps; scalar_t__ cps; int outbytes; int inbytes; scalar_t__ outpkts; scalar_t__ inpkts; scalar_t__ conns; } ;



__attribute__((used)) static void
FUNC_0(struct ip_vs_stats_user *VAR_0, struct ip_vs_kstats *VAR_1)
{
 VAR_0->conns = (u32)VAR_1->conns;
 VAR_0->inpkts = (u32)VAR_1->inpkts;
 VAR_0->outpkts = (u32)VAR_1->outpkts;
 VAR_0->inbytes = VAR_1->inbytes;
 VAR_0->outbytes = VAR_1->outbytes;
 VAR_0->cps = (u32)VAR_1->cps;
 VAR_0->inpps = (u32)VAR_1->inpps;
 VAR_0->outpps = (u32)VAR_1->outpps;
 VAR_0->inbps = (u32)VAR_1->inbps;
 VAR_0->outbps = (u32)VAR_1->outbps;
}
