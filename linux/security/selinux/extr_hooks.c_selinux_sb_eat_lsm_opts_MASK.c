
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,char**) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,void**) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(char *VAR_3, void **VAR_4)
{
 char *VAR_5 = VAR_3;
 char *VAR_6 = VAR_3;
 bool VAR_7 = 1;
 int VAR_8;

 while (1) {
  int VAR_9 = FUNC_4(VAR_5);
  int VAR_10;
  char *VAR_11 = ((void*)0);

  VAR_10 = FUNC_2(VAR_5, VAR_9, &VAR_11);

  if (VAR_10 != VAR_2) {
   char *VAR_12, *VAR_13;


   if (VAR_11) {
    for (VAR_12 = VAR_13 = VAR_11; VAR_12 < VAR_5 + VAR_9; VAR_12++) {
     char VAR_14 = *VAR_12;
     if (VAR_14 != '"')
      *VAR_13++ = VAR_14;
    }
    VAR_11 = FUNC_1(VAR_11, VAR_13 - VAR_11, VAR_1);
    if (!VAR_11) {
     VAR_8 = -VAR_0;
     goto free_opt;
    }
   }
   VAR_8 = FUNC_5(VAR_10, VAR_11, VAR_4);
   if (FUNC_7(VAR_8)) {
    FUNC_0(VAR_11);
    goto free_opt;
   }
  } else {
   if (!VAR_7) {
    VAR_5--;
    VAR_9++;
   }
   if (VAR_6 != VAR_5)
    FUNC_3(VAR_6, VAR_5, VAR_9);
   VAR_6 += VAR_9;
   VAR_7 = 0;
  }
  if (!VAR_5[VAR_9])
   break;
  VAR_5 += VAR_9 + 1;
 }
 *VAR_6 = '\0';
 return 0;

free_opt:
 if (*VAR_4) {
  FUNC_6(*VAR_4);
  *VAR_4 = ((void*)0);
 }
 return VAR_8;
}
