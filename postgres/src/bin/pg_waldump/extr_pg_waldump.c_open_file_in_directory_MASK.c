
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5, const char *VAR_6)
{
 int VAR_7 = -1;
 char VAR_8[VAR_1];

 FUNC_0(VAR_5 != ((void*)0));

 FUNC_3(VAR_8, VAR_1, "%s/%s", VAR_5, VAR_6);
 VAR_7 = FUNC_2(VAR_8, VAR_2 | VAR_3, 0);

 if (VAR_7 < 0 && VAR_4 != VAR_0)
  FUNC_1("could not open file \"%s\": %s",
     VAR_6, FUNC_4(VAR_4));
 return VAR_7;
}
