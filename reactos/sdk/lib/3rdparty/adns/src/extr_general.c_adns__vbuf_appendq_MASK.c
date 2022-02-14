
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ used; scalar_t__ buf; } ;
typedef TYPE_1__ vbuf ;
typedef int byte ;


 int FUNC_0 (scalar_t__,int const*,size_t) ;

void FUNC_1(vbuf *VAR_0, const byte *VAR_1, int VAR_2) {
  FUNC_0(VAR_0->buf+VAR_0->used,VAR_1, (size_t) VAR_2);
  VAR_0->used+= VAR_2;
}
