
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct madera_priv {struct madera* madera; } ;
struct madera_codec_pdata {int ** inmode; } ;
struct TYPE_2__ {struct madera_codec_pdata codec; } ;
struct madera {int dev; TYPE_1__ pdata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int *,int,int) ;

__attribute__((used)) static void FUNC_3(struct madera_priv *VAR_2)
{
 struct madera *VAR_3 = VAR_2->madera;
 struct madera_codec_pdata *VAR_4 = &VAR_3->pdata.codec;
 u32 VAR_5[VAR_0 * VAR_1];
 int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_1(FUNC_0(*VAR_4->inmode) != VAR_0);
 FUNC_1(FUNC_0(VAR_4->inmode[0]) != VAR_1);

 VAR_6 = FUNC_2(VAR_3->dev, "cirrus,inmode",
       VAR_5, FUNC_0(VAR_5),
       VAR_1);
 if (VAR_6 < 0)
  return;

 VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  VAR_4->inmode[VAR_8][VAR_9] = VAR_5[VAR_7];

  if (++VAR_9 == VAR_1) {
   VAR_9 = 0;
   ++VAR_8;
  }
 }
}
