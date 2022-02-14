
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct flowi4 {int flowi4_scope; int flowi4_tos; int daddr; int flowi4_mark; } ;
struct fib_table {int tb_id; } ;
struct fib_result_nl {int scope; int type; int nh_sel; int prefixlen; int err; int tb_id; int tb_id_in; int fl_scope; int fl_tos; int fl_addr; int fl_mark; } ;
struct fib_result {int scope; int type; int nh_sel; int prefixlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fib_table* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct fib_table*,struct flowi4*,struct fib_result*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct net *VAR_2, struct fib_result_nl *VAR_3)
{

 struct fib_result VAR_4;
 struct flowi4 VAR_5 = {
  .flowi4_mark = VAR_3->fl_mark,
  .daddr = VAR_3->fl_addr,
  .flowi4_tos = VAR_3->fl_tos,
  .flowi4_scope = VAR_3->fl_scope,
 };
 struct fib_table *VAR_6;

 FUNC_4();

 VAR_6 = FUNC_0(VAR_2, VAR_3->tb_id_in);

 VAR_3->err = -VAR_0;
 if (VAR_6) {
  FUNC_2();

  VAR_3->tb_id = VAR_6->tb_id;
  VAR_3->err = FUNC_1(VAR_6, &VAR_5, &VAR_4, VAR_1);

  if (!VAR_3->err) {
   VAR_3->prefixlen = VAR_4.prefixlen;
   VAR_3->nh_sel = VAR_4.nh_sel;
   VAR_3->type = VAR_4.type;
   VAR_3->scope = VAR_4.scope;
  }
  FUNC_3();
 }

 FUNC_5();
}
