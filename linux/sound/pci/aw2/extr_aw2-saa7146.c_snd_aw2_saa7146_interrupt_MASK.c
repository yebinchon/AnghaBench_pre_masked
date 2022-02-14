
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_aw2_saa7146 {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int p_callback_param; int (* p_it_callback ) (int ) ;} ;
struct TYPE_3__ {int p_callback_param; int (* p_it_callback ) (int ) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

irqreturn_t FUNC_5(int VAR_11, void *VAR_12)
{
 unsigned int VAR_13;
 unsigned int VAR_14;
 struct snd_aw2_saa7146 *VAR_15 = VAR_12;

 VAR_13 = FUNC_0(VAR_8);
 if (!VAR_13)
  return VAR_7;

 FUNC_1(VAR_13, VAR_8);

 if (VAR_13 & (VAR_5 | VAR_4)) {
  VAR_14 = FUNC_0(VAR_3);
  FUNC_1(0x100, VAR_3);
 }

 if (VAR_13 & VAR_1) {
  if (VAR_10[1].p_it_callback != ((void*)0)) {
   VAR_10[1].
       p_it_callback(VAR_10[1].
       p_callback_param);
  }
 }
 if (VAR_13 & VAR_2) {
  if (VAR_10[0].p_it_callback != ((void*)0)) {
   VAR_10[0].
       p_it_callback(VAR_10[0].
       p_callback_param);
  }

 }
 if (VAR_13 & VAR_0) {
  if (VAR_9[0].p_it_callback != ((void*)0)) {
   VAR_9[0].
       p_it_callback(VAR_9[0].
       p_callback_param);
  }
 }
 return VAR_6;
}
