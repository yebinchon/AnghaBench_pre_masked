
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_elem {int dummy; } ;
struct ip_set_ext {int timeout; } ;
struct ip_set {int dummy; } ;


 scalar_t__ FUNC_0 (struct ip_set*) ;
 scalar_t__ FUNC_1 (struct ip_set*) ;
 scalar_t__ FUNC_2 (struct ip_set*) ;
 scalar_t__ FUNC_3 (struct ip_set*) ;
 int FUNC_4 (struct set_elem*,struct ip_set*) ;
 int FUNC_5 (struct set_elem*,struct ip_set*) ;
 int FUNC_6 (struct set_elem*,struct ip_set*) ;
 int FUNC_7 (struct set_elem*,struct ip_set*) ;
 int FUNC_8 (struct ip_set*,int ,struct ip_set_ext const*) ;
 int FUNC_9 (int ,struct ip_set_ext const*) ;
 int FUNC_10 (int ,struct ip_set_ext const*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void
FUNC_12(struct ip_set *VAR_0, const struct ip_set_ext *VAR_1,
    struct set_elem *VAR_2)
{
 if (FUNC_1(VAR_0))
  FUNC_9(FUNC_5(VAR_2, VAR_0), VAR_1);
 if (FUNC_0(VAR_0))
  FUNC_8(VAR_0, FUNC_4(VAR_2, VAR_0), VAR_1);
 if (FUNC_2(VAR_0))
  FUNC_10(FUNC_6(VAR_2, VAR_0), VAR_1);

 if (FUNC_3(VAR_0))
  FUNC_11(FUNC_7(VAR_2, VAR_0), VAR_1->timeout);
}
