
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {int dummy; } ;
struct nscookie {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (struct nsinfo*,struct nscookie*) ;
 int FUNC_6 (struct nscookie*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, const char *VAR_2, struct nsinfo *VAR_3)
{
 int VAR_4 = -1;
 char *VAR_5 = ((void*)0);
 size_t VAR_6;
 FILE *VAR_7, *VAR_8;
 struct nscookie VAR_9;

 FUNC_5(VAR_3, &VAR_9);
 VAR_7 = FUNC_1(VAR_1, "r");
 FUNC_6(&VAR_9);
 if (VAR_7 == ((void*)0))
  goto out;

 VAR_8 = FUNC_1(VAR_2, "w");
 if (VAR_8 == ((void*)0))
  goto out_fclose_from;

 while (FUNC_4(&VAR_5, &VAR_6, VAR_7) > 0)
  if (FUNC_2(VAR_5, VAR_8) == VAR_0)
   goto out_fclose_to;
 VAR_4 = 0;
out_fclose_to:
 FUNC_0(VAR_8);
 FUNC_3(VAR_5);
out_fclose_from:
 FUNC_0(VAR_7);
out:
 return VAR_4;
}
