
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct snd_kcontrol {size_t private_value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (size_t,size_t,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
     u16 *VAR_3, u32 VAR_4) {
 u32 VAR_5 = VAR_2->private_value;
 u16 VAR_6 = 0;
 u32 VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_0(
    VAR_5, VAR_7, &VAR_3[VAR_7]);
  if (VAR_6 != 0)
   break;
 }

 if (VAR_6 && (VAR_6 != VAR_1))
  return -VAR_0;

 return VAR_7;
}
