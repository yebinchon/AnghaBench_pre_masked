
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct dso {int symbols; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (char*,int *) ;
 struct symbol* FUNC_6 (int ,int ,int ,int ,char*) ;
 int FUNC_7 (int *,struct symbol*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, struct dso *VAR_3)
{
 char *VAR_4 = ((void*)0);
 size_t VAR_5;
 FILE *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_2(VAR_2, "r");
 if (VAR_6 == ((void*)0))
  goto out_failure;

 while (!FUNC_1(VAR_6)) {
  u64 VAR_8, VAR_9;
  struct symbol *VAR_10;
  int VAR_11, VAR_12;

  VAR_11 = FUNC_4(&VAR_4, &VAR_5, VAR_6);
  if (VAR_11 < 0)
   break;

  if (!VAR_4)
   goto out_failure;

  VAR_4[--VAR_11] = '\0';

  VAR_12 = FUNC_5(VAR_4, &VAR_8);

  VAR_12++;
  if (VAR_12 + 2 >= VAR_11)
   continue;

  VAR_12 += FUNC_5(VAR_4 + VAR_12, &VAR_9);

  VAR_12++;
  if (VAR_12 + 2 >= VAR_11)
   continue;

  VAR_10 = FUNC_6(VAR_8, VAR_9, VAR_0, VAR_1, VAR_4 + VAR_12);

  if (VAR_10 == ((void*)0))
   goto out_delete_line;

  FUNC_7(&VAR_3->symbols, VAR_10);
  VAR_7++;
 }

 FUNC_3(VAR_4);
 FUNC_0(VAR_6);

 return VAR_7;

out_delete_line:
 FUNC_3(VAR_4);
out_failure:
 return -1;
}
