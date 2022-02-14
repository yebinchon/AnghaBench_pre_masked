
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*) ;
 char* VAR_2 ;
 int * VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (void*,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(int VAR_10, char *VAR_11[])
{
 while (1)
 {
  int VAR_12;

  VAR_12 = FUNC_3(VAR_10, VAR_11, "abhi:ln:s:");
  if (VAR_12 == -1)
   break;

  switch (VAR_12) {
   case 'a':
    VAR_6 = 1;
    VAR_3 = ((void*)0);
    VAR_5 = 0;
    break;
   case 'b':
    VAR_8 = 1;
    break;
   case 'h':
    FUNC_5(VAR_1);
    break;
   case 'i':
    VAR_2 = VAR_4;
    break;
   case 'l':
    VAR_5 = 1;
    VAR_6 = 0;
    VAR_3 = ((void*)0);
    break;
   case 'n':
    VAR_3 = VAR_4;
    VAR_6 = 0;
    VAR_5 = 0;
    break;
   case 's':
    VAR_9 = FUNC_4(VAR_4, ((void*)0), 0);
    break;
   default:
    FUNC_5(VAR_0);
    break;
  }
 }

 if (!VAR_2) {
  FUNC_2(VAR_7, "ERROR: No input file (-i <file>) given!\n");
  FUNC_0(VAR_0);
 }

 if (!FUNC_1(VAR_2)) {
  FUNC_2(VAR_7, "ERROR: %s does not exist\n", VAR_2);
  FUNC_0(VAR_0);
 }

 if (!VAR_6 && !VAR_3 && !VAR_5) {
  FUNC_2(VAR_7,
   "ERROR: either -l, -a or -n <key name> is required!\n");
  FUNC_0(VAR_0);
 }
}
