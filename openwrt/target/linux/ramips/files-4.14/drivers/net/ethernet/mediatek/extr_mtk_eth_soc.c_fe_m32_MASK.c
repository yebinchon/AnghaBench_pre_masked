
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fe_priv {int page_lock; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fe_priv *VAR_1, u32 VAR_2, u32 VAR_3, unsigned VAR_4)
{
 u32 VAR_5;

 FUNC_2(&VAR_1->page_lock);
 VAR_5 = FUNC_0(VAR_0 + VAR_4);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;
 FUNC_1(VAR_5, VAR_0 + VAR_4);
 FUNC_3(&VAR_1->page_lock);
}
