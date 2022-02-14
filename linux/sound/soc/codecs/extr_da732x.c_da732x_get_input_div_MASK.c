
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


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
 int FUNC_0 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct snd_soc_component *VAR_14, int VAR_15)
{
 int VAR_16;
 int VAR_17;

 if (VAR_15 < VAR_0) {
  VAR_16 = VAR_4;
  VAR_17 = VAR_8;
 } else if ((VAR_15 >= VAR_0) &&
     (VAR_15 < VAR_1)) {
  VAR_16 = VAR_5;
  VAR_17 = VAR_9;
 } else if ((VAR_15 >= VAR_1) &&
     (VAR_15 < VAR_2)) {
  VAR_16 = VAR_6;
  VAR_17 = VAR_10;
 } else if ((VAR_15 >= VAR_2) &&
     (VAR_15 <= VAR_3)) {
  VAR_16 = VAR_7;
  VAR_17 = VAR_11;
 } else {
  return -VAR_13;
 }

 FUNC_0(VAR_14, VAR_12, VAR_16);

 return VAR_17;
}
