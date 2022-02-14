
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp_compr {TYPE_1__* buf; scalar_t__ stream; } ;
struct TYPE_2__ {int * compr; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct wm_adsp_compr*) ;

__attribute__((used)) static void FUNC_2(struct wm_adsp_compr *VAR_0)
{
 if (!VAR_0)
  return;


 if (VAR_0->stream)
  FUNC_0(VAR_0->stream);

 if (FUNC_1(VAR_0)) {
  VAR_0->buf->compr = ((void*)0);
  VAR_0->buf = ((void*)0);
 }
}
