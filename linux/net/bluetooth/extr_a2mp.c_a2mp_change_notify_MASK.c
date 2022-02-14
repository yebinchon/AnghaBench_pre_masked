
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct amp_mgr {int dummy; } ;
struct a2mp_cmd {int dummy; } ;
struct a2mp_cl {int status; int type; int id; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 struct a2mp_cl* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(struct amp_mgr *VAR_0, struct sk_buff *VAR_1,
         struct a2mp_cmd *VAR_2)
{
 struct a2mp_cl *VAR_3 = (void *) VAR_1->data;

 while (VAR_1->len >= sizeof(*VAR_3)) {
  FUNC_0("Controller id %d type %d status %d", VAR_3->id, VAR_3->type,
         VAR_3->status);
  VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3));
 }



 return 0;
}
