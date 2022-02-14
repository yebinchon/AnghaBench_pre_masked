
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsvp_head {int tgenerator; int* tmap; } ;



__attribute__((used)) static int FUNC_0(struct rsvp_head *VAR_0)
{
 int VAR_1 = VAR_0->tgenerator >> 5;
 u32 VAR_2 = 1 << (VAR_0->tgenerator & 0x1F);

 if (VAR_0->tmap[VAR_1] & VAR_2)
  return 0;
 VAR_0->tmap[VAR_1] |= VAR_2;
 return 1;
}
