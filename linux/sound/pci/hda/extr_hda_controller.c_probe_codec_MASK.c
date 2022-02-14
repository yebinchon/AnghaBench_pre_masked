
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_bus {int cmd_mutex; } ;
struct azx {int probing; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hdac_bus* FUNC_0 (struct azx*) ;
 int FUNC_1 (struct hdac_bus*,int,unsigned int*) ;
 int FUNC_2 (struct hdac_bus*,unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct azx *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = (VAR_5 << 28) | (VAR_0 << 20) |
  (VAR_2 << 8) | VAR_1;
 struct hdac_bus *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;
 unsigned int VAR_9 = -1;

 FUNC_4(&VAR_7->cmd_mutex);
 VAR_4->probing = 1;
 FUNC_2(VAR_7, VAR_6);
 VAR_8 = FUNC_1(VAR_7, VAR_5, &VAR_9);
 VAR_4->probing = 0;
 FUNC_5(&VAR_7->cmd_mutex);
 if (VAR_8 < 0 || VAR_9 == -1)
  return -VAR_3;
 FUNC_3(VAR_4->card->dev, "codec #%d probed OK\n", VAR_5);
 return 0;
}
