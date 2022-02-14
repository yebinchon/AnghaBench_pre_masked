
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char*,int,int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct strlist*,char*) ;
 int FUNC_9 (struct strlist*) ;
 struct strlist* FUNC_10 (int *,int *) ;

struct strlist *FUNC_11(int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 FILE *VAR_5;
 char VAR_6[VAR_0];
 char *VAR_7;
 struct strlist *VAR_8;

 if (VAR_1 < 0)
  return ((void*)0);

 VAR_8 = FUNC_10(((void*)0), ((void*)0));
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < 0)
  goto out_free_sl;

 VAR_5 = FUNC_3(VAR_4, "r");
 if (!VAR_5)
  goto out_close_fddup;

 while (!FUNC_4(VAR_5)) {
  VAR_7 = FUNC_5(VAR_6, VAR_0, VAR_5);
  if (!VAR_7)
   break;

  VAR_3 = FUNC_7(VAR_7) - 1;
  if (VAR_7[VAR_3] == '\n')
   VAR_7[VAR_3] = '\0';
  VAR_2 = FUNC_8(VAR_8, VAR_6);
  if (VAR_2 < 0) {
   FUNC_6("strlist__add failed (%d)\n", VAR_2);
   goto out_close_fp;
  }
 }
 FUNC_2(VAR_5);

 return VAR_8;

out_close_fp:
 FUNC_2(VAR_5);
 goto out_free_sl;
out_close_fddup:
 FUNC_0(VAR_4);
out_free_sl:
 FUNC_9(VAR_8);
 return ((void*)0);
}
