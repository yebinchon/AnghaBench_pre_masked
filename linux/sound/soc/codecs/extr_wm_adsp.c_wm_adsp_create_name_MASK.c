
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {char* fwf_name; scalar_t__ name; int dev; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int ) ;
 char* FUNC_1 (int ,scalar_t__,int ) ;
 char FUNC_2 (char) ;

__attribute__((used)) static int FUNC_3(struct wm_adsp *VAR_2)
{
 char *VAR_3;

 if (!VAR_2->name) {
  VAR_2->name = FUNC_0(VAR_2->dev, VAR_1, "DSP%d",
        VAR_2->num);
  if (!VAR_2->name)
   return -VAR_0;
 }

 if (!VAR_2->fwf_name) {
  VAR_3 = FUNC_1(VAR_2->dev, VAR_2->name, VAR_1);
  if (!VAR_3)
   return -VAR_0;

  VAR_2->fwf_name = VAR_3;
  for (; *VAR_3 != 0; ++VAR_3)
   *VAR_3 = FUNC_2(*VAR_3);
 }

 return 0;
}
