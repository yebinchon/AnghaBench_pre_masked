
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int error; int mmgr; } ;
struct TYPE_6__ {int z; int y; int x; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__ HPDF_Point3D ;
typedef TYPE_2__* HPDF_Dict ;
typedef int HPDF_Array ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;

HPDF_STATUS
FUNC_4(HPDF_Dict VAR_1, const char* VAR_2, HPDF_Point3D VAR_3)
{
 HPDF_Array VAR_4;
 HPDF_STATUS VAR_5 = VAR_0;
 VAR_4 = FUNC_1 (VAR_1->mmgr);
 if (!VAR_4)
  return FUNC_3 ( VAR_1->error);

 if (FUNC_2 (VAR_1, VAR_2, VAR_4) != VAR_0)
  return FUNC_3 ( VAR_1->error);

 VAR_5 += FUNC_0(VAR_4, VAR_3.x);
 VAR_5 += FUNC_0(VAR_4, VAR_3.y);
 VAR_5 += FUNC_0(VAR_4, VAR_3.z);

 return VAR_5;
}
