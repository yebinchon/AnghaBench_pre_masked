
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_info {int size; scalar_t__ oper; int auto_path; int verbose; int type; } ;
typedef int disp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct display_info*,char*,char**,int) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (struct display_info*,char,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int*) ;

int FUNC_5(int VAR_4, char *VAR_5[])
{
 struct display_info VAR_6;
 char *VAR_7 = ((void*)0);

 FUNC_2(&VAR_6, '\0', sizeof(VAR_6));
 VAR_6.size = -1;
 VAR_6.oper = VAR_1;
 for (;;) {
  int VAR_8 = FUNC_1(VAR_4, VAR_5, "chpt:v");
  if (VAR_8 == -1)
   break;
  switch (VAR_8) {
  case 'c':
   VAR_6.oper = VAR_0;
   break;
  case 'h':
  case '?':
   FUNC_3(((void*)0));
  case 'p':
   VAR_6.auto_path = 1;
   break;
  case 't':
   if (FUNC_4(VAR_2, &VAR_6.type,
     &VAR_6.size))
    FUNC_3("Invalid type string");
   break;

  case 'v':
   VAR_6.verbose = 1;
   break;
  }
 }

 if (VAR_3 < VAR_4)
  VAR_7 = VAR_5[VAR_3++];
 if (!VAR_7)
  FUNC_3("Missing filename");

 VAR_5 += VAR_3;
 VAR_4 -= VAR_3;

 if (VAR_6.oper == VAR_1) {
  if (VAR_4 < 1)
   FUNC_3("Missing node");
  if (VAR_4 < 2)
   FUNC_3("Missing property");
 }

 if (FUNC_0(&VAR_6, VAR_7, VAR_5, VAR_4))
  return 1;
 return 0;
}
