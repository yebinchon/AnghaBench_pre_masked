
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gs_indexbuffer_t ;
struct TYPE_3__ {int (* gs_indexbuffer_flush_direct ) (int *,void const*) ;} ;
struct TYPE_4__ {TYPE_1__ exports; } ;


 int FUNC_0 (char*,int *,void const*) ;
 int FUNC_1 (int *,void const*) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_indexbuffer_t *VAR_1,
     const void *VAR_2)
{
 if (!FUNC_0("gs_indexbuffer_flush_direct", VAR_1, VAR_2))
  return;

 VAR_0->exports.gs_indexbuffer_flush_direct(VAR_1, VAR_2);
}
