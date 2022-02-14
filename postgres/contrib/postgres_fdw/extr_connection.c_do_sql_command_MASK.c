
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int *,char const*) ;
 int FUNC_4 (int ,int *,int *,int,char const*) ;

__attribute__((used)) static void
FUNC_5(PGconn *VAR_2, const char *VAR_3)
{
 PGresult *VAR_4;

 if (!FUNC_2(VAR_2, VAR_3))
  FUNC_4(VAR_0, ((void*)0), VAR_2, 0, VAR_3);
 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (FUNC_1(VAR_4) != VAR_1)
  FUNC_4(VAR_0, VAR_4, VAR_2, 1, VAR_3);
 FUNC_0(VAR_4);
}
