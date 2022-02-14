
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_m3 {int dummy; } ;
struct m3_list {scalar_t__ curlen; scalar_t__ mem_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_m3*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_m3 *VAR_1, struct m3_list *VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_1, VAR_0,
     VAR_2->mem_addr + VAR_2->curlen,
     VAR_3);
 return VAR_2->curlen++;
}
