
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_header {unsigned short start_middle; unsigned short middle_chunks; } ;


 unsigned short VAR_0 ;
 void* FUNC_0 (void*,void*,unsigned short) ;

__attribute__((used)) static inline void *FUNC_1(struct z3fold_header *VAR_1,
    unsigned short VAR_2)
{
 void *VAR_3 = VAR_1;
 return FUNC_0(VAR_3 + (VAR_2 << VAR_0),
         VAR_3 + (VAR_1->start_middle << VAR_0),
         VAR_1->middle_chunks << VAR_0);
}
