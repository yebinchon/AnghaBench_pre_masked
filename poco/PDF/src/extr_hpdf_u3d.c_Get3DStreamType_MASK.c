
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ) ;
 char* VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static HPDF_STATUS FUNC_5 (HPDF_Stream VAR_5, const char **VAR_6)
{
 HPDF_BYTE VAR_7[4];
 HPDF_UINT VAR_8;

 FUNC_2 ((" HPDF_U3D_Get3DStreamType\n"));

 VAR_8 = 4;
 if (FUNC_3 (VAR_5, VAR_7, &VAR_8) != VAR_1) {
  return FUNC_0 (VAR_5->error);
 }

 if (FUNC_4 (VAR_5, 0, VAR_2) != VAR_1) {
  return FUNC_0 (VAR_5->error);
 }

 if (FUNC_1(VAR_7, (HPDF_BYTE *)VAR_4, 4 ) == 0) {
  *VAR_6 = VAR_4;
  return VAR_1;
 }

 if (FUNC_1(VAR_7, (HPDF_BYTE *)VAR_3, 3) == 0) {
  *VAR_6 = VAR_3;
  return VAR_1;
 }

 return VAR_0;
}
