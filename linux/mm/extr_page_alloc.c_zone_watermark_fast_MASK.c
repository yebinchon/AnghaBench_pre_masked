
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long* lowmem_reserve; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zone*,unsigned int,unsigned long,int,unsigned int,long) ;
 long FUNC_1 (struct zone*,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct zone *VAR_3, unsigned int VAR_4,
  unsigned long VAR_5, int VAR_6, unsigned int VAR_7)
{
 long VAR_8 = FUNC_1(VAR_3, VAR_2);
 long VAR_9 = 0;
 if (!VAR_4 && (VAR_8 - VAR_9) > VAR_5 + VAR_3->lowmem_reserve[VAR_6])
  return 1;

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8);
}
