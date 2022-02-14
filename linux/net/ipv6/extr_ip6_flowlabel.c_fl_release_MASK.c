
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ipv6_txoptions {int dummy; } ;
struct ip6_flowlabel {unsigned long lastuse; unsigned long linger; unsigned long expires; scalar_t__ share; struct ipv6_txoptions* opt; int users; } ;
struct TYPE_4__ {unsigned long expires; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct ipv6_txoptions*) ;
 int FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct ip6_flowlabel *VAR_4)
{
 FUNC_3(&VAR_2);

 VAR_4->lastuse = VAR_3;
 if (FUNC_0(&VAR_4->users)) {
  unsigned long VAR_5 = VAR_4->lastuse + VAR_4->linger;
  if (FUNC_5(VAR_5, VAR_4->expires))
   VAR_4->expires = VAR_5;
  VAR_5 = VAR_4->expires;
  if (VAR_4->opt && VAR_4->share == VAR_0) {
   struct ipv6_txoptions *VAR_6 = VAR_4->opt;
   VAR_4->opt = ((void*)0);
   FUNC_1(VAR_6);
  }
  if (!FUNC_6(&VAR_1) ||
      FUNC_5(VAR_1.expires, VAR_5))
   FUNC_2(&VAR_1, VAR_5);
 }
 FUNC_4(&VAR_2);
}
