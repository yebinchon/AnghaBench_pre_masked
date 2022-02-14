
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_congestion_ops {int flags; int key; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct tcp_congestion_ops* FUNC_3 (struct net*,char const*) ;

u32 FUNC_4(struct net *VAR_2, const char *VAR_3, bool *VAR_4)
{
 const struct tcp_congestion_ops *VAR_5;
 u32 VAR_6 = VAR_0;

 FUNC_0();

 FUNC_1();
 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5) {
  VAR_6 = VAR_5->key;
  *VAR_4 = VAR_5->flags & VAR_1;
 }
 FUNC_2();

 return VAR_6;
}
