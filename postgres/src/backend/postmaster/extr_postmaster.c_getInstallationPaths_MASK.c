
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int * FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char const*,int ) ;
 scalar_t__ FUNC_8 (char const*,char*,int ,int ) ;
 int FUNC_9 (int ,char const*) ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_10(const char *VAR_6)
{
 DIR *VAR_7;


 if (FUNC_7(VAR_6, VAR_3) < 0)
  FUNC_2(VAR_1, "%s: could not locate my own executable path", VAR_6);
 FUNC_9(VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == ((void*)0))
  FUNC_3(VAR_0,
    (FUNC_4(),
     FUNC_6("could not open directory \"%s\": %m",
      VAR_4),
     FUNC_5("This may indicate an incomplete PostgreSQL installation, or that the file \"%s\" has been moved away from its proper location.",
       VAR_3)));
 FUNC_1(VAR_7);





}
