
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {scalar_t__ prev_hw_offset; } ;


 int FUNC_0 (struct snd_rme9652*,int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct snd_rme9652 *VAR_0)
{
 int VAR_1;







 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  FUNC_0(VAR_0, VAR_1 * 4, 0);
  FUNC_1(10);
 }
 VAR_0->prev_hw_offset = 0;
}
