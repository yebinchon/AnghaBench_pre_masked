
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int obj_class; } ;
struct TYPE_9__ {int stream; TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_U3D ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef TYPE_2__* HPDF_Dict ;
typedef int HPDF_BYTE ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int const*,int ) ;

HPDF_U3D
FUNC_5 ( HPDF_MMgr VAR_2,
       const HPDF_BYTE *VAR_3,
       HPDF_UINT VAR_4,
       HPDF_Xref VAR_5 )
{
 HPDF_Dict VAR_6;
 HPDF_STATUS VAR_7 = VAR_0;

 FUNC_3 ((" HPDF_U3D_LoadU3DFromMem\n"));

 VAR_6 = FUNC_0 (VAR_2, VAR_5);
 if (!VAR_6) {
  return ((void*)0);
 }

 VAR_6->header.obj_class |= VAR_1;
 VAR_7 = FUNC_1 (VAR_6, "Type", "XObject");
 if (VAR_7 != VAR_0) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 VAR_7 = FUNC_1 (VAR_6, "Subtype", "Image");
 if (VAR_7 != VAR_0) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 if (FUNC_4 (VAR_6->stream, VAR_3, VAR_4) != VAR_0) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
