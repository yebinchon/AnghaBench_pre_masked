
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,int,char**) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int,char**) ;
 int FUNC_4 (char*) ;
 unsigned long FUNC_5 (char*,char**,int) ;
 char* FUNC_6 (char*,int,char**) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char const*,size_t) ;

__attribute__((used)) static char *FUNC_9(const char *VAR_1, size_t VAR_2, int VAR_3, char *VAR_4[])
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11 = 0;
 char *VAR_12[VAR_0];
 int VAR_13 = 0;
 int VAR_14;
 unsigned long VAR_15;

 VAR_5 = FUNC_8(VAR_1, VAR_2);






 VAR_15 = FUNC_5(VAR_5, &VAR_8, 10);
 if (!*VAR_8 && VAR_15 > 0 && VAR_15 <= VAR_3) {
  VAR_7 = FUNC_7(VAR_4[VAR_15 - 1]);
  goto free_tmp;
 }

 VAR_9 = VAR_10 = VAR_5;
 while (*VAR_10) {
  if (VAR_13 == 0 && *VAR_10 == ',') {
   *VAR_10 = 0;
   if (VAR_11 >= VAR_0)
    FUNC_4("too many function arguments");
   VAR_12[VAR_11++] = VAR_9;
   VAR_9 = VAR_10 + 1;
  } else if (*VAR_10 == '(') {
   VAR_13++;
  } else if (*VAR_10 == ')') {
   VAR_13--;
  }

  VAR_10++;
 }
 VAR_12[VAR_11++] = VAR_9;







 VAR_6 = FUNC_1(VAR_12[0], VAR_3, VAR_4);
 VAR_11--;
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  VAR_12[VAR_14] = FUNC_1(VAR_12[VAR_14 + 1],
            VAR_3, VAR_4);


 VAR_7 = FUNC_6(VAR_6, VAR_11, VAR_12);
 if (VAR_7)
  goto free;


 VAR_7 = FUNC_3(VAR_6, VAR_11, VAR_12);
 if (VAR_7)
  goto free;


 if (VAR_11 == 0) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7)
   goto free;
 }

 VAR_7 = FUNC_7("");
free:
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  FUNC_2(VAR_12[VAR_14]);
 FUNC_2(VAR_6);
free_tmp:
 FUNC_2(VAR_5);

 return VAR_7;
}
