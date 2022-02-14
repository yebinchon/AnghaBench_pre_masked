
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(Oid VAR_5, bool VAR_6)
{

 if (FUNC_0())
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_3("cannot set parameter \"%s\" within security-restricted operation",
      "role")));
 VAR_0 = VAR_5;
 if (VAR_6)
  VAR_4 |= VAR_3;
 else
  VAR_4 &= ~VAR_3;
}
