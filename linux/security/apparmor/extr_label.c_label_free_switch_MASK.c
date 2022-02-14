
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aa_label*) ;
 scalar_t__ FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct aa_label*) ;
 int FUNC_5 (struct aa_label*) ;

__attribute__((used)) static void FUNC_6(struct aa_label *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0(FUNC_4(VAR_1));
 else if (FUNC_3(VAR_1))
  FUNC_1(FUNC_5(VAR_1));
 else
  FUNC_2(VAR_1);
}
