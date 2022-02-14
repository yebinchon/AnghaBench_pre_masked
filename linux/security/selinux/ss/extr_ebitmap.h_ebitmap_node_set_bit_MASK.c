
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {unsigned int* maps; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (struct ebitmap_node*,unsigned int) ;
 unsigned int FUNC_2 (struct ebitmap_node*,unsigned int) ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline void FUNC_3(struct ebitmap_node *VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2, VAR_3);
 unsigned int VAR_5 = FUNC_2(VAR_2, VAR_3);

 FUNC_0(VAR_4 >= VAR_1);
 VAR_2->maps[VAR_4] |= (VAR_0 << VAR_5);
}
