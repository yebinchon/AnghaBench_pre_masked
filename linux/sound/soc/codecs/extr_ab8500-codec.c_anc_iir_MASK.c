
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_7, unsigned int VAR_8,
  unsigned int VAR_9, unsigned int VAR_10)
{
 if (VAR_9 == 0) {
  if (VAR_8 == 0) {
   FUNC_1(VAR_7, VAR_0,
     FUNC_0(VAR_1),
     FUNC_0(VAR_1));
   FUNC_3(VAR_6, VAR_6*2);
   FUNC_1(VAR_7, VAR_0,
     FUNC_0(VAR_1), 0);
   FUNC_3(VAR_6, VAR_6*2);
  } else {
   FUNC_1(VAR_7, VAR_0,
     FUNC_0(VAR_2),
     FUNC_0(VAR_2));
  }
 } else if (VAR_9 > 3) {
  FUNC_2(VAR_7, VAR_3, 0);
  FUNC_2(VAR_7, VAR_4, VAR_10 >> 16 & 0xff);
 }

 FUNC_2(VAR_7, VAR_3, VAR_10 >> 8 & 0xff);
 FUNC_2(VAR_7, VAR_4, VAR_10 & 0xff);

 if (VAR_9 == VAR_5 - 1 && VAR_8 == 1)
  FUNC_1(VAR_7, VAR_0,
   FUNC_0(VAR_2), 0);
}
