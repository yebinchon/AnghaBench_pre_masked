
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int def_count; int * out; TYPE_1__* defs_buffer; int * out_store; } ;
typedef TYPE_2__ svg_device ;
typedef int fz_output ;
typedef int fz_context ;
struct TYPE_4__ {scalar_t__ len; int data; } ;


 int FUNC_0 (int *,int *,int ,scalar_t__) ;

__attribute__((used)) static fz_output *
FUNC_1(fz_context *VAR_0, svg_device *VAR_1)
{
 if (VAR_1->def_count > 0)
  VAR_1->def_count--;
 if (VAR_1->def_count == 1)
  VAR_1->out = VAR_1->out_store;
 if (VAR_1->def_count == 0 && VAR_1->defs_buffer != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1->out, VAR_1->defs_buffer->data, VAR_1->defs_buffer->len);
  VAR_1->defs_buffer->len = 0;
 }
 return VAR_1->out;
}
