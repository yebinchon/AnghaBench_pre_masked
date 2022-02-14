
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Acl ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(const Acl *VAR_4)
{
 if (FUNC_0(VAR_4) != VAR_0)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_1),
     FUNC_5("ACL array contains wrong data type")));
 if (FUNC_2(VAR_4) != 1)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_1),
     FUNC_5("ACL arrays must be one-dimensional")));
 if (FUNC_1(VAR_4))
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("ACL arrays must not contain null values")));
}
