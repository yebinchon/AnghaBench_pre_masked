
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct list_set {int members; struct ip_set* set; struct net* net; int size; } ;
struct ip_set {struct list_set* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct list_set* FUNC_1 (int,int ) ;

__attribute__((used)) static bool
FUNC_2(struct net *VAR_1, struct ip_set *VAR_2, u32 VAR_3)
{
 struct list_set *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return 0;

 VAR_4->size = VAR_3;
 VAR_4->net = VAR_1;
 VAR_4->set = VAR_2;
 FUNC_0(&VAR_4->members);
 VAR_2->data = VAR_4;

 return 1;
}
