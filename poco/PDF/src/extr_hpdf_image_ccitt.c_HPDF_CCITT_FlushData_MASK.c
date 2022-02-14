
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _HPDF_CCITT_Data {scalar_t__ tif_rawcc; int tif_rawdata; int tif_rawcp; int dst; } ;
typedef int HPDF_STATUS ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static HPDF_STATUS
FUNC_1(struct _HPDF_CCITT_Data *VAR_1)
{
 if (VAR_1->tif_rawcc > 0) {




  if (FUNC_0(VAR_1->dst,
      VAR_1->tif_rawdata, VAR_1->tif_rawcc)!=VAR_0)
   return 1;
  VAR_1->tif_rawcc = 0;
  VAR_1->tif_rawcp = VAR_1->tif_rawdata;
 }
 return VAR_0;
}
