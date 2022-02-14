
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_key_deferred {unsigned long timeout; int work; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct static_key_deferred*) ;
 int VAR_0 ;

void FUNC_2(struct static_key_deferred *VAR_1,
  unsigned long VAR_2)
{
 FUNC_1(VAR_1);
 VAR_1->timeout = VAR_2;
 FUNC_0(&VAR_1->work, VAR_0);
}
