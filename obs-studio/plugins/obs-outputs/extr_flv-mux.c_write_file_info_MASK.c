
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char*,double) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int,int,int *) ;

void FUNC_3(FILE *VAR_2, int64_t VAR_3, int64_t VAR_4)
{
 char VAR_5[64];
 char *VAR_6 = VAR_5;
 char *VAR_7 = VAR_6 + sizeof(VAR_5);

 FUNC_1(VAR_2, VAR_0, VAR_1);

 FUNC_0(&VAR_6, VAR_7, "duration", (double)VAR_3 / 1000.0);
 FUNC_0(&VAR_6, VAR_7, "fileSize", (double)VAR_4);

 FUNC_2(VAR_5, 1, VAR_6 - VAR_5, VAR_2);
}
