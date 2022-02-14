
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola {TYPE_1__* pcm; int reg_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int num_streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 unsigned char VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_1 (struct lola*,int,int ) ;
 int FUNC_2 (struct lola*,int,int ,unsigned int) ;
 int FUNC_3 (struct lola*,TYPE_1__*,unsigned int) ;
 unsigned char FUNC_4 (struct lola*,int ,int ) ;
 unsigned int FUNC_5 (struct lola*,int ,int ) ;
 int FUNC_6 (struct lola*) ;
 int FUNC_7 (struct lola*,int ,int ,unsigned char) ;
 int FUNC_8 (struct lola*,int ,int ,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_18, void *VAR_19)
{
 struct lola *VAR_20 = VAR_19;
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0;
 int VAR_26;

 VAR_21 = VAR_22 = VAR_23 = VAR_24 = 0;
 FUNC_9(&VAR_20->reg_lock);
 for (;;) {
  unsigned int VAR_27, VAR_28, VAR_29;
  unsigned int VAR_30;

  VAR_27 = FUNC_5(VAR_20, VAR_1, VAR_5);
  if (!VAR_27 || VAR_27 == -1)
   break;

  VAR_28 = FUNC_5(VAR_20, VAR_1, VAR_4);
  VAR_29 = FUNC_5(VAR_20, VAR_1, VAR_6);


  for (VAR_26 = 0; VAR_28 && VAR_26 < VAR_20->pcm[VAR_2].num_streams; VAR_26++) {
   if (!(VAR_28 & (1 << VAR_26)))
    continue;
   VAR_28 &= ~(1 << VAR_26);
   VAR_30 = FUNC_1(VAR_20, VAR_26, VAR_17);
   if (VAR_30 & VAR_12)
    VAR_23 |= (1 << VAR_26);
   if (VAR_30 & VAR_11)
    VAR_21 |= (1 << VAR_26);

   FUNC_2(VAR_20, VAR_26, VAR_17, VAR_30);
  }


  for (VAR_26 = 0; VAR_29 && VAR_26 < VAR_20->pcm[VAR_15].num_streams; VAR_26++) {
   if (!(VAR_29 & (1 << VAR_26)))
    continue;
   VAR_29 &= ~(1 << VAR_26);
   VAR_30 = FUNC_1(VAR_20, VAR_26 + VAR_14, VAR_17);
   if (VAR_30 & VAR_12)
    VAR_24 |= (1 << VAR_26);
   if (VAR_30 & VAR_11)
    VAR_22 |= (1 << VAR_26);
   FUNC_2(VAR_20, VAR_26 + VAR_14, VAR_17, VAR_30);
  }

  if (VAR_27 & VAR_8) {
   unsigned char VAR_31;
   VAR_31 = FUNC_4(VAR_20, VAR_0, VAR_16);
   VAR_31 &= VAR_13;
   if (VAR_31)
    FUNC_7(VAR_20, VAR_0, VAR_16, VAR_31);
   VAR_31 = FUNC_4(VAR_20, VAR_0, VAR_3);
   VAR_31 &= VAR_7;
   if (VAR_31)
    FUNC_7(VAR_20, VAR_0, VAR_3, VAR_31);

   FUNC_6(VAR_20);
  }

  if (VAR_27 & (VAR_9 | VAR_10)) {

   FUNC_8(VAR_20, VAR_1, VAR_5,
        (VAR_27 & (VAR_9 | VAR_10)));
  }
  VAR_25 = 1;
 }
 FUNC_10(&VAR_20->reg_lock);

 FUNC_3(VAR_20, &VAR_20->pcm[VAR_2], VAR_21);
 FUNC_3(VAR_20, &VAR_20->pcm[VAR_15], VAR_22);

 return FUNC_0(VAR_25);
}
