
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (char const*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static FILE *
FUNC_3(const char *VAR_3, const char *VAR_4)
{
 FILE *VAR_5;

 FUNC_0(VAR_2);
 FUNC_0(VAR_1);
 VAR_0 = 0;
 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0))
  FUNC_1("could not execute command \"%s\": %m", VAR_3);
 return VAR_5;
}
