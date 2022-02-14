
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct l2tp_tunnel {int dummy; } ;
struct l2tp_session {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct net* FUNC_0 (struct genl_info*) ;
 struct l2tp_session* FUNC_1 (struct net*,char*) ;
 int FUNC_2 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_3 (struct net*,int ) ;
 struct l2tp_session* FUNC_4 (struct l2tp_tunnel*,int ) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static struct l2tp_session *FUNC_7(struct genl_info *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 char *VAR_6;
 struct l2tp_tunnel *VAR_7;
 struct l2tp_session *VAR_8 = ((void*)0);
 struct net *VAR_9 = FUNC_0(VAR_3);

 if (VAR_3->attrs[VAR_1]) {
  VAR_6 = FUNC_5(VAR_3->attrs[VAR_1]);
  VAR_8 = FUNC_1(VAR_9, VAR_6);
 } else if ((VAR_3->attrs[VAR_2]) &&
     (VAR_3->attrs[VAR_0])) {
  VAR_4 = FUNC_6(VAR_3->attrs[VAR_0]);
  VAR_5 = FUNC_6(VAR_3->attrs[VAR_2]);
  VAR_7 = FUNC_3(VAR_9, VAR_4);
  if (VAR_7) {
   VAR_8 = FUNC_4(VAR_7, VAR_5);
   FUNC_2(VAR_7);
  }
 }

 return VAR_8;
}
