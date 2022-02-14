
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used; int avail; void* buf; } ;
typedef TYPE_1__ vbuf ;
typedef int byte ;


 int FUNC_0 (TYPE_1__*,int const*,int) ;
 void* FUNC_1 (void*,size_t) ;

int FUNC_2(vbuf *VAR_0, const byte *VAR_1, int VAR_2) {
  int VAR_3;
  void *VAR_4;

  VAR_3= VAR_0->used+VAR_2;
  if (VAR_0->avail < VAR_3) {
    if (VAR_3<20) VAR_3= 20;
    VAR_3 <<= 1;
    VAR_4= FUNC_1(VAR_0->buf,(size_t) VAR_3);
    if (!VAR_4) { VAR_3= VAR_0->used+VAR_2; VAR_4= FUNC_1(VAR_0->buf, (size_t) VAR_3); }
    if (!VAR_4) return 0;
    VAR_0->buf= VAR_4;
    VAR_0->avail= VAR_3;
  }
  FUNC_0(VAR_0,VAR_1,VAR_2);
  return 1;
}
