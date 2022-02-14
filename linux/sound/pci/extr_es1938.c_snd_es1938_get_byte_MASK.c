
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1938 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct es1938*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,unsigned char) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct es1938 *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6;
 for (VAR_5 = VAR_1; VAR_5; VAR_5--)
  if ((VAR_6 = FUNC_2(FUNC_0(VAR_4, VAR_3))) & 0x80)
   return FUNC_2(FUNC_0(VAR_4, VAR_2));
 FUNC_1(VAR_4->card->dev, "get_byte timeout: status 0x02%x\n", VAR_6);
 return -VAR_0;
}
