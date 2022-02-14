
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci_pcm {int fmt; int ch; } ;
struct cmipci {int reg_lock; scalar_t__ can_multi_ch; } ;


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
 int FUNC_0 (struct cmipci*,int ,int ) ;
 int FUNC_1 (struct cmipci*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cmipci *VAR_11, struct cmipci_pcm *VAR_12, int VAR_13)
{
 if (VAR_13 > 2) {
  if (!VAR_11->can_multi_ch || !VAR_12->ch)
   return -VAR_10;
  if (VAR_12->fmt != 0x03)
   return -VAR_10;
 }

 if (VAR_11->can_multi_ch) {
  FUNC_2(&VAR_11->reg_lock);
  if (VAR_13 > 2) {
   FUNC_1(VAR_11, VAR_7, VAR_4);
   FUNC_1(VAR_11, VAR_8, VAR_9);
  } else {
   FUNC_0(VAR_11, VAR_7, VAR_4);
   FUNC_0(VAR_11, VAR_8, VAR_9);
  }
  if (VAR_13 == 8)
   FUNC_1(VAR_11, VAR_6, VAR_3);
  else
   FUNC_0(VAR_11, VAR_6, VAR_3);
  if (VAR_13 == 6) {
   FUNC_1(VAR_11, VAR_5, VAR_1);
   FUNC_1(VAR_11, VAR_7, VAR_2);
  } else {
   FUNC_0(VAR_11, VAR_5, VAR_1);
   FUNC_0(VAR_11, VAR_7, VAR_2);
  }
  if (VAR_13 == 4)
   FUNC_1(VAR_11, VAR_5, VAR_0);
  else
   FUNC_0(VAR_11, VAR_5, VAR_0);
  FUNC_3(&VAR_11->reg_lock);
 }
 return 0;
}
