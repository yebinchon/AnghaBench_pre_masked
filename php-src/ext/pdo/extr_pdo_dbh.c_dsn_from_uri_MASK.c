
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_stream ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,char*,size_t,int *) ;
 int * FUNC_2 (char*,char*,int ,int *) ;

__attribute__((used)) static char *FUNC_3(char *VAR_1, char *VAR_2, size_t VAR_3)
{
 php_stream *VAR_4;
 char *VAR_5 = ((void*)0);

 VAR_4 = FUNC_2(VAR_1, "rb", VAR_0, ((void*)0));
 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3, ((void*)0));
  FUNC_0(VAR_4);
 }
 return VAR_5;
}
