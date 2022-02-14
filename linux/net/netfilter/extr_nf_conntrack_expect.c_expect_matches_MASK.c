
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_expect {int master; int mask; int tuple; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static inline int FUNC_6(const struct nf_conntrack_expect *VAR_0,
     const struct nf_conntrack_expect *VAR_1)
{
 return FUNC_2(&VAR_0->tuple, &VAR_1->tuple) &&
        FUNC_3(&VAR_0->mask, &VAR_1->mask) &&
        FUNC_0(FUNC_1(VAR_0->master), FUNC_1(VAR_1->master)) &&
        FUNC_5(VAR_0->master, FUNC_4(VAR_1->master));
}
