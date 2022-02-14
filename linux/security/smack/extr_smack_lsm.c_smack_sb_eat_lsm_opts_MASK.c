
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,char**) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,char*,void**) ;
 int FUNC_5 (void*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(char *VAR_2, void **VAR_3)
{
 char *VAR_4 = VAR_2, *VAR_5 = VAR_2;
 bool VAR_6 = 1;

 while (1) {
  char *VAR_7 = FUNC_6(VAR_4, ',');
  int VAR_8, VAR_9, VAR_10;
  char *VAR_11 = ((void*)0);

  if (VAR_7)
   VAR_9 = VAR_7 - VAR_4;
  else
   VAR_9 = FUNC_7(VAR_4);

  VAR_8 = FUNC_2(VAR_4, VAR_9, &VAR_11);
  if (VAR_8 != VAR_1) {
   VAR_11 = FUNC_1(VAR_11, VAR_4 + VAR_9 - VAR_11, VAR_0);
   VAR_10 = FUNC_4(VAR_8, VAR_11, VAR_3);
   if (FUNC_8(VAR_10)) {
    FUNC_0(VAR_11);
    if (*VAR_3)
     FUNC_5(*VAR_3);
    *VAR_3 = ((void*)0);
    return VAR_10;
   }
  } else {
   if (!VAR_6) {
    VAR_4--;
    VAR_9++;
   }
   if (VAR_5 != VAR_4)
    FUNC_3(VAR_5, VAR_4, VAR_9);
   VAR_5 += VAR_9;
   VAR_6 = 0;
  }
  if (!VAR_4[VAR_9])
   break;
  VAR_4 += VAR_9 + 1;
 }
 *VAR_5 = '\0';
 return 0;
}
