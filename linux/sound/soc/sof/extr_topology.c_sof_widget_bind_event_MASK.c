
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sof_ipc_comp {int type; } ;
struct snd_sof_widget {TYPE_1__* widget; struct sof_ipc_comp* private; int id; } ;
struct snd_sof_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (int ,char*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct snd_sof_dev *VAR_4,
     struct snd_sof_widget *VAR_5,
     u16 VAR_6)
{
 struct sof_ipc_comp *VAR_7;


 switch (VAR_6) {
 case 128:

  if (VAR_5->id != VAR_2)
   break;

  VAR_7 = VAR_5->private;
  if (VAR_7 && VAR_7->type != VAR_1)
   break;


  return FUNC_2(VAR_5->widget,
            VAR_3,
            FUNC_0(VAR_3),
            VAR_6);
 default:
  break;
 }

 FUNC_1(VAR_4->dev,
  "error: invalid event type %d for widget %s\n",
  VAR_6, VAR_5->widget->name);
 return -VAR_0;
}
