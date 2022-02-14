
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_compr_buf {int error; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wm_adsp_compr_buf*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct wm_adsp_compr_buf*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct wm_adsp_compr_buf *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, FUNC_0(VAR_1), &VAR_2->error);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2, "Failed to check buffer error: %d\n", VAR_3);
  return VAR_3;
 }
 if (VAR_2->error != 0) {
  FUNC_1(VAR_2, "Buffer error occurred: %d\n", VAR_2->error);
  return -VAR_0;
 }

 return 0;
}
