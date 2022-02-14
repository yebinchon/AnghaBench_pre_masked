
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {int family; int net; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->net, VAR_0->family);
 if (VAR_1 < 0)
  FUNC_1("cannot load conntrack support for proto=%u\n",
        VAR_0->family);
 return VAR_1;
}
