
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__* id_entry; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_7__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int * FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,int,int ) ;
 int * FUNC_7 (struct platform_device*,int ) ;
 int VAR_6 ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct of_device_id* FUNC_9 (int ,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 const struct of_device_id *VAR_10 =
   FUNC_9(VAR_6, &VAR_9->dev);

 VAR_3 = FUNC_7(VAR_9, 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_5(&VAR_9->dev, "audmux");
 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_9->dev, "cannot get clock: %ld\n",
    FUNC_1(VAR_4));
  VAR_4 = ((void*)0);
 }

 if (VAR_10)
  VAR_9->id_entry = VAR_10->data;
 VAR_5 = VAR_9->id_entry->driver_data;

 switch (VAR_5) {
 case 128:
  FUNC_2();
  VAR_7 = 14;
  break;
 case 129:
  VAR_7 = 6;
  break;
 default:
  FUNC_4(&VAR_9->dev, "unsupported version!\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(&VAR_9->dev, sizeof(u32) * VAR_7, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_10)
  FUNC_8(VAR_9, VAR_9->dev.of_node);

 return 0;
}
