
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {int family; int net; struct xt_helper_info* matchinfo; } ;
struct xt_helper_info {char* name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_0)
{
 struct xt_helper_info *VAR_1 = VAR_0->matchinfo;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->net, VAR_0->family);
 if (VAR_2 < 0) {
  FUNC_1("cannot load conntrack support for proto=%u\n",
        VAR_0->family);
  return VAR_2;
 }
 VAR_1->name[sizeof(VAR_1->name) - 1] = '\0';
 return 0;
}
