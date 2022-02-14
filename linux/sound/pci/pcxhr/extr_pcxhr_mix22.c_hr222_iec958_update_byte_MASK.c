
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcxhr {unsigned char* aes_bits; int mgr; } ;


 int FUNC_0 (int ,int ,unsigned char) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct snd_pcxhr *VAR_3,
        int VAR_4, unsigned char VAR_5)
{
 int VAR_6;
 unsigned char VAR_7 = VAR_5;
 unsigned char VAR_8 = VAR_3->aes_bits[VAR_4];
 unsigned char VAR_9 = (unsigned char)(VAR_4 * 8);
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if ((VAR_8 & 0x01) != (VAR_7 & 0x01)) {

   FUNC_0(VAR_3->mgr, VAR_2, VAR_9);

   FUNC_0(VAR_3->mgr, VAR_1, VAR_7&0x01 ?
        VAR_0 : 0);
  }
  VAR_9++;
  VAR_8 >>= 1;
  VAR_7 >>= 1;
 }
 VAR_3->aes_bits[VAR_4] = VAR_5;
 return 0;
}
