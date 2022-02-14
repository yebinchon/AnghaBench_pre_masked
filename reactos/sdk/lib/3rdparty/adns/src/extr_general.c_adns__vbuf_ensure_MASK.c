
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avail; void* buf; } ;
typedef TYPE_1__ vbuf ;


 void* FUNC_0 (void*,size_t) ;

int FUNC_1(vbuf *VAR_0, int VAR_1) {
  void *VAR_2;

  if (VAR_0->avail >= VAR_1) return 1;
  VAR_2= FUNC_0(VAR_0->buf, (size_t) VAR_1); if (!VAR_2) return 0;
  VAR_0->buf= VAR_2;
  VAR_0->avail= VAR_1;
  return 1;
}
