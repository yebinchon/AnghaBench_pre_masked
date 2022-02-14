
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int Archive ;


 int * FUNC_0 (int *,char const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,char const*) ;
 int FUNC_3 (char*,char*,int) ;

PGresult *
FUNC_4(Archive *VAR_1, const char *VAR_2)
{
 PGresult *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 != 1)
  FUNC_2(FUNC_3("query returned %d row instead of one: %s",
        "query returned %d rows instead of one: %s",
        VAR_4),
     VAR_4, VAR_2);

 return VAR_3;
}
