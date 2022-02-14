
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 size_t FUNC_2 (void*,int ,int,int *) ;

int FUNC_3(char *VAR_1, void *VAR_2, ssize_t VAR_3)
{
 FILE *VAR_4;
 size_t VAR_5;
 int VAR_6 = -1;

 VAR_4 = FUNC_1(VAR_1, "r");
 if (VAR_4 == ((void*)0))
  goto out;

 VAR_0 = 0;
 VAR_5 = FUNC_2(VAR_2, VAR_3, 1, VAR_4);
 if (VAR_5 != 1)
  goto close;

 VAR_6 = 0;

close:
 FUNC_0(VAR_4);
out:
 return VAR_6;
}
