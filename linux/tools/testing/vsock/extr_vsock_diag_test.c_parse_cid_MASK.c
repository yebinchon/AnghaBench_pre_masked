
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_2 ;
 unsigned long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static unsigned int FUNC_3(const char *VAR_3)
{
 char *VAR_4 = ((void*)0);
 unsigned long int VAR_5;

 VAR_1 = 0;
 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_1 || *VAR_4 != '\0') {
  FUNC_1(VAR_2, "malformed CID \"%s\"\n", VAR_3);
  FUNC_0(VAR_0);
 }
 return VAR_5;
}
