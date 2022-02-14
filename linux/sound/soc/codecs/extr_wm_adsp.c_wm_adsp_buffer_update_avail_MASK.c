
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wm_adsp_compr_buf {int read_index; int avail; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct wm_adsp_compr_buf*,char*,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct wm_adsp_compr_buf*,int ,int *) ;
 scalar_t__ FUNC_4 (struct wm_adsp_compr_buf*) ;

__attribute__((used)) static int FUNC_5(struct wm_adsp_compr_buf *VAR_1)
{
 u32 VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7;


 if (VAR_1->read_index < 0) {
  VAR_7 = FUNC_3(VAR_1,
    FUNC_0(VAR_2),
    &VAR_2);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5 = FUNC_2(VAR_2, 23);

  if (VAR_5 < 0) {
   FUNC_1(VAR_1, "Avail check on unstarted stream\n");
   return 0;
  }

  VAR_1->read_index = VAR_5;
 }

 VAR_7 = FUNC_3(VAR_1, FUNC_0(VAR_3),
   &VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4 = FUNC_2(VAR_3, 23);

 VAR_6 = VAR_4 - VAR_1->read_index;
 if (VAR_6 < 0)
  VAR_6 += FUNC_4(VAR_1);

 FUNC_1(VAR_1, "readindex=0x%x, writeindex=0x%x, avail=%d\n",
    VAR_1->read_index, VAR_4, VAR_6 * VAR_0);

 VAR_1->avail = VAR_6;

 return 0;
}
