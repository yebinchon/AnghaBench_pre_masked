
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1938 {TYPE_1__* card; int mixer_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es1938*,int ) ;
 int FUNC_1 (int ,char*,unsigned char,unsigned char) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct es1938 *VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 unsigned long VAR_5;
 FUNC_3(&VAR_2->mixer_lock, VAR_5);
 FUNC_2(VAR_3, FUNC_0(VAR_2, VAR_0));
 FUNC_2(VAR_4, FUNC_0(VAR_2, VAR_1));
 FUNC_4(&VAR_2->mixer_lock, VAR_5);
 FUNC_1(VAR_2->card->dev, "Mixer reg %02x set to %02x\n", VAR_3, VAR_4);
}
