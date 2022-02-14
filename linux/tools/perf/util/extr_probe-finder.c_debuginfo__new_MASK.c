
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int dummy; } ;
struct debuginfo {int dummy; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct debuginfo* FUNC_0 (char const*) ;
 int* VAR_2 ;
 struct dso* FUNC_1 (char const*) ;
 int FUNC_2 (struct dso*) ;
 scalar_t__ FUNC_3 (struct dso*,int,char*,char*,int) ;

struct debuginfo *FUNC_4(const char *VAR_3)
{
 enum dso_binary_type *VAR_4;
 char VAR_5[VAR_1], VAR_6 = '\0';
 struct dso *VAR_7;
 struct debuginfo *VAR_8 = ((void*)0);


 VAR_7 = FUNC_1(VAR_3);
 if (!VAR_7)
  goto out;

 for (VAR_4 = VAR_2;
      !VAR_8 && *VAR_4 != VAR_0;
      VAR_4++) {
  if (FUNC_3(VAR_7, *VAR_4, &VAR_6,
         VAR_5, VAR_1) < 0)
   continue;
  VAR_8 = FUNC_0(VAR_5);
 }
 FUNC_2(VAR_7);

out:

 return VAR_8 ? : FUNC_0(VAR_3);
}
