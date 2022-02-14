
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; int member_3; int * member_2; int member_1; } ;


 int FUNC_0 () ;
 double FUNC_1 (int ) ;
 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char) ;
 int FUNC_3 (int,char**,char*,struct option*,int *) ;
 int VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 int FUNC_4 (char*,char*) ;
 double VAR_9 ;
 int FUNC_5 (char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_6(int VAR_13, char **VAR_14)
{
 char *VAR_15 = "hbm_out_kern.o";
 int VAR_16;
 int VAR_17 = 1;
 char *VAR_18 = "iodln:r:st:wh";
 struct option VAR_19[] = {
  {"no_cn", 0, ((void*)0), 1},
  {"edt", 0, ((void*)0), 2},
  {((void*)0), 0, ((void*)0), 0}
 };

 while ((VAR_16 = FUNC_3(VAR_13, VAR_14, VAR_18, VAR_19, ((void*)0))) != -1) {
  switch (VAR_16) {
  case 1:
   VAR_5 = 1;
   break;
  case 2:
   VAR_15 = "hbm_edt_kern.o";
   VAR_2 = 1;
   break;
  case'o':
   break;
  case 'd':
   VAR_0 = 1;
   break;
  case 'l':
   VAR_3 = 1;
   break;
  case 'n':
   VAR_17 = FUNC_1(VAR_6);
   break;
  case 'r':
   VAR_4 = FUNC_1(VAR_6) * 1.024;
   VAR_9 = VAR_4;
   break;
  case 's':
   VAR_10 = 1;
   break;
  case 't':
   VAR_1 = FUNC_1(VAR_6);
   break;
  case 'w':
   VAR_12 = 1;
   break;
  case '?':
   if (VAR_8 == 'n' || VAR_8 == 'r' || VAR_8 == 't')
    FUNC_2(VAR_11,
     "Option -%c requires an argument.\n\n",
     VAR_8);
  case 'h':

  default:
   FUNC_0();
   return 0;
  }
 }

 if (VAR_7 < VAR_13)
  VAR_15 = VAR_14[VAR_7];
 FUNC_4("HBM prog: %s\n", VAR_15 != ((void*)0) ? VAR_15 : "NULL");

 return FUNC_5(VAR_15, VAR_17);
}
