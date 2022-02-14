
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
typedef int PGconn ;


 int * FUNC_0 (char const*,char const*,char const*,char const*,int,char const*,int,int,int) ;

PGconn *
FUNC_1(const char *VAR_0,
         const char *VAR_1, const char *VAR_2,
         const char *VAR_3, enum trivalue VAR_4,
         const char *VAR_5, bool VAR_6)
{
 PGconn *VAR_7;


 if (VAR_0)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5, VAR_6, 0, 0);


 VAR_7 = FUNC_0("postgres", VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, 1, 0);
 if (!VAR_7)
  VAR_7 = FUNC_0("template1", VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5, VAR_6, 0, 0);

 return VAR_7;
}
