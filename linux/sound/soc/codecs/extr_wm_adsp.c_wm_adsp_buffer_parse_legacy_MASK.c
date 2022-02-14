
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wm_adsp_compr_buf {scalar_t__ host_buf_ptr; int host_buf_mem_type; } ;
struct wm_adsp_alg_region {scalar_t__ base; } ;
struct wm_adsp {TYPE_1__* ops; int fw_id; } ;
typedef int __be32 ;
struct TYPE_2__ {int sys_config_size; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct wm_adsp*,char*) ;
 int FUNC_2 (struct wm_adsp_compr_buf*,char*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int,int) ;
 struct wm_adsp_compr_buf* FUNC_4 (struct wm_adsp*) ;
 int FUNC_5 (struct wm_adsp_compr_buf*) ;
 struct wm_adsp_alg_region* FUNC_6 (struct wm_adsp*,int ,int ) ;
 int FUNC_7 (struct wm_adsp*,int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(struct wm_adsp *VAR_7)
{
 struct wm_adsp_alg_region *VAR_8;
 struct wm_adsp_compr_buf *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_8 = FUNC_6(VAR_7, VAR_4, VAR_7->fw_id);
 if (!VAR_8) {
  FUNC_1(VAR_7, "No algorithm region found\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_7);
 if (!VAR_9)
  return -VAR_3;

 VAR_10 = VAR_7->ops->sys_config_size / sizeof(__be32);

 VAR_11 = VAR_8->base + VAR_10 + FUNC_0(VAR_12);
 VAR_14 = FUNC_7(VAR_7, VAR_4, VAR_11, &VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_12 != VAR_5)
  return -VAR_2;

 VAR_11 = VAR_8->base + VAR_10 + FUNC_0(VAR_6);
 for (VAR_13 = 0; VAR_13 < 5; ++VAR_13) {
  VAR_14 = FUNC_7(VAR_7, VAR_4, VAR_11,
          &VAR_9->host_buf_ptr);
  if (VAR_14 < 0)
   return VAR_14;

  if (VAR_9->host_buf_ptr)
   break;

  FUNC_3(1000, 2000);
 }

 if (!VAR_9->host_buf_ptr)
  return -VAR_1;

 VAR_9->host_buf_mem_type = VAR_4;

 VAR_14 = FUNC_5(VAR_9);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_2(VAR_9, "legacy host_buf_ptr=%x\n", VAR_9->host_buf_ptr);

 return 0;
}
