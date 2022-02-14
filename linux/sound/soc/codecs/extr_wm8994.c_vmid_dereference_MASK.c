
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lineout2_se; scalar_t__ lineout1_se; } ;
struct wm8994_priv {scalar_t__ vmid_refcount; TYPE_1__ hubs; } ;
struct snd_soc_component {int dev; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_16)
{
 struct wm8994_priv *VAR_17 = FUNC_3(VAR_16);

 VAR_17->vmid_refcount--;

 FUNC_0(VAR_16->dev, "Dereferencing VMID, refcount is now %d\n",
  VAR_17->vmid_refcount);

 if (VAR_17->vmid_refcount == 0) {
  if (VAR_17->hubs.lineout1_se)
   FUNC_4(VAR_16, VAR_10,
         VAR_3 |
         VAR_4,
         VAR_3 |
         VAR_4);

  if (VAR_17->hubs.lineout2_se)
   FUNC_4(VAR_16, VAR_10,
         VAR_6 |
         VAR_7,
         VAR_6 |
         VAR_7);


  FUNC_4(VAR_16, VAR_1,
        VAR_2 |
        VAR_13,
        VAR_2 |
        VAR_13);

  FUNC_4(VAR_16, VAR_9,
        VAR_15, 0);

  FUNC_1(400);


  FUNC_4(VAR_16, VAR_0,
        VAR_5 |
        VAR_8,
        VAR_5 |
        VAR_8);

  FUNC_4(VAR_16, VAR_10,
        VAR_3 |
        VAR_4 |
        VAR_6 |
        VAR_7, 0);


  FUNC_4(VAR_16, VAR_1,
        VAR_2 |
        VAR_11 |
        VAR_12 |
        VAR_14, 0);

  FUNC_4(VAR_16, VAR_9,
        VAR_15, 0);
 }

 FUNC_2(VAR_16->dev);
}
