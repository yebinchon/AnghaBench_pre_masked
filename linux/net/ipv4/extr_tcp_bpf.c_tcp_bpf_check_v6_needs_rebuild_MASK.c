
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_family; } ;
struct proto {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct proto* FUNC_1 (struct proto**) ;
 int FUNC_2 (struct proto**,struct proto*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_2 ;
 int FUNC_5 (int ,struct proto*) ;
 int VAR_3 ;
 struct proto* VAR_4 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_5, struct proto *VAR_6)
{
 if (VAR_5->sk_family == VAR_0 &&
     FUNC_6(VAR_6 != FUNC_1(&VAR_4))) {
  FUNC_3(&VAR_3);
  if (FUNC_0(VAR_6 != VAR_4)) {
   FUNC_5(VAR_2[VAR_1], VAR_6);
   FUNC_2(&VAR_4, VAR_6);
  }
  FUNC_4(&VAR_3);
 }
}
