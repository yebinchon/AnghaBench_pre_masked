
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int hid; } ;
struct hidp_connadd_req {scalar_t__ rd_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct hidp_session*,struct hidp_connadd_req const*) ;
 int FUNC_1 (struct hidp_session*,struct hidp_connadd_req const*) ;

__attribute__((used)) static int FUNC_2(struct hidp_session *VAR_1,
     const struct hidp_connadd_req *VAR_2)
{
 int VAR_3;

 if (VAR_2->rd_size > 0) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 && VAR_3 != -VAR_0)
   return VAR_3;
 }

 if (!VAR_1->hid) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
