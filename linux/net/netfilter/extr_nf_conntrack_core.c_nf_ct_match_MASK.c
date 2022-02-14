
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn {TYPE_1__* tuplehash; } ;
struct TYPE_2__ {int tuple; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nf_conn const*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nf_conn const*) ;
 scalar_t__ FUNC_4 (struct nf_conn const*,int ,size_t) ;

__attribute__((used)) static inline bool
FUNC_5(const struct nf_conn *VAR_2, const struct nf_conn *VAR_3)
{
 return FUNC_2(&VAR_2->tuplehash[VAR_0].tuple,
     &VAR_3->tuplehash[VAR_0].tuple) &&
        FUNC_2(&VAR_2->tuplehash[VAR_1].tuple,
     &VAR_3->tuplehash[VAR_1].tuple) &&
        FUNC_4(VAR_2, FUNC_3(VAR_3), VAR_0) &&
        FUNC_4(VAR_2, FUNC_3(VAR_3), VAR_1) &&
        FUNC_0(FUNC_1(VAR_2), FUNC_1(VAR_3));
}
