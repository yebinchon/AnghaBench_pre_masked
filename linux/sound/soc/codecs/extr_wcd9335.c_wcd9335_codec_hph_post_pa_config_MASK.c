
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wcd9335_codec {int hph_l_gain; int hph_r_gain; int component; scalar_t__* comp_enabled; } ;




 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;


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
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct wcd9335_codec *VAR_13,
          int VAR_14, int VAR_15)
{
 u8 VAR_16 = 0;

 switch (VAR_15) {
 case 129:
  switch (VAR_14) {
  case 131:
   VAR_16 = 0x3;
   break;
  case 130:
   VAR_16 = 0x1;
   break;
  }
  break;
 case 128:
  VAR_16 = 0x6;
  break;
 }

 if (VAR_16)
  FUNC_2(VAR_13->component,
     VAR_9,
     VAR_11,
     VAR_16 << 1);
 if (FUNC_1(VAR_15)) {
  if (VAR_13->comp_enabled[VAR_0] ||
      VAR_13->comp_enabled[VAR_1]) {

   FUNC_2(VAR_13->component,
     VAR_8,
     VAR_7,
     VAR_6);
   FUNC_2(VAR_13->component,
     VAR_12,
     VAR_7,
     VAR_6);
   FUNC_2(VAR_13->component,
     VAR_2,
     VAR_5,
     VAR_4);
  }
  FUNC_2(VAR_13->component,
      VAR_8,
      VAR_10,
      VAR_13->hph_l_gain);
  FUNC_2(VAR_13->component,
      VAR_12,
      VAR_10,
      VAR_13->hph_r_gain);
 }

 if (FUNC_0(VAR_15))
  FUNC_2(VAR_13->component,
    VAR_2,
    VAR_5,
    VAR_3);
}
