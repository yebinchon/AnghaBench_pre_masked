
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; int dev; } ;
struct xen_front_cfg_card {int num_pcm_instances; int pcm_hw; int * pcm_instances; } ;
struct xen_snd_front_info {struct xenbus_device* xb_dev; struct xen_front_cfg_card cfg; } ;
struct xen_front_cfg_pcm_instance {int dummy; } ;
typedef int node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xen_snd_front_info*,int *,int *,int ,int,int*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (int ,int ,char*) ;

int FUNC_6(struct xen_snd_front_info *VAR_5,
      int *VAR_6)
{
 struct xenbus_device *VAR_7 = VAR_5->xb_dev;
 struct xen_front_cfg_card *VAR_8 = &VAR_5->cfg;
 int VAR_9, VAR_10, VAR_11;
 char VAR_12[3];

 *VAR_6 = 0;
 VAR_10 = 0;
 do {
  FUNC_4(VAR_12, sizeof(VAR_12), "%d", VAR_10);
  if (!FUNC_5(VAR_4, VAR_7->nodename, VAR_12))
   break;

  VAR_10++;
 } while (VAR_10 < VAR_3);

 if (!VAR_10) {
  FUNC_2(&VAR_7->dev,
    "No devices configured for sound card at %s\n",
    VAR_7->nodename);
  return -VAR_0;
 }


 FUNC_1(VAR_7->nodename, ((void*)0), &VAR_8->pcm_hw);

 VAR_8->pcm_instances =
   FUNC_3(&VAR_5->xb_dev->dev, VAR_10,
         sizeof(struct xen_front_cfg_pcm_instance),
         VAR_2);
 if (!VAR_8->pcm_instances)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_9 = FUNC_0(VAR_5, &VAR_8->pcm_instances[VAR_11],
     &VAR_8->pcm_hw, VAR_7->nodename, VAR_11, VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
 }
 VAR_8->num_pcm_instances = VAR_10;
 return 0;
}
