
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char**,char*,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char**) ;

int FUNC_6(int VAR_5, char **VAR_6)
{
 char VAR_7[1024] = { 0 };
 bool VAR_8 = 1;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_1(VAR_2);


 while ((VAR_10 = FUNC_0(VAR_5, VAR_6, "hDq",
      VAR_3, &VAR_9)) != -1) {
  switch (VAR_10) {
  case 'D':
   VAR_1 = 1;
   break;
  case 'q':
   VAR_8 = 0;
   break;
  case 'h':
  default:
   FUNC_5(VAR_6);
   return VAR_0;
  }
 }
 if (VAR_4 >= VAR_5) {
  FUNC_5(VAR_6);
  FUNC_2("ERROR: Expected BPF_FILE argument after options\n");
  return VAR_0;
 }
 FUNC_3(VAR_7, sizeof(VAR_7), "%s", VAR_6[VAR_4]);

 return FUNC_4(VAR_7, VAR_8);
}
