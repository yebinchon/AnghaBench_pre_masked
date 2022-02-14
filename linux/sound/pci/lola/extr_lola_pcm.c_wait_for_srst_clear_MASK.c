
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola_stream {int dsd; } ;
struct lola {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 unsigned long VAR_2 ;
 unsigned int FUNC_1 (struct lola*,int ,int ) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct lola *VAR_3, struct lola_stream *VAR_4)
{
 unsigned long VAR_5 = VAR_2 + FUNC_2(200);
 while (FUNC_4(VAR_2, VAR_5)) {
  unsigned int VAR_6;
  VAR_6 = FUNC_1(VAR_3, VAR_4->dsd, VAR_0);
  if (!(VAR_6 & VAR_1))
   return;
  FUNC_3(1);
 }
 FUNC_0(VAR_3->card->dev, "SRST not clear (stream %d)\n", VAR_4->dsd);
}
