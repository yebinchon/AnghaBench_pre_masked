
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus_ops {int dummy; } ;
struct hdac_bus {int irq; int hlink_list; int lock; int cmd_mutex; int reg_lock; int unsol_work; int codec_list; int stream_list; int dma_type; struct hdac_bus_ops const* ops; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct hdac_bus_ops const VAR_1 ;
 int FUNC_2 (struct hdac_bus*,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hdac_bus *VAR_3, struct device *VAR_4,
        const struct hdac_bus_ops *VAR_5)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->dev = VAR_4;
 if (VAR_5)
  VAR_3->ops = VAR_5;
 else
  VAR_3->ops = &VAR_1;
 VAR_3->dma_type = VAR_0;
 FUNC_0(&VAR_3->stream_list);
 FUNC_0(&VAR_3->codec_list);
 FUNC_1(&VAR_3->unsol_work, VAR_2);
 FUNC_4(&VAR_3->reg_lock);
 FUNC_3(&VAR_3->cmd_mutex);
 FUNC_3(&VAR_3->lock);
 FUNC_0(&VAR_3->hlink_list);
 VAR_3->irq = -1;
 return 0;
}
