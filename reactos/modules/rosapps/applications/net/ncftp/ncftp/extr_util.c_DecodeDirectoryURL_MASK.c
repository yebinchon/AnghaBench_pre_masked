
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LineListPtr ;
typedef int FTPCIPtr ;


 int FUNC_0 (int const,char*,int ,char*,size_t,int *,int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*,char) ;
 char* FUNC_4 (char*,char) ;

int
FUNC_5(
 const FTPCIPtr VAR_0,
 char *VAR_1,
 LineListPtr VAR_2,
 char *VAR_3,
 size_t VAR_4
)
{
 int VAR_5;
 char VAR_6[256];
 char *VAR_7;
 VAR_7 = FUNC_4(VAR_1, '/');
 if ((VAR_7 != ((void*)0)) && (VAR_7[1] != '\0') && (FUNC_3(VAR_7, '.') == ((void*)0))) {

  (void) FUNC_2(VAR_6, VAR_1);
  (void) FUNC_1(VAR_6, "/");
  VAR_1 = VAR_6;
 }
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), ((void*)0));
 return (VAR_5);
}
