
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_tplg_vendor_string_elem {int token; int string; } ;
struct skl_dev {TYPE_1__* lib_info; int lib_count; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
  struct snd_soc_tplg_vendor_string_elem *VAR_2,
  struct skl_dev *VAR_3)
{
 int VAR_4 = 0;
 static int VAR_5;

 switch (VAR_2->token) {
 case 128:
  if (VAR_5 > VAR_3->lib_count - 1) {
   VAR_5 = 0;
   return -VAR_0;
  }

  FUNC_2(VAR_3->lib_info[VAR_5].name,
   VAR_2->string,
   FUNC_0(VAR_3->lib_info[VAR_5].name));
  VAR_5++;
  break;

 default:
  FUNC_1(VAR_1, "Not a string token %d\n", VAR_2->token);
  break;
 }
 VAR_4++;

 return VAR_4;
}
