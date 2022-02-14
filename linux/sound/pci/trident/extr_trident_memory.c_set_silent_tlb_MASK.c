
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; scalar_t__ area; } ;
struct TYPE_4__ {TYPE_1__ silent_page; } ;
struct snd_trident {TYPE_2__ tlb; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_trident*,int,unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_1(struct snd_trident *VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_2 *= VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_2++)
  FUNC_0(VAR_1, VAR_2, (unsigned long)VAR_1->tlb.silent_page.area, VAR_1->tlb.silent_page.addr);
}
