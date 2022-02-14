
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 void* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static struct device_node *FUNC_5(char *VAR_0,
        char *VAR_1,
        int *VAR_2,
        int *VAR_3)
{
 struct device_node *VAR_4, *VAR_5;
 const u32 *VAR_6;
 const char *VAR_7;

 *VAR_2 = -1;


 VAR_4 = FUNC_0(((void*)0), VAR_0);
 if (!VAR_4) {




  VAR_5 = FUNC_0(((void*)0), "gpio");
  if (!VAR_5)
   return ((void*)0);
  while ((VAR_4 = FUNC_1(VAR_5, VAR_4))) {
   VAR_7 = FUNC_2(VAR_4, "audio-gpio", ((void*)0));
   if (!VAR_7)
    continue;
   if (FUNC_4(VAR_7, VAR_0) == 0)
    break;
   if (VAR_1 && (FUNC_4(VAR_7, VAR_1) == 0))
    break;
  }
  FUNC_3(VAR_5);

  if (!VAR_4)
   return ((void*)0);
 }

 VAR_6 = FUNC_2(VAR_4, "reg", ((void*)0));
 if (!VAR_6) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 *VAR_2 = *VAR_6;




 if (*VAR_2 < 0x50)
  *VAR_2 += 0x50;

 VAR_6 = FUNC_2(VAR_4, "audio-gpio-active-state", ((void*)0));
 if (!VAR_6)





  *VAR_3 = 0;
 else
  *VAR_3 = *VAR_6;

 return VAR_4;
}
