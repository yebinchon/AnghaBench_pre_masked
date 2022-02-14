
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuild_id ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, FILE *VAR_3)
{
 char VAR_4[VAR_1];
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (VAR_5 != sizeof(VAR_4))
  return VAR_5 < 0 ? VAR_5 : -VAR_0;

 return FUNC_1(VAR_3, "%s\n", VAR_4);
}
