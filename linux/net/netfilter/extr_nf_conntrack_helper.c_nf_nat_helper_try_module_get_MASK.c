
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nf_conntrack_nat_helper {int module; } ;
struct nf_conntrack_helper {char* nat_mod_name; } ;
typedef int mod_name ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conntrack_helper* FUNC_0 (char const*,int ,int ) ;
 struct nf_conntrack_nat_helper* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (int ) ;

int
FUNC_7(const char *VAR_2, u16 VAR_3, u8 VAR_4)
{
 struct nf_conntrack_helper *VAR_5;
 struct nf_conntrack_nat_helper *VAR_6;
 char VAR_7[VAR_1];
 int VAR_8 = 0;

 FUNC_2();
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_3();
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_5->nat_mod_name);
 if (!VAR_6) {
  FUNC_5(VAR_7, sizeof(VAR_7), "%s", VAR_5->nat_mod_name);
  FUNC_3();
  FUNC_4(VAR_7);

  FUNC_2();
  VAR_6 = FUNC_1(VAR_7);
  if (!VAR_6) {
   FUNC_3();
   return -VAR_0;
  }
 }

 if (!FUNC_6(VAR_6->module))
  VAR_8 = -VAR_0;

 FUNC_3();
 return VAR_8;
}
