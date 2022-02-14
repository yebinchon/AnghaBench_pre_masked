
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tsize_t ;
typedef int tidata_t ;
struct _HPDF_CCITT_Data {int dummy; } ;
struct TYPE_4__ {scalar_t__ rowbytes; int rowpixels; } ;
struct TYPE_5__ {TYPE_1__ b; int refline; } ;
typedef int HPDF_STATUS ;
typedef TYPE_2__ HPDF_Fax3CodecState ;


 TYPE_2__* FUNC_0 (struct _HPDF_CCITT_Data*) ;
 scalar_t__ FUNC_1 (struct _HPDF_CCITT_Data*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static HPDF_STATUS
FUNC_3(struct _HPDF_CCITT_Data *VAR_1, tidata_t VAR_2, tsize_t VAR_3 )
{
 HPDF_Fax3CodecState *VAR_4 = FUNC_0(VAR_1);


 while ((long)VAR_3 > 0) {
  if (FUNC_1(VAR_1, VAR_2, VAR_4->refline, VAR_4->b.rowpixels)!=VAR_0)
   return 1;
  FUNC_2(VAR_4->refline, VAR_2, VAR_4->b.rowbytes);
  VAR_2 += VAR_4->b.rowbytes;
  VAR_3 -= VAR_4->b.rowbytes;
 }
 return VAR_0;
}
