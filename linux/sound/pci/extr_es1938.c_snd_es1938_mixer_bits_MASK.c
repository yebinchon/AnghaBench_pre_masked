
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1938 {int mixer_lock; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es1938*,int ) ;
 int FUNC_1 (int ,char*,unsigned char,unsigned char,unsigned char) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct es1938 *VAR_2, unsigned char VAR_3,
     unsigned char VAR_4, unsigned char VAR_5)
{
 unsigned long VAR_6;
 unsigned char VAR_7, VAR_8, VAR_9;
 FUNC_4(&VAR_2->mixer_lock, VAR_6);
 FUNC_3(VAR_3, FUNC_0(VAR_2, VAR_0));
 VAR_7 = FUNC_2(FUNC_0(VAR_2, VAR_1));
 VAR_9 = VAR_7 & VAR_4;
 if (VAR_5 != VAR_9) {
  VAR_8 = (VAR_7 & ~VAR_4) | (VAR_5 & VAR_4);
  FUNC_3(VAR_8, FUNC_0(VAR_2, VAR_1));
  FUNC_1(VAR_2->card->dev,
   "Mixer reg %02x was %02x, set to %02x\n",
      VAR_3, VAR_7, VAR_8);
 }
 FUNC_5(&VAR_2->mixer_lock, VAR_6);
 return VAR_9;
}
