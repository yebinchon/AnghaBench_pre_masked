
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jackpoll_work; } ;
struct hdac_hda_priv {TYPE_1__ codec; } ;
struct hdac_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct hdac_hda_priv* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hdac_device *VAR_0)
{
 struct hdac_hda_priv *VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dev);
 FUNC_0(&VAR_1->codec.jackpoll_work);
 return 0;
}
