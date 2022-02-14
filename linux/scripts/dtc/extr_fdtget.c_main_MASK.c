
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_info {int size; int default_val; int mode; int type; } ;
typedef int disp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct display_info*,char*,char**,int,int) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (struct display_info*,char,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int*) ;

int FUNC_5(int VAR_5, char *VAR_6[])
{
 char *VAR_7 = ((void*)0);
 struct display_info VAR_8;
 int VAR_9 = 2;


 FUNC_2(&VAR_8, '\0', sizeof(VAR_8));
 VAR_8.size = -1;
 VAR_8.mode = VAR_2;
 for (;;) {
  int VAR_10 = FUNC_1(VAR_5, VAR_6, "d:hlpt:");
  if (VAR_10 == -1)
   break;

  switch (VAR_10) {
  case 'h':
  case '?':
   FUNC_3(((void*)0));

  case 't':
   if (FUNC_4(VAR_3, &VAR_8.type,
     &VAR_8.size))
    FUNC_3("Invalid type string");
   break;

  case 'p':
   VAR_8.mode = VAR_0;
   VAR_9 = 1;
   break;

  case 'l':
   VAR_8.mode = VAR_1;
   VAR_9 = 1;
   break;

  case 'd':
   VAR_8.default_val = VAR_3;
   break;
  }
 }

 if (VAR_4 < VAR_5)
  VAR_7 = VAR_6[VAR_4++];
 if (!VAR_7)
  FUNC_3("Missing filename");

 VAR_6 += VAR_4;
 VAR_5 -= VAR_4;


 if (!VAR_5)
  return 0;


 if (VAR_9 == 2 && (VAR_5 % 2))
  FUNC_3("Must have an even number of arguments");

 if (FUNC_0(&VAR_8, VAR_7, VAR_6, VAR_5, VAR_9))
  return 1;
 return 0;
}
