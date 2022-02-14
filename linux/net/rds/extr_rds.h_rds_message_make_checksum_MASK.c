
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_header {scalar_t__ h_csum; } ;


 scalar_t__ FUNC_0 (void*,int) ;

__attribute__((used)) static inline void FUNC_1(struct rds_header *VAR_0)
{
 VAR_0->h_csum = 0;
 VAR_0->h_csum = FUNC_0((void *) VAR_0, sizeof(*VAR_0) >> 2);
}
