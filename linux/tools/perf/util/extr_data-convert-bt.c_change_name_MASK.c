
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = ((void*)0);
 size_t VAR_4;

 if (!VAR_0)
  VAR_0 = VAR_1;

 if (VAR_2 >= 10)
  goto out;





 if (VAR_2 < 0)
  VAR_4 = FUNC_3(VAR_0) + sizeof("_");
 else
  VAR_4 = FUNC_3(VAR_1) + sizeof("_dupl_X");

 VAR_3 = FUNC_1(VAR_4);
 if (!VAR_3)
  goto out;

 if (VAR_2 < 0)
  FUNC_2(VAR_3, VAR_4, "_%s", VAR_0);
 else
  FUNC_2(VAR_3, VAR_4, "%s_dupl_%d", VAR_1, VAR_2);

out:
 if (VAR_0 != VAR_1)
  FUNC_0(VAR_0);
 return VAR_3;
}
