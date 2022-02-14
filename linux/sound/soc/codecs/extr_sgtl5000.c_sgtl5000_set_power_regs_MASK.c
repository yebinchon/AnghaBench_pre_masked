
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_component {int dev; } ;
struct sgtl5000_priv {size_t num_supplies; TYPE_1__* supplies; } ;
struct TYPE_2__ {int consumer; } ;


 size_t FUNC_0 (int*) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 struct sgtl5000_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;
 int* VAR_35 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_36)
{
 int VAR_37;
 int VAR_38;
 int VAR_39;
 u16 VAR_40;
 u16 VAR_41;
 int VAR_42;
 int VAR_43;
 int VAR_44;
 int VAR_45;
 size_t VAR_46;
 struct sgtl5000_priv *VAR_47 = FUNC_3(VAR_36);

 VAR_38 = FUNC_2(VAR_47->supplies[VAR_32].consumer);
 VAR_39 = FUNC_2(VAR_47->supplies[VAR_34].consumer);
 VAR_37 = (VAR_47->num_supplies > VAR_33)
  ? FUNC_2(VAR_47->supplies[VAR_33].consumer)
  : VAR_1;

 VAR_38 = VAR_38 / 1000;
 VAR_39 = VAR_39 / 1000;
 VAR_37 = VAR_37 / 1000;

 if (VAR_38 <= 0 || VAR_39 <= 0 || VAR_37 < 0) {
  FUNC_1(VAR_36->dev, "regulator voltage not set correctly\n");

  return -VAR_0;
 }


 if (VAR_38 > 3600 || VAR_39 > 3600 || VAR_37 > 1980) {
  FUNC_1(VAR_36->dev,
   "exceed max voltage vdda %dmV vddio %dmV vddd %dmV\n",
   VAR_38, VAR_39, VAR_37);

  return -VAR_0;
 }


 VAR_40 = FUNC_4(VAR_36, VAR_7);
 VAR_40 |= VAR_13 |
   VAR_2 |
   VAR_27;
 VAR_41 = FUNC_4(VAR_36, VAR_11);

 if (VAR_39 < 3100 && VAR_38 < 3100) {

  FUNC_5(VAR_36, VAR_8,
     VAR_14,
     VAR_14);

  VAR_40 |= VAR_29;
 } else {
  VAR_40 &= ~VAR_29;




  if (VAR_39 == VAR_38) {
   VAR_41 |= VAR_28;
   VAR_41 |= VAR_31 <<
        VAR_30;
  }
 }

 FUNC_6(VAR_36, VAR_11, VAR_41);

 FUNC_6(VAR_36, VAR_7, VAR_40);





 VAR_42 = VAR_38 / 2;
 if (VAR_42 <= VAR_3)
  VAR_42 = 0;
 else if (VAR_42 >= VAR_3 + VAR_6 *
   (VAR_4 >> VAR_5))
  VAR_42 = VAR_4 >> VAR_5;
 else
  VAR_42 = (VAR_42 - VAR_3) / VAR_6;

 FUNC_5(VAR_36, VAR_12,
   VAR_4, VAR_42 << VAR_5);


 VAR_43 = VAR_39 / 2;
 if (VAR_43 <= VAR_18)
  VAR_43 = 0;
 else if (VAR_43 >= VAR_18 +
  VAR_22 * VAR_20)
  VAR_43 = VAR_20;
 else
  VAR_43 = (VAR_43 - VAR_18) /
      VAR_22;

 FUNC_5(VAR_36, VAR_9,
   VAR_16 |
   VAR_19,
   VAR_43 << VAR_21 |
   VAR_15 <<
    VAR_17);
 VAR_44 = VAR_43 ? (VAR_42 * 100) / VAR_43 : 0;
 VAR_45 = 0;
 for (VAR_46 = 0; VAR_46 < FUNC_0(VAR_35); VAR_46++) {
  if (VAR_44 >= VAR_35[VAR_46])
   VAR_45 = VAR_46;
  else
   break;
 }

 FUNC_5(VAR_36, VAR_10,
  VAR_25 |
  VAR_23,
  VAR_45 << VAR_26 |
  VAR_45 << VAR_24);

 return 0;
}
