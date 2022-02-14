
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trigger {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trigger*,int ) ;
 int FUNC_1 (struct trigger*) ;

__attribute__((used)) static inline void FUNC_2(struct trigger *VAR_2)
{
 if (!FUNC_1(VAR_2))
  return;
 FUNC_0(VAR_2, VAR_1);
 VAR_2->state = VAR_0;
}
