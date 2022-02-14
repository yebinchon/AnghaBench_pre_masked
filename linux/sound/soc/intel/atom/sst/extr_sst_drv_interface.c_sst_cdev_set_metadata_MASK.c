
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {unsigned int pipe_id; int task_id; } ;
struct snd_compr_metadata {int dummy; } ;
struct intel_sst_drv {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 struct intel_sst_drv* FUNC_1 (struct device*) ;
 struct stream_info* FUNC_2 (struct intel_sst_drv*,unsigned int) ;
 int FUNC_3 (struct intel_sst_drv*,int ,int ,int ,unsigned int,int,struct snd_compr_metadata*,int *,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
  unsigned int VAR_4, struct snd_compr_metadata *VAR_5)
{
 int VAR_6 = 0;
 struct stream_info *VAR_7;
 struct intel_sst_drv *VAR_8 = FUNC_1(VAR_3);

 FUNC_0(VAR_3, "set metadata for stream %d\n", VAR_4);

 VAR_7 = FUNC_2(VAR_8, VAR_4);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_3, "pipe id = %d\n", VAR_7->pipe_id);
 VAR_6 = FUNC_3(VAR_8, VAR_7->task_id, VAR_1,
   VAR_2, VAR_7->pipe_id,
   sizeof(*VAR_5), VAR_5, ((void*)0),
   1, 1, 1, 0);

 return VAR_6;
}
