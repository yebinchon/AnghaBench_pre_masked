
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rseq_cs {unsigned long start_ip; unsigned long post_commit_offset; } ;



__attribute__((used)) static bool FUNC_0(unsigned long VAR_0, struct rseq_cs *VAR_1)
{
 return VAR_0 - VAR_1->start_ip < VAR_1->post_commit_offset;
}
