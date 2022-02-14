
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int lock; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int substream; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rsnd_dai_stream*) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int FUNC_2 (struct rsnd_dai_stream*) ;
 int FUNC_3 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_4 (struct rsnd_mod*) ;
 struct device* FUNC_5 (struct rsnd_priv*) ;
 int FUNC_6 (struct rsnd_mod*) ;
 int FUNC_7 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_8 (struct rsnd_mod*) ;
 int FUNC_9 (struct rsnd_mod*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct rsnd_mod *VAR_3,
     struct rsnd_dai_stream *VAR_4)
{
 struct rsnd_priv *VAR_5 = FUNC_4(VAR_3);
 struct device *VAR_6 = FUNC_5(VAR_5);
 int VAR_7 = FUNC_6(VAR_3);
 u32 VAR_8;
 bool VAR_9 = 0;
 bool VAR_10 = 0;

 FUNC_11(&VAR_5->lock);


 if (!FUNC_2(VAR_4))
  goto rsnd_ssi_interrupt_out;

 VAR_8 = FUNC_9(VAR_3);


 if (!VAR_7 && (VAR_8 & VAR_0))
  VAR_9 = FUNC_7(VAR_3, VAR_4);


 if (VAR_7 && (VAR_8 & (VAR_2 | VAR_1))) {
  FUNC_1(VAR_6, "%s err status : 0x%08x\n",
   FUNC_3(VAR_3), VAR_8);

  VAR_10 = 1;
 }

 FUNC_8(VAR_3);
rsnd_ssi_interrupt_out:
 FUNC_12(&VAR_5->lock);

 if (VAR_9)
  FUNC_0(VAR_4);

 if (VAR_10)
  FUNC_10(VAR_4->substream);

}
