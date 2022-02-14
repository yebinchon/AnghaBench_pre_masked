
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int (* create ) (struct net*,struct socket*,TYPE_1__*,int) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net*,struct socket*,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_7, struct socket *VAR_8, int VAR_9,
      int VAR_10)
{
 int VAR_11 = -VAR_2;

 if (VAR_7 != &VAR_4)
  return -VAR_0;

 if (VAR_9 < 0 || VAR_9 >= VAR_3)
  return -VAR_1;

 FUNC_1(&VAR_6);
 if (VAR_5[VAR_9] && FUNC_4(VAR_5[VAR_9]->owner)) {
  VAR_11 = VAR_5[VAR_9]->create(VAR_7, VAR_8, VAR_5[VAR_9], VAR_10);
  FUNC_0(VAR_5[VAR_9]->owner);
 }
 FUNC_2(&VAR_6);

 return VAR_11;
}
