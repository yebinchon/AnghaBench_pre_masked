
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

char *
FUNC_8(const char *VAR_4,
       const char *VAR_5)
{
 char VAR_6[VAR_2];
 char *VAR_7;
 if (FUNC_7(VAR_4, "abcdefghijklmnopqrstuvwxyz0123456789_") != FUNC_6(VAR_4))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid text search configuration file name \"%s\"",
      VAR_4)));

 FUNC_3(VAR_3, VAR_6);
 VAR_7 = FUNC_4(VAR_2);
 FUNC_5(VAR_7, VAR_2, "%s/tsearch_data/%s.%s",
    VAR_6, VAR_4, VAR_5);

 return VAR_7;
}
