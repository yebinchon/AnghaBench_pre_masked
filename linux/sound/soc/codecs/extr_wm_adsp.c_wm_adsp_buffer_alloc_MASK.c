
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_compr_buf {int list; struct wm_adsp* dsp; } ;
struct wm_adsp {int buffer_list; } ;


 int VAR_0 ;
 struct wm_adsp_compr_buf* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct wm_adsp_compr_buf*) ;

__attribute__((used)) static struct wm_adsp_compr_buf *FUNC_3(struct wm_adsp *VAR_1)
{
 struct wm_adsp_compr_buf *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->dsp = VAR_1;

 FUNC_2(VAR_2);

 FUNC_1(&VAR_2->list, &VAR_1->buffer_list);

 return VAR_2;
}
