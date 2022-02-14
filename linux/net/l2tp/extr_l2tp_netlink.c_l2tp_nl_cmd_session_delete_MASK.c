
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct l2tp_session {size_t pwtype; } ;
struct genl_info {int dummy; } ;
struct TYPE_2__ {int (* session_delete ) (struct l2tp_session*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 struct l2tp_session* FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct l2tp_session*) ;
 int FUNC_2 (int *,struct genl_info*,struct l2tp_session*,int ) ;
 int FUNC_3 (struct l2tp_session*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 int VAR_7 = 0;
 struct l2tp_session *VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_2(&VAR_4, VAR_6,
       VAR_8, VAR_1);

 VAR_9 = VAR_8->pwtype;
 if (VAR_9 < VAR_2)
  if (VAR_3[VAR_9] && VAR_3[VAR_9]->session_delete)
   VAR_7 = (*VAR_3[VAR_9]->session_delete)(VAR_8);

 FUNC_1(VAR_8);

out:
 return VAR_7;
}
