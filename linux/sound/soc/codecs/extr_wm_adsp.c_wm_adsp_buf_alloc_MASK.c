
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_buf {int list; int buf; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wm_adsp_buf*) ;
 struct wm_adsp_buf* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int ,void const*,size_t) ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static struct wm_adsp_buf *FUNC_5(const void *VAR_1, size_t VAR_2,
          struct list_head *VAR_3)
{
 struct wm_adsp_buf *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->buf = FUNC_4(VAR_2);
 if (!VAR_4->buf) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 FUNC_3(VAR_4->buf, VAR_1, VAR_2);

 if (VAR_3)
  FUNC_2(&VAR_4->list, VAR_3);

 return VAR_4;
}
