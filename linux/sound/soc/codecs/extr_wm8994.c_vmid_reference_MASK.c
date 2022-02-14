
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int vmid_refcount; int vmid_mode; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct wm8994_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_13)
{
 struct wm8994_priv *VAR_14 = FUNC_4(VAR_13);

 FUNC_3(VAR_13->dev);

 VAR_14->vmid_refcount++;

 FUNC_1(VAR_13->dev, "Referencing VMID, refcount is now %d\n",
  VAR_14->vmid_refcount);

 if (VAR_14->vmid_refcount == 1) {
  FUNC_5(VAR_13, VAR_0,
        VAR_4 |
        VAR_5, 0);

  FUNC_6(VAR_13);

  switch (VAR_14->vmid_mode) {
  default:
   FUNC_0(((void*)0) == "Invalid VMID mode");

  case 128:

   FUNC_5(VAR_13, VAR_1,
         VAR_3 |
         VAR_9 |
         VAR_7 |
         VAR_8 |
         VAR_10,
         VAR_3 |
         VAR_7 |
         VAR_8 |
         (0x2 << VAR_11));


   FUNC_5(VAR_13, VAR_6,
         VAR_2 |
         VAR_12,
         VAR_2 | 0x2);

   FUNC_2(300);

   FUNC_5(VAR_13, VAR_1,
         VAR_10 |
         VAR_3,
         0);
   break;

  case 129:

   FUNC_5(VAR_13, VAR_1,
         VAR_3 |
         VAR_9 |
         VAR_7 |
         VAR_8 |
         VAR_10,
         VAR_3 |
         VAR_7 |
         VAR_8 |
         (0x2 << VAR_11));


   FUNC_5(VAR_13, VAR_6,
         VAR_2 |
         VAR_12,
         VAR_2 | 0x2);

   FUNC_2(400);

   FUNC_5(VAR_13, VAR_1,
         VAR_10 |
         VAR_3,
         0);
   break;
  }
 }
}
