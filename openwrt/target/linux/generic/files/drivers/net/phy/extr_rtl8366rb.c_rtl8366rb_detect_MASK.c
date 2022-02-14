
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int parent; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_1, &VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_4->parent, "unable to read chip id\n");
  return VAR_7;
 }

 switch (VAR_5) {
 case 128:
  break;
 default:
  FUNC_0(VAR_4->parent, "unknown chip id (%04x)\n", VAR_5);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_2,
       &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4->parent, "unable to read chip version\n");
  return VAR_7;
 }

 FUNC_1(VAR_4->parent, "RTL%04x ver. %u chip found\n",
   VAR_5, VAR_6 & VAR_3);

 return 0;
}
