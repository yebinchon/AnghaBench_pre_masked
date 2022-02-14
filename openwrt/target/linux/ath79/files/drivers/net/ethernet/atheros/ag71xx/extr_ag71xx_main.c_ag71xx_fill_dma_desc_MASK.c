
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ag71xx_ring {int desc_split; int curr; int order; } ;
struct ag71xx_desc {unsigned int data; unsigned int ctrl; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct ag71xx_desc*) ;
 struct ag71xx_desc* FUNC_2 (struct ag71xx_ring*,int) ;

__attribute__((used)) static int FUNC_3(struct ag71xx_ring *VAR_2, u32 VAR_3, int VAR_4)
{
 int VAR_5;
 struct ag71xx_desc *VAR_6;
 int VAR_7 = FUNC_0(VAR_2->order) - 1;
 int VAR_8 = 0;
 int VAR_9 = VAR_2->desc_split;

 if (!VAR_9)
  VAR_9 = VAR_4;

 while (VAR_4 > 0) {
  unsigned int VAR_10 = VAR_4;

  VAR_5 = (VAR_2->curr + VAR_8) & VAR_7;
  VAR_6 = FUNC_2(VAR_2, VAR_5);

  if (!FUNC_1(VAR_6))
   return -1;

  if (VAR_10 > VAR_9) {
   VAR_10 = VAR_9;





   if (VAR_4 <= VAR_9 + 4)
    VAR_10 -= 4;
  }

  VAR_6->data = VAR_3;
  VAR_3 += VAR_10;
  VAR_4 -= VAR_10;

  if (VAR_4 > 0)
   VAR_10 |= VAR_1;


  if (!VAR_8)
   VAR_10 |= VAR_0;

  VAR_6->ctrl = VAR_10;
  VAR_8++;
 }

 return VAR_8;
}
