
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
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 unsigned long VAR_3 ;
 unsigned int FUNC_1 (struct lola*,int ,int ) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct lola *VAR_4,
         struct lola_stream *VAR_5,
         bool VAR_6)
{
 unsigned int VAR_7 = VAR_6 ? VAR_1 : 0;
 unsigned long VAR_8 = VAR_3 + FUNC_2(200);
 while (FUNC_4(VAR_3, VAR_8)) {
  unsigned int VAR_9 = FUNC_1(VAR_4, VAR_5->dsd, VAR_2);
  if ((VAR_9 & VAR_1) == VAR_7)
   return 0;
  FUNC_3(1);
 }
 FUNC_0(VAR_4->card->dev, "FIFO not ready (stream %d)\n", VAR_5->dsd);
 return -VAR_0;
}
