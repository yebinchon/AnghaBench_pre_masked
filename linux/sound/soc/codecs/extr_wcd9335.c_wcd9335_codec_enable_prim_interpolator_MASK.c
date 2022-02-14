
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct wcd9335_codec {int* prim_int_users; } ;
struct snd_soc_component {int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct wcd9335_codec* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int,int) ;
 int FUNC_3 (size_t,size_t*) ;

__attribute__((used)) static int FUNC_4(
      struct snd_soc_component *VAR_8,
      u16 VAR_9, int VAR_10)
{
 struct wcd9335_codec *VAR_11 = FUNC_0(VAR_8->dev);
 u16 VAR_12 = 0;
 int VAR_13 = FUNC_3(VAR_9, &VAR_12);

 switch (VAR_10) {
 case 128:
  VAR_11->prim_int_users[VAR_12]++;
  if (VAR_11->prim_int_users[VAR_12] == 1) {
   FUNC_1(VAR_8, VAR_13,
     VAR_4,
     VAR_3);
   FUNC_2(VAR_8, VAR_13, VAR_10);
   FUNC_1(VAR_8, VAR_13,
     VAR_2,
     VAR_1);
  }

  if ((VAR_9 != VAR_13) &&
   ((FUNC_0(VAR_8, VAR_13)) &
    VAR_4))
   FUNC_1(VAR_8, VAR_9,
      VAR_4,
      VAR_3);
  break;
 case 129:
  VAR_11->prim_int_users[VAR_12]--;
  if (VAR_11->prim_int_users[VAR_12] == 0) {
   FUNC_1(VAR_8, VAR_13,
     VAR_2,
     VAR_0);
   FUNC_1(VAR_8, VAR_13,
     VAR_7,
     VAR_6);
   FUNC_1(VAR_8, VAR_13,
     VAR_7,
     VAR_5);
   FUNC_2(VAR_8, VAR_13, VAR_10);
  }
  break;
 };

 return 0;
}
