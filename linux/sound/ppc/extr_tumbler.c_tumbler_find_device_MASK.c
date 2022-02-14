
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmac_gpio {int addr; int active_state; int active_val; int inactive_val; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (char*,char const*,...) ;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct device_node* FUNC_1 (char const*) ;
 struct device_node* FUNC_2 (char const*) ;
 long FUNC_3 (struct device_node*,int ) ;
 int* FUNC_4 (struct device_node*,char const*,int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static long FUNC_9(const char *VAR_2, const char *VAR_3,
    struct pmac_gpio *VAR_4, int VAR_5)
{
 struct device_node *VAR_6;
 const u32 *VAR_7;
 u32 VAR_8;
 long VAR_9;

 if (VAR_5)
  VAR_6 = FUNC_2(VAR_2);
 else
  VAR_6 = FUNC_1(VAR_2);
 if (! VAR_6) {
  FUNC_0("(W) cannot find audio device %s !\n", VAR_2);
  FUNC_7("cannot find device %s\n", VAR_2);
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_6, "AAPL,address", ((void*)0));
 if (! VAR_7) {
  VAR_7 = FUNC_4(VAR_6, "reg", ((void*)0));
  if (!VAR_7) {
   FUNC_0("(E) cannot find address for device %s !\n", VAR_2);
   FUNC_6("cannot find address for device %s\n", VAR_2);
   FUNC_5(VAR_6);
   return -VAR_0;
  }
  VAR_8 = *VAR_7;
  if (VAR_8 < 0x50)
   VAR_8 += 0x50;
 } else
  VAR_8 = *VAR_7;

 VAR_4->addr = VAR_8 & 0x0000ffff;

 VAR_7 = FUNC_4(VAR_6, "audio-gpio-active-state", ((void*)0));
 if (VAR_7) {
  VAR_4->active_state = *VAR_7;
  VAR_4->active_val = (*VAR_7) ? 0x5 : 0x4;
  VAR_4->inactive_val = (*VAR_7) ? 0x4 : 0x5;
 } else {
  const u32 *VAR_10 = ((void*)0);
  VAR_4->active_state = VAR_1
    && !FUNC_8(VAR_2, "keywest-gpio1", 13);
  VAR_4->active_val = 0x4;
  VAR_4->inactive_val = 0x5;




  if (VAR_3)
   VAR_10 = FUNC_4(VAR_6, VAR_3, ((void*)0));
  if (VAR_10) {
   if (VAR_10[3] == 0x9 && VAR_10[4] == 0x9) {
    VAR_4->active_val = 0xd;
    VAR_4->inactive_val = 0xc;
   }
   if (VAR_10[3] == 0x1 && VAR_10[4] == 0x1) {
    VAR_4->active_val = 0x5;
    VAR_4->inactive_val = 0x4;
   }
  }
 }

 FUNC_0("(I) GPIO device %s found, offset: %x, active state: %d !\n",
     VAR_2, VAR_4->addr, VAR_4->active_state);

 VAR_9 = FUNC_3(VAR_6, 0);
 FUNC_5(VAR_6);
 return VAR_9;
}
