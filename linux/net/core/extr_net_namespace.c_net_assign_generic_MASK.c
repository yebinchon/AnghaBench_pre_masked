
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; } ;
struct net_generic {void** ptr; TYPE_1__ s; } ;
struct net {int gen; } ;
struct TYPE_4__ {int rcu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct net_generic*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void**,void**,unsigned int) ;
 struct net_generic* FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ,struct net_generic*) ;
 struct net_generic* FUNC_6 (int ,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int FUNC_7(struct net *VAR_4, unsigned int VAR_5, void *VAR_6)
{
 struct net_generic *VAR_7, *VAR_8;

 FUNC_0(VAR_5 < VAR_1);

 VAR_8 = FUNC_6(VAR_4->gen,
        FUNC_2(&VAR_2));
 if (VAR_8->s.len > VAR_5) {
  VAR_8->ptr[VAR_5] = VAR_6;
  return 0;
 }

 VAR_7 = FUNC_4();
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 FUNC_3(&VAR_7->ptr[VAR_1], &VAR_8->ptr[VAR_1],
        (VAR_8->s.len - VAR_1) * sizeof(void *));
 VAR_7->ptr[VAR_5] = VAR_6;

 FUNC_5(VAR_4->gen, VAR_7);
 FUNC_1(VAR_8, VAR_3.rcu);
 return 0;
}
