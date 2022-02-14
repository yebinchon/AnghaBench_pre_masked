
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
struct seq_file {int dummy; } ;
struct sbitmap {int map_nr; TYPE_1__* map; } ;
struct TYPE_2__ {int depth; int word; } ;


 int FUNC_0 (unsigned int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,unsigned int,unsigned long) ;
 unsigned int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (struct seq_file*,char) ;

void FUNC_5(struct sbitmap *VAR_0, struct seq_file *VAR_1)
{
 u8 VAR_2 = 0;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->map_nr; VAR_5++) {
  unsigned long VAR_6 = FUNC_1(VAR_0->map[VAR_5].word);
  unsigned int VAR_7 = FUNC_1(VAR_0->map[VAR_5].depth);

  while (VAR_7 > 0) {
   unsigned int VAR_8 = FUNC_3(8 - VAR_3, VAR_7);

   VAR_2 |= (VAR_6 & (FUNC_0(VAR_8) - 1)) << VAR_3;
   VAR_3 += VAR_8;
   if (VAR_3 == 8) {
    FUNC_2(VAR_1, VAR_4, VAR_2);
    VAR_2 = 0;
    VAR_3 = 0;
    VAR_4++;
   }
   VAR_6 >>= VAR_8;
   VAR_7 -= VAR_8;
  }
 }
 if (VAR_3) {
  FUNC_2(VAR_1, VAR_4, VAR_2);
  VAR_4++;
 }
 if (VAR_4)
  FUNC_4(VAR_1, '\n');
}
