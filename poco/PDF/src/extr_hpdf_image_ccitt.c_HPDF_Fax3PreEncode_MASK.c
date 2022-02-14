
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _HPDF_CCITT_Data {int dummy; } ;
struct TYPE_4__ {int rowbytes; } ;
struct TYPE_5__ {int bit; scalar_t__ line; scalar_t__ maxk; scalar_t__ k; TYPE_1__ b; scalar_t__ refline; scalar_t__ data; } ;
typedef int HPDF_STATUS ;
typedef TYPE_2__ HPDF_Fax3CodecState ;


 TYPE_2__* FUNC_0 (struct _HPDF_CCITT_Data*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int,int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_2(struct _HPDF_CCITT_Data *VAR_1 )
{
 HPDF_Fax3CodecState* VAR_2 = FUNC_0(VAR_1);


 VAR_2->bit = 8;
 VAR_2->data = 0;






 if (VAR_2->refline)
  FUNC_1(VAR_2->refline, 0x00, VAR_2->b.rowbytes);
 VAR_2->k = VAR_2->maxk = 0;
 VAR_2->line = 0;
 return VAR_0;
}
