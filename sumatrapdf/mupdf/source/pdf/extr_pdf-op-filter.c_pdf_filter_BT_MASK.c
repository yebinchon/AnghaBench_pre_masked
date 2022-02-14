
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_4__ {void* tlm; void* tm; } ;
struct TYPE_5__ {int BT_pending; TYPE_1__ tos; } ;
typedef TYPE_2__ pdf_filter_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 void* VAR_0 ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, pdf_processor *VAR_2)
{
 pdf_filter_processor *VAR_3 = (pdf_filter_processor*)VAR_2;
 FUNC_0(VAR_1, VAR_3, 0);
 VAR_3->tos.tm = VAR_0;
 VAR_3->tos.tlm = VAR_0;
 VAR_3->BT_pending = 1;
}
