
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char**,char*) ;
 void* VAR_2 ;
 int * VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(int VAR_10, char *VAR_11[])
{
 while (1) {
  int VAR_12;

  VAR_12 = FUNC_1(VAR_10, VAR_11, "abd:hln:o");
  if (VAR_12 == -1)
   break;

  switch (VAR_12) {
  case 'a':
   VAR_7 = 1;
   VAR_3 = ((void*)0);
   VAR_5 = 0;
   break;
  case 'b':
   VAR_9 = 1;
   break;
  case 'd':
   VAR_2 = VAR_4;
   break;
  case 'h':
   FUNC_2(VAR_1);
   break;
  case 'l':
   VAR_5 = 1;
   VAR_7 = 0;
   VAR_3 = ((void*)0);
   break;
  case 'n':
   VAR_3 = VAR_4;
   VAR_7 = 0;
   VAR_5 = 0;
   break;
  case 'o':
   VAR_6 = 1;
   break;
  default:
   FUNC_2(VAR_0);
   break;
  }
 }

 if (!VAR_2) {
  FUNC_0(VAR_8, "ERROR: No input file (-d <file>) given!\n");
  FUNC_2(VAR_0);
 }

 if (!VAR_7 && !VAR_3 && !VAR_5) {
  FUNC_0(VAR_8,
   "ERROR: either -l, -a or -n <key name> is required!\n");
  FUNC_2(VAR_0);
 }
}
