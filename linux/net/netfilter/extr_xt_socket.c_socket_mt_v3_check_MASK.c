
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_socket_mtinfo3 {int flags; } ;
struct xt_mtchk_param {int family; int net; scalar_t__ matchinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_2)
{
 const struct xt_socket_mtinfo3 *VAR_3 =
        (struct xt_socket_mtinfo3 *)VAR_2->matchinfo;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->net, VAR_2->family);
 if (VAR_4)
  return VAR_4;
 if (VAR_3->flags & ~VAR_1) {
  FUNC_0("unknown flags 0x%x\n",
        VAR_3->flags & ~VAR_1);
  return -VAR_0;
 }
 return 0;
}
