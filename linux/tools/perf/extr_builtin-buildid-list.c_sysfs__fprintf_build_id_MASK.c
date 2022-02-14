
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuild_id ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_2)
{
 char VAR_3[VAR_1];
 int VAR_4;

 VAR_4 = FUNC_1("/", VAR_3);
 if (VAR_4 != sizeof(VAR_3))
  return VAR_4 < 0 ? VAR_4 : -VAR_0;

 return FUNC_0(VAR_2, "%s\n", VAR_3);
}
