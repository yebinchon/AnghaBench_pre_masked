
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {size_t sk_protocol; } ;
struct listeners {int masks; } ;
struct TYPE_2__ {unsigned int groups; int listeners; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*) ;
 TYPE_1__* VAR_0 ;
 struct listeners* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int,int ) ;

int FUNC_6(struct sock *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = 0;
 struct listeners *VAR_4;

 FUNC_0(!FUNC_1(VAR_1));

 FUNC_3();
 VAR_4 = FUNC_2(VAR_0[VAR_1->sk_protocol].listeners);

 if (VAR_4 && VAR_2 - 1 < VAR_0[VAR_1->sk_protocol].groups)
  VAR_3 = FUNC_5(VAR_2 - 1, VAR_4->masks);

 FUNC_4();

 return VAR_3;
}
