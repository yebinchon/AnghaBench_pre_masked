
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {int fout; scalar_t__ base; struct madera* madera; } ;
struct madera {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct madera_fll*,char*,unsigned int,int,...) ;
 int FUNC_2 (struct madera_fll*,char*,...) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;
 int FUNC_4 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct madera_fll *VAR_37, int VAR_38)
{
 struct madera *VAR_39 = VAR_37->madera;
 int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47;
 bool VAR_48 = 0;
 unsigned int VAR_49, VAR_50, VAR_51, VAR_52, VAR_53, VAR_54;
 unsigned int VAR_55, VAR_56, VAR_57;

 FUNC_1(VAR_37, "fin=%d, fout=%d\n", VAR_38, VAR_37->fout);

 for (VAR_40 = 0; VAR_40 < 4; VAR_40++)
  if ((VAR_38 / (1 << VAR_40)) <= VAR_26)
   break;

 VAR_41 = VAR_38 / (1 << VAR_40);




 VAR_46 = 0;
 VAR_42 = VAR_37->fout;
 VAR_48 = VAR_42 % VAR_41;

 if (VAR_41 < VAR_25) {
  VAR_43 = 2;
  VAR_55 = VAR_24;
  if (VAR_48)
   VAR_44 = 256;
  else
   VAR_44 = 4;
 } else if (VAR_41 < VAR_28) {
  VAR_43 = 8;
  VAR_55 = VAR_27;
  VAR_44 = 1;
 } else {
  VAR_43 = 8;
  VAR_55 = VAR_21;
  VAR_44 = 1;



  if (VAR_48) {
   VAR_46 = 0x3;
   VAR_42 = VAR_37->fout * 6;
  }
 }

 if (VAR_48) {
  VAR_45 = 0x3;
  VAR_50 = VAR_20;
  VAR_51 = VAR_19;
 } else {
  VAR_45 = 0x0;
  VAR_50 = VAR_23;
  VAR_51 = VAR_22;
 }

 VAR_52 = VAR_42 / VAR_41;

 FUNC_1(VAR_37, "refdiv=%d, fref=%d, frac:%d\n",
         VAR_40, VAR_41, VAR_48);

 while (VAR_52 / VAR_44 < VAR_50) {
  VAR_44 /= 2;
  if (VAR_44 < 1) {
   FUNC_2(VAR_37, "FBDIV (%d) must be >= 1\n", VAR_44);
   return -VAR_0;
  }
 }
 while (VAR_48 && (VAR_52 / VAR_44 > VAR_51)) {
  VAR_44 *= 2;
  if (VAR_44 >= 1024) {
   FUNC_2(VAR_37, "FBDIV (%u) >= 1024\n", VAR_44);
   return -VAR_0;
  }
 }

 FUNC_1(VAR_37, "lockdet=%d, hp=0x%x, fbdiv:%d\n",
         VAR_43, VAR_45, VAR_44);


 VAR_47 = FUNC_0(VAR_42, VAR_44 * VAR_41);
 VAR_57 = VAR_42 / VAR_47;
 VAR_54 = (VAR_41 * VAR_44) / VAR_47;
 VAR_49 = VAR_57 / VAR_54;
 VAR_53 = VAR_57 % VAR_54;

 FUNC_1(VAR_37, "fll_n=%d, gcd=%d, theta=%d, lambda=%d\n",
         VAR_49, VAR_47, VAR_53, VAR_54);


 if (VAR_49 < VAR_50 || VAR_49 > VAR_51) {
  FUNC_2(VAR_37, "N not in valid %s mode range %d-%d: %d\n",
          VAR_48 ? "fractional" : "integer", VAR_50, VAR_51,
          VAR_49);
  return -VAR_0;
 }
 if (VAR_44 < 1 || (VAR_48 && VAR_44 >= 1024) || (!VAR_48 && VAR_44 >= 256)) {
  FUNC_2(VAR_37, "Invalid fbdiv for %s mode (%u)\n",
          VAR_48 ? "fractional" : "integer", VAR_44);
  return -VAR_0;
 }


 FUNC_4(VAR_39->regmap,
       VAR_37->base + VAR_31,
       VAR_49 << VAR_11);
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_32,
      VAR_17,
      VAR_53 << VAR_18);
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_33,
      VAR_7,
      VAR_54 << VAR_8);
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_34,
      VAR_3,
      VAR_44 << VAR_4);
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_35,
      VAR_14,
      VAR_40 << VAR_15);
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_36,
      0xffff,
      VAR_55);
 VAR_56 = VAR_45 << VAR_6;
 VAR_56 |= 1 << VAR_13;
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_29,
      VAR_5 | VAR_12,
      VAR_56);
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_30,
      VAR_9,
      VAR_43 << VAR_10);
 FUNC_3(VAR_39->regmap,
      VAR_37->base + VAR_2,
      VAR_16 |
      VAR_1,
      VAR_46);

 return 0;
}
