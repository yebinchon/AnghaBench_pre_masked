
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{
 PGresult *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (FUNC_3(VAR_3) != VAR_0)
  FUNC_4("error running query (%s) in source server: %s",
     VAR_2, FUNC_2(VAR_3));

 FUNC_0(VAR_3);
}
