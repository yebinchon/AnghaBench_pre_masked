
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn {TYPE_1__* tuplehash; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int tuple; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nf_conn*) ;
 unsigned int FUNC_1 (struct net*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct net*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int VAR_2 ;
 int FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (struct nf_conn*) ;
 struct net* FUNC_8 (struct nf_conn*) ;
 unsigned int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct nf_conn *VAR_3)
{
 struct net *VAR_4 = FUNC_8(VAR_3);
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7;

 FUNC_7(VAR_3);

 FUNC_2();
 do {
  VAR_7 = FUNC_9(&VAR_2);
  VAR_5 = FUNC_1(VAR_4,
          &VAR_3->tuplehash[VAR_0].tuple);
  VAR_6 = FUNC_1(VAR_4,
        &VAR_3->tuplehash[VAR_1].tuple);
 } while (FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7));

 FUNC_0(VAR_3);
 FUNC_5(VAR_5, VAR_6);

 FUNC_6(VAR_3);

 FUNC_3();
}
