
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_i2s {unsigned int (* tx_fn ) (struct xtfpga_i2s*,int ,unsigned int) ;int tx_ptr; int tx_substream; } ;
struct snd_pcm_substream {int runtime; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 struct snd_pcm_substream* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct snd_pcm_substream*) ;
 unsigned int FUNC_6 (struct xtfpga_i2s*,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_7(struct xtfpga_i2s *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 bool VAR_2;

 FUNC_3();
 VAR_1 = FUNC_2(VAR_0->tx_substream);
 VAR_2 = VAR_1 && FUNC_5(VAR_1);
 if (VAR_2) {
  unsigned VAR_3 = FUNC_0(VAR_0->tx_ptr);
  unsigned VAR_4 = VAR_0->tx_fn(VAR_0, VAR_1->runtime,
       VAR_3);

  FUNC_1(&VAR_0->tx_ptr, VAR_3, VAR_4);
 }
 FUNC_4();

 return VAR_2;
}
