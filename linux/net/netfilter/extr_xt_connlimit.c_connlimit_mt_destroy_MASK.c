
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtdtor_param {int family; int net; struct xt_connlimit_info* matchinfo; } ;
struct xt_connlimit_info {int data; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct xt_mtdtor_param *VAR_0)
{
 const struct xt_connlimit_info *VAR_1 = VAR_0->matchinfo;

 FUNC_0(VAR_0->net, VAR_0->family, VAR_1->data);
}
