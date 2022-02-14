
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rds_header {int * h_exthdr; int h_sequence; void* h_dport; void* h_sport; scalar_t__ h_flags; } ;
typedef void* __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct rds_header *VAR_1, __be16 VAR_2,
     __be16 VAR_3, u64 VAR_4)
{
 VAR_1->h_flags = 0;
 VAR_1->h_sport = VAR_2;
 VAR_1->h_dport = VAR_3;
 VAR_1->h_sequence = FUNC_0(VAR_4);
 VAR_1->h_exthdr[0] = VAR_0;
}
