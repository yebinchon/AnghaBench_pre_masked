
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PktStreamStat {int pkt_block; scalar_t__ final_done; } ;
typedef int PushFilter ;


 int VAR_0 ;
 struct PktStreamStat* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(PushFilter *VAR_1, void *VAR_2, void **VAR_3)
{
 struct PktStreamStat *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 VAR_4->final_done = 0;
 VAR_4->pkt_block = 1 << VAR_0;
 *VAR_3 = VAR_4;

 return VAR_4->pkt_block;
}
