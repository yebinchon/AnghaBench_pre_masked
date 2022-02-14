
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct key {scalar_t__ revoked_at; int sem; TYPE_1__* type; int flags; } ;
struct TYPE_2__ {int (* revoke ) (struct key*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct key*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct key*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct key *VAR_2)
{
 time64_t VAR_3;

 FUNC_1(VAR_2);






 FUNC_0(&VAR_2->sem, 1);
 if (!FUNC_5(VAR_0, &VAR_2->flags) &&
     VAR_2->type->revoke)
  VAR_2->type->revoke(VAR_2);


 VAR_3 = FUNC_3();
 if (VAR_2->revoked_at == 0 || VAR_2->revoked_at > VAR_3) {
  VAR_2->revoked_at = VAR_3;
  FUNC_2(VAR_2->revoked_at + VAR_1);
 }

 FUNC_6(&VAR_2->sem);
}
