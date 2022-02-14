
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name_len; char* name; int member_0; } ;
typedef TYPE_1__ drm_version_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,TYPE_1__*) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(int VAR_1)
{
 drm_version_t VAR_2 = { 0 };
 char VAR_3[5];
 int VAR_4;

 VAR_2.name_len = 4;
 VAR_2.name = VAR_3;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_2);
 if (VAR_4)
  return 1;

 return FUNC_1(VAR_3, "vgem");
}
