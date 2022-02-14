
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int,int *,char const**,int *,int *,int) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,char const*,...) ;
 int FUNC_10 (char*,char const*,int) ;
 char* FUNC_11 (int) ;

char *
FUNC_12(const char *VAR_2, size_t *VAR_3)
{
 PGresult *VAR_4;
 char *VAR_5;
 int VAR_6;
 const char *VAR_7[1];

 VAR_7[0] = VAR_2;
 VAR_4 = FUNC_1(VAR_1, "SELECT pg_read_binary_file($1)",
        1, ((void*)0), VAR_7, ((void*)0), ((void*)0), 1);

 if (FUNC_7(VAR_4) != VAR_0)
  FUNC_9("could not fetch remote file \"%s\": %s",
     VAR_2, FUNC_6(VAR_4));


 if (FUNC_5(VAR_4) != 1 || FUNC_2(VAR_4, 0, 0))
  FUNC_9("unexpected result set while fetching remote file \"%s\"",
     VAR_2);


 VAR_6 = FUNC_3(VAR_4, 0, 0);
 VAR_5 = FUNC_11(VAR_6 + 1);
 FUNC_8(VAR_5, FUNC_4(VAR_4, 0, 0), VAR_6);
 VAR_5[VAR_6] = '\0';

 FUNC_0(VAR_4);

 FUNC_10("fetched file \"%s\", length %d", VAR_2, VAR_6);

 if (VAR_3)
  *VAR_3 = VAR_6;
 return VAR_5;
}
