
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_snd_front_info {TYPE_1__* xb_dev; } ;
struct xen_front_cfg_stream {int dummy; } ;
struct xen_front_cfg_pcm_instance {int device_id; void* streams_cap; scalar_t__ num_streams_cap; void* streams_pb; scalar_t__ num_streams_pb; int pcm_hw; int name; } ;
struct snd_pcm_hardware {int dummy; } ;
typedef int node ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int*,int*) ;
 int FUNC_2 (char*,struct snd_pcm_hardware*,int *) ;
 int FUNC_3 (struct xen_snd_front_info*,struct xen_front_cfg_pcm_instance*,char*,int,int*,int*,int*) ;
 void* FUNC_4 (int *,scalar_t__,int,int ) ;
 char* FUNC_5 (int ,char*,char const*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,char*,char*) ;
 char* FUNC_10 (int ,char*,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct xen_snd_front_info *VAR_5,
        struct xen_front_cfg_pcm_instance *VAR_6,
        struct snd_pcm_hardware *VAR_7,
        const char *VAR_8, int VAR_9, int *VAR_10)
{
 char *VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;
 char VAR_20[3];

 VAR_12 = FUNC_5(VAR_1, "%s/%d", VAR_8, VAR_9);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_10(VAR_3, VAR_12, VAR_4, ((void*)0));
 if (!FUNC_0(VAR_11)) {
  FUNC_8(VAR_6->name, VAR_11, sizeof(VAR_6->name));
  FUNC_6(VAR_11);
 }

 VAR_6->device_id = VAR_9;






 FUNC_2(VAR_12, VAR_7, &VAR_6->pcm_hw);


 VAR_15 = 0;
 do {
  FUNC_7(VAR_20, sizeof(VAR_20), "%d", VAR_15);
  if (!FUNC_9(VAR_3, VAR_12, VAR_20))
   break;

  VAR_15++;
 } while (VAR_15 < VAR_2);

 VAR_6->num_streams_pb = 0;
 VAR_6->num_streams_cap = 0;

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_13 = FUNC_1(VAR_12, VAR_14, &VAR_16, &VAR_17);
  if (VAR_13 < 0)
   goto fail;

  VAR_6->num_streams_pb += VAR_16;
  VAR_6->num_streams_cap += VAR_17;
 }

 if (VAR_6->num_streams_pb) {
  VAR_6->streams_pb =
    FUNC_4(&VAR_5->xb_dev->dev,
          VAR_6->num_streams_pb,
          sizeof(struct xen_front_cfg_stream),
          VAR_1);
  if (!VAR_6->streams_pb) {
   VAR_13 = -VAR_0;
   goto fail;
  }
 }

 if (VAR_6->num_streams_cap) {
  VAR_6->streams_cap =
    FUNC_4(&VAR_5->xb_dev->dev,
          VAR_6->num_streams_cap,
          sizeof(struct xen_front_cfg_stream),
          VAR_1);
  if (!VAR_6->streams_cap) {
   VAR_13 = -VAR_0;
   goto fail;
  }
 }

 VAR_18 = 0;
 VAR_19 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_13 = FUNC_3(VAR_5, VAR_6, VAR_12, VAR_14,
     &VAR_18, &VAR_19, VAR_10);
  if (VAR_13 < 0)
   goto fail;
 }
 VAR_13 = 0;

fail:
 FUNC_6(VAR_12);
 return VAR_13;
}
