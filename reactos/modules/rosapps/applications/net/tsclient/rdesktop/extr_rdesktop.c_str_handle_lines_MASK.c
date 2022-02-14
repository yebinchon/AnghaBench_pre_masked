
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* str_handle_lines_t ) (int *,char*,void*) ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int VAR_1 ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;

BOOL
FUNC_6(RDPCLIENT * VAR_2, const char *VAR_3, char **VAR_4, str_handle_lines_t VAR_5, void *VAR_6)
{
 char *VAR_7, *VAR_8;
 char *VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 size_t VAR_12 = 0;
 BOOL VAR_13 = VAR_1;


 VAR_10 = FUNC_2(VAR_3);
 if (*VAR_4)
  VAR_12 = FUNC_2(*VAR_4);
 VAR_11 = VAR_12 + VAR_10 + 1;
 VAR_7 = (char *) FUNC_5(VAR_11);
 VAR_7[0] = '\0';
 if (*VAR_4)
  FUNC_0(VAR_7, *VAR_4, VAR_11);
 FUNC_3(VAR_7, VAR_3, VAR_10);
 VAR_8 = VAR_7;

 while (1)
 {
  char *VAR_14 = FUNC_1(VAR_8, '\n');
  if (VAR_14)
  {
   *VAR_14 = '\0';
   if (!VAR_5(VAR_2, VAR_8, VAR_6))
   {
    VAR_8 = VAR_14 + 1;
    VAR_13 = VAR_0;
    break;
   }
   VAR_8 = VAR_14 + 1;
  }
  else
  {
   break;

  }
 }


 VAR_9 = *VAR_4;
 VAR_12 = VAR_7 + VAR_11 - VAR_8;
 *VAR_4 = (char *) FUNC_5(VAR_12);
 FUNC_0((*VAR_4), VAR_8, VAR_12);
 FUNC_4(VAR_9);

 FUNC_4(VAR_7);
 return VAR_13;
}
