
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_7__ {int globals; } ;
struct TYPE_8__ {TYPE_1__ jbig2; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_10__ {int buffer; TYPE_3__ params; } ;
typedef TYPE_4__ fz_compressed_buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_4__*) ;

void
FUNC_3(fz_context *VAR_1, fz_compressed_buffer *VAR_2)
{
 if (VAR_2)
 {
  if (VAR_2->params.type == VAR_0)
   FUNC_1(VAR_1, VAR_2->params.u.jbig2.globals);
  FUNC_0(VAR_1, VAR_2->buffer);
  FUNC_2(VAR_1, VAR_2);
 }
}
