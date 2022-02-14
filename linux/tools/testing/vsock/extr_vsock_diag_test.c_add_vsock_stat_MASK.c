
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_diag_msg {int dummy; } ;
struct vsock_stat {int list; struct vsock_diag_msg msg; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 struct vsock_stat* FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct list_head *VAR_1,
      const struct vsock_diag_msg *VAR_2)
{
 struct vsock_stat *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (!VAR_3) {
  FUNC_3("malloc");
  FUNC_0(VAR_0);
 }

 VAR_3->msg = *VAR_2;
 FUNC_1(&VAR_3->list, VAR_1);
}
