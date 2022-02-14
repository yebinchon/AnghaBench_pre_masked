
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int emu_lock; scalar_t__ port; } ;
struct firmware {int size; int* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_emu10k1 *VAR_2,
         const struct firmware *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;
 int VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;

 if (!VAR_3)
  return -VAR_1;







 FUNC_2(&VAR_2->emu_lock, VAR_9);
 FUNC_1(0x00, VAR_2->port + VAR_0);
 VAR_8 = FUNC_0(VAR_2->port + VAR_0);
 FUNC_4(100);
 FUNC_1(0x80, VAR_2->port + VAR_0);
 VAR_8 = FUNC_0(VAR_2->port + VAR_0);
 FUNC_4(100);
 for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
  VAR_7 = VAR_3->data[VAR_4];
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   VAR_6 = 0x80;
   if (VAR_7 & 0x1)
    VAR_6 = VAR_6 | 0x20;
   VAR_7 = VAR_7 >> 1;
   FUNC_1(VAR_6, VAR_2->port + VAR_0);
   VAR_8 = FUNC_0(VAR_2->port + VAR_0);
   FUNC_1(VAR_6 | 0x40, VAR_2->port + VAR_0);
   VAR_8 = FUNC_0(VAR_2->port + VAR_0);
  }
 }

 FUNC_1(0x10, VAR_2->port + VAR_0);
 VAR_8 = FUNC_0(VAR_2->port + VAR_0);
 FUNC_3(&VAR_2->emu_lock, VAR_9);

 return 0;
}
