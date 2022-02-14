
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_flowlabel {unsigned long lastuse; unsigned long linger; unsigned long expires; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ip6_flowlabel *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 VAR_4 = FUNC_0(VAR_4);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_5);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_1);
 VAR_3->lastuse = VAR_2;
 if (FUNC_3(VAR_3->linger, VAR_4))
  VAR_3->linger = VAR_4;
 if (FUNC_3(VAR_5, VAR_3->linger))
  VAR_5 = VAR_3->linger;
 if (FUNC_3(VAR_3->expires, VAR_3->lastuse + VAR_5))
  VAR_3->expires = VAR_3->lastuse + VAR_5;
 FUNC_2(&VAR_1);

 return 0;
}
