
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_priv {int page_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct fe_priv *VAR_2, unsigned char *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_2->page_lock, VAR_4);
 FUNC_0((VAR_3[0] << 8) | VAR_3[1], VAR_0);
 FUNC_0((VAR_3[2] << 24) | (VAR_3[3] << 16) | (VAR_3[4] << 8) | VAR_3[5],
        VAR_1);
 FUNC_2(&VAR_2->page_lock, VAR_4);
}
