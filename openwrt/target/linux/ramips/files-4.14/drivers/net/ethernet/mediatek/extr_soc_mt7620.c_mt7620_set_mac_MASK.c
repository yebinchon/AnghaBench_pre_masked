
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7620_gsw {int dummy; } ;
struct fe_priv {int page_lock; TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ swpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt7620_gsw*,unsigned char,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fe_priv *VAR_2, unsigned char *VAR_3)
{
 struct mt7620_gsw *VAR_4 = (struct mt7620_gsw *)VAR_2->soc->swpriv;
 unsigned long VAR_5;

 FUNC_1(&VAR_2->page_lock, VAR_5);
 FUNC_0(VAR_4, (VAR_3[0] << 8) | VAR_3[1], VAR_1);
 FUNC_0(VAR_4, (VAR_3[2] << 24) | (VAR_3[3] << 16) | (VAR_3[4] << 8) | VAR_3[5],
  VAR_0);
 FUNC_2(&VAR_2->page_lock, VAR_5);
}
