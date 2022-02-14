
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct cpcap_audio {int regmap; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cpcap_audio *VAR_4, bool VAR_5)
{
 u16 VAR_6, VAR_7;
 u16 VAR_8 = FUNC_0(VAR_1);
 u16 VAR_9 = FUNC_0(VAR_0);
 int VAR_10;



 if (!VAR_5) {

  VAR_7 = 0;
  VAR_6 = VAR_8;
 } else {

  VAR_7 = VAR_9;
  VAR_6 = 0;
 }

 VAR_10 = FUNC_1(VAR_4->regmap, VAR_2,
     VAR_9, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_4->regmap, VAR_3,
     VAR_8, VAR_6);
 if (VAR_10)
  return VAR_10;

 return 0;
}
