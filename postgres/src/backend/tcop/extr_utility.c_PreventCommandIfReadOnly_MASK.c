
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;

void
FUNC_3(const char *VAR_3)
{
 if (VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),

     FUNC_2("cannot execute %s in a read-only transaction",
      VAR_3)));
}
