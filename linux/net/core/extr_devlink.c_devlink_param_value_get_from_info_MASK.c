
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vbool; int vstr; int vu32; int vu16; int vu8; } ;
struct genl_info {scalar_t__* attrs; } ;
struct devlink_param {int type; } ;


 size_t VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(const struct devlink_param *VAR_3,
      struct genl_info *VAR_4,
      union devlink_param_value *VAR_5)
{
 int VAR_6;

 if (VAR_3->type != 132 &&
     !VAR_4->attrs[VAR_0])
  return -VAR_1;

 switch (VAR_3->type) {
 case 128:
  VAR_5->vu8 = FUNC_3(VAR_4->attrs[VAR_0]);
  break;
 case 130:
  VAR_5->vu16 = FUNC_1(VAR_4->attrs[VAR_0]);
  break;
 case 129:
  VAR_5->vu32 = FUNC_2(VAR_4->attrs[VAR_0]);
  break;
 case 131:
  VAR_6 = FUNC_6(FUNC_0(VAR_4->attrs[VAR_0]),
         FUNC_4(VAR_4->attrs[VAR_0]));
  if (VAR_6 == FUNC_4(VAR_4->attrs[VAR_0]) ||
      VAR_6 >= VAR_2)
   return -VAR_1;
  FUNC_5(VAR_5->vstr,
         FUNC_0(VAR_4->attrs[VAR_0]));
  break;
 case 132:
  VAR_5->vbool = VAR_4->attrs[VAR_0] ?
          1 : 0;
  break;
 }
 return 0;
}
