
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _HPDF_CCITT_Data {TYPE_1__* tif_rawdata; TYPE_1__* tif_data; } ;
struct TYPE_3__ {struct TYPE_3__* runs; struct TYPE_3__* refline; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__ HPDF_Fax3CodecState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static HPDF_STATUS FUNC_1(struct _HPDF_CCITT_Data *VAR_1)
{
 if(VAR_1->tif_data!=((void*)0)) {
  HPDF_Fax3CodecState* VAR_2=VAR_1->tif_data;
  if(VAR_2->refline!=((void*)0)) {
   FUNC_0(VAR_2->refline);
   VAR_2->refline=((void*)0);
  }
  if(VAR_2->runs!=((void*)0)) {
   FUNC_0(VAR_2->runs);
   VAR_2->runs=((void*)0);
  }
  FUNC_0(VAR_1->tif_data);
  VAR_1->tif_data=((void*)0);
 }
 if(VAR_1->tif_rawdata!=((void*)0)) {
  FUNC_0(VAR_1->tif_rawdata);
  VAR_1->tif_rawdata=((void*)0);
 }
 return VAR_0;
}
