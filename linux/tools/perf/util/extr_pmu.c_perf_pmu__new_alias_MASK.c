
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*,char*,char*,int *,char*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_1, char *VAR_2, char *VAR_3, FILE *VAR_4)
{
 char VAR_5[256];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, 1, sizeof(VAR_5), VAR_4);
 if (VAR_6 == 0)
  return -VAR_0;

 VAR_5[VAR_6] = 0;


 FUNC_2(VAR_5);

 return FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0), VAR_5, ((void*)0), ((void*)0), ((void*)0),
         ((void*)0), ((void*)0), ((void*)0));
}
