
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {struct hlist_head* dev_name_head; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct net*,char const*,int ) ;
 size_t FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static inline struct hlist_head *FUNC_3(struct net *VAR_2, const char *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2, VAR_3, FUNC_2(VAR_3, VAR_0));

 return &VAR_2->dev_name_head[FUNC_1(VAR_4, VAR_1)];
}
