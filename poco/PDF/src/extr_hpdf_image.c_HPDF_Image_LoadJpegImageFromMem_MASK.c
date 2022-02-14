
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
typedef int HPDF_Xref ;
typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef TYPE_1__* HPDF_MMgr ;
typedef int * HPDF_Image ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int const*,int ) ;

HPDF_Image
FUNC_7 (HPDF_MMgr VAR_2,
                            const HPDF_BYTE *VAR_3,
                                  HPDF_UINT VAR_4,
                                  HPDF_Xref VAR_5)
{
 HPDF_Stream VAR_6;
 HPDF_Image VAR_7;

 FUNC_2 ((" HPDF_Image_LoadJpegImageFromMem\n"));

 VAR_6 = FUNC_1(VAR_2,VAR_4);
 if (!FUNC_5 (VAR_6)) {
  FUNC_3 (VAR_2->error, VAR_0, 0);
  return ((void*)0);
 }

 if (FUNC_6 (VAR_6, VAR_3, VAR_4) != VAR_1) {
  FUNC_4 (VAR_6);
  return ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_2,VAR_6,VAR_5);


 FUNC_4 (VAR_6);

 return VAR_7;
}
