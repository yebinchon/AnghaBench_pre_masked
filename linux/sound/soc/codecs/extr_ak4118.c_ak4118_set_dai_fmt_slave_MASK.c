
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4118_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;



__attribute__((used)) static int FUNC_0(struct ak4118_priv *VAR_5,
        unsigned int VAR_6)
{
 int VAR_7;

 switch (VAR_6 & VAR_4) {
 case 129:
  VAR_7 = VAR_0 | VAR_1 |
        VAR_2;
  break;
 case 128:
  VAR_7 = VAR_1 | VAR_2;
  break;
 default:
  return -VAR_3;
 }

 return VAR_7;
}
