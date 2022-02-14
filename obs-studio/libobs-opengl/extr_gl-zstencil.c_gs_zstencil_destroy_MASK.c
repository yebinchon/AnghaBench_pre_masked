
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer; } ;
typedef TYPE_1__ gs_zstencil_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (char*) ;

void FUNC_3(gs_zstencil_t *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->buffer) {
   FUNC_1(1, &VAR_0->buffer);
   FUNC_2("glDeleteRenderbuffers");
  }

  FUNC_0(VAR_0);
 }
}
