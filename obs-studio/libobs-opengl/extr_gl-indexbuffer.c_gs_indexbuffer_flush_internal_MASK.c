
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int buffer; int dynamic; } ;
typedef TYPE_1__ gs_indexbuffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,void const*,int ) ;

__attribute__((used)) static inline void FUNC_2(gs_indexbuffer_t *VAR_2,
       const void *VAR_3)
{
 if (!VAR_2->dynamic) {
  FUNC_0(VAR_1, "Index buffer is not dynamic");
  goto fail;
 }

 if (!FUNC_1(VAR_0, VAR_2->buffer, VAR_3, VAR_2->size))
  goto fail;

 return;

fail:
 FUNC_0(VAR_1, "gs_indexbuffer_flush (GL) failed");
}
