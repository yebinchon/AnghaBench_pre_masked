
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int chip_ver; int chip_rev; int * chip; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct ar8xxx_priv *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if(VAR_7)
  return VAR_7;

 switch (VAR_6->chip_ver) {
 case 132:
  VAR_6->chip = &VAR_1;
  break;
 case 131:
  VAR_6->chip = &VAR_2;
  break;
 case 130:
  VAR_6->chip = &VAR_3;
  break;
 case 129:
  VAR_6->chip = &VAR_4;
  break;
 case 128:
  VAR_6->chip = &VAR_5;
  break;
 default:
  FUNC_1("ar8216: Unknown Atheros device [ver=%d, rev=%d]\n",
         VAR_6->chip_ver, VAR_6->chip_rev);

  return -VAR_0;
 }

 return 0;
}
