
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int module_id; } ;
struct skl_module_cfg {int m_type; TYPE_1__ id; } ;
struct skl_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int ,char*,int,int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int,int,void*,int ,int) ;
 int FUNC_3 (struct skl_dev*,struct skl_module_cfg*) ;
 int FUNC_4 (struct skl_dev*,struct skl_module_cfg*,void*) ;
 int FUNC_5 (struct skl_dev*,struct skl_module_cfg*,void*) ;
 int FUNC_6 (struct skl_dev*,struct skl_module_cfg*,void*) ;
 int FUNC_7 (struct skl_dev*,struct skl_module_cfg*,void*) ;
 int FUNC_8 (struct skl_dev*,struct skl_module_cfg*,void*) ;
 int FUNC_9 (struct skl_dev*,struct skl_module_cfg*,void*) ;

__attribute__((used)) static int FUNC_10(struct skl_dev *VAR_3,
   struct skl_module_cfg *VAR_4,
   u16 *VAR_5,
   void **VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_4);

 *VAR_6 = FUNC_1(VAR_7, VAR_2);
 if (((void*)0) == *VAR_6)
  return -VAR_1;

 *VAR_5 = VAR_7;

 switch (VAR_4->m_type) {
 case 132:
  FUNC_7(VAR_3, VAR_4, *VAR_6);
  break;

 case 129:
  FUNC_8(VAR_3, VAR_4, *VAR_6);
  break;

 case 128:
  FUNC_9(VAR_3, VAR_4, *VAR_6);
  break;

 case 134:
  FUNC_4(VAR_3, VAR_4, *VAR_6);
  break;

 case 133:
 case 130:
 case 131:
  FUNC_6(VAR_3, VAR_4, *VAR_6);
  break;

 default:
  FUNC_5(VAR_3, VAR_4, *VAR_6);
  break;

 }

 FUNC_0(VAR_3->dev, "Module type=%d id=%d config size: %d bytes\n",
   VAR_4->m_type, VAR_4->id.module_id,
   VAR_7);
 FUNC_2("Module params:", VAR_0, 8, 4,
   *VAR_6, VAR_7, 0);
 return 0;
}
