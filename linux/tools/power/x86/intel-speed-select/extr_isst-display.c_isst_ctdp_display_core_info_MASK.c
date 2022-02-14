
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int header ;
typedef int FILE ;


 int FUNC_0 (int *,int,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,unsigned int) ;

void FUNC_4(int VAR_0, FILE *VAR_1, char *VAR_2,
     unsigned int VAR_3)
{
 char VAR_4[256];
 char VAR_5[256];

 FUNC_3(VAR_4, sizeof(VAR_4), "package-%d",
   FUNC_2(VAR_0));
 FUNC_0(VAR_1, 1, VAR_4, ((void*)0));
 FUNC_3(VAR_4, sizeof(VAR_4), "die-%d", FUNC_1(VAR_0));
 FUNC_0(VAR_1, 2, VAR_4, ((void*)0));
 FUNC_3(VAR_4, sizeof(VAR_4), "cpu-%d", VAR_0);
 FUNC_0(VAR_1, 3, VAR_4, ((void*)0));

 FUNC_3(VAR_5, sizeof(VAR_5), "%u", VAR_3);
 FUNC_0(VAR_1, 4, VAR_2, VAR_5);

 FUNC_0(VAR_1, 1, ((void*)0), ((void*)0));
}
