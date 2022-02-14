
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _HPDF_CCITT_Data {TYPE_1__* tif_data; } ;
struct TYPE_6__ {int * faxdcs; int * subaddress; scalar_t__ recvparams; scalar_t__ groupoptions; } ;
struct TYPE_5__ {int * runs; int * refline; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__ HPDF_Fax3CodecState ;
typedef TYPE_2__ HPDF_Fax3BaseState ;


 TYPE_1__* FUNC_0 (struct _HPDF_CCITT_Data*) ;
 TYPE_2__* FUNC_1 (struct _HPDF_CCITT_Data*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static HPDF_STATUS FUNC_3(struct _HPDF_CCITT_Data *VAR_1)
{
 HPDF_Fax3BaseState* VAR_2;
 HPDF_Fax3CodecState* VAR_3;




 VAR_1->tif_data = (HPDF_Fax3CodecState *)
  FUNC_2(sizeof (HPDF_Fax3CodecState));

 if (VAR_1->tif_data == ((void*)0)) {
  return 1;
 }

 VAR_2 = FUNC_1(VAR_1);





 VAR_2->groupoptions = 0;
 VAR_2->recvparams = 0;
 VAR_2->subaddress = ((void*)0);
 VAR_2->faxdcs = ((void*)0);

 VAR_3 = FUNC_0(VAR_1);
 VAR_3->refline = ((void*)0);
 VAR_3->runs = ((void*)0);

 return VAR_0;
}
