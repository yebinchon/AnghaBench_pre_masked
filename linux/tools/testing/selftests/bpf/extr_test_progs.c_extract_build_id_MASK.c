
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char**,size_t*,int *) ;
 int FUNC_2 (char*,char*,size_t) ;
 int * FUNC_3 (char*,char*) ;

int FUNC_4(char *VAR_0, size_t VAR_1)
{
 FILE *VAR_2;
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;

 VAR_2 = FUNC_3("readelf -n ./urandom_read | grep 'Build ID'", "r");
 if (VAR_2 == ((void*)0))
  return -1;

 if (FUNC_1(&VAR_3, &VAR_4, VAR_2) == -1)
  goto err;
 FUNC_0(VAR_2);

 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 FUNC_2(VAR_0, VAR_3, VAR_4);
 VAR_0[VAR_4] = '\0';
 return 0;
err:
 FUNC_0(VAR_2);
 return -1;
}
