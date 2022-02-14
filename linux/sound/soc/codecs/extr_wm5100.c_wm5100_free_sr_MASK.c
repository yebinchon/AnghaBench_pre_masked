
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int * sr_ref; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct wm5100_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_3, int VAR_4)
{
 struct wm5100_priv *VAR_5 = FUNC_4(VAR_3);
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  if (VAR_1[VAR_6] == VAR_4)
   break;
 if (VAR_6 == FUNC_0(VAR_1)) {
  FUNC_2(VAR_3->dev, "Unsupported sample rate: %dHz\n", VAR_4);
  return;
 }
 VAR_7 = VAR_1[VAR_6];

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (!VAR_5->sr_ref[VAR_6])
   continue;

  if ((FUNC_5(VAR_3, VAR_2[VAR_6]) &
       VAR_0) == VAR_7)
   break;
 }
 if (VAR_6 < FUNC_0(VAR_2)) {
  VAR_5->sr_ref[VAR_6]--;
  FUNC_1(VAR_3->dev, "Dereference SR %dHz, count now %d\n",
   VAR_4, VAR_5->sr_ref[VAR_6]);
 } else {
  FUNC_3(VAR_3->dev, "Freeing unreferenced sample rate %dHz\n",
    VAR_4);
 }
}
