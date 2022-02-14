
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_section {int section_mem_map; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct mem_section*) ;

__attribute__((used)) static void FUNC_1(struct mem_section *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 > VAR_1)
  VAR_1 = VAR_3;

 VAR_2->section_mem_map |= VAR_0;
}
