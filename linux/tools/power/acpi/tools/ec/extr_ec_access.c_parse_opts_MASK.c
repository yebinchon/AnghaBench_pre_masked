
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 char* VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (char*,int *,int) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

void FUNC_6(int VAR_10, char *VAR_11[])
{
 int VAR_12;

 while ((VAR_12 = FUNC_2(VAR_10, VAR_11, "rs:b:w:v:h")) != -1) {

  switch (VAR_12) {
  case 'r':
   if (VAR_5 != -1)
    FUNC_5(VAR_11[0], VAR_1);
   VAR_5 = 1;
   break;
  case 's':
   if (VAR_5 != -1 && VAR_5 != 1)
    FUNC_5(VAR_11[0], VAR_1);

   VAR_6 = FUNC_0(VAR_3);
   if (VAR_6 <= 0) {
    VAR_6 = 0;
    FUNC_5(VAR_11[0], VAR_1);
    FUNC_3("Bad sleep time: %s\n", VAR_3);
   }
   break;
  case 'b':
   if (VAR_5 != -1)
    FUNC_5(VAR_11[0], VAR_1);
   VAR_5 = 1;
   VAR_4 = FUNC_4(VAR_3, ((void*)0), 16);
   break;
  case 'w':
   if (VAR_5 != -1)
    FUNC_5(VAR_11[0], VAR_1);
   VAR_5 = 0;
   VAR_8 = FUNC_4(VAR_3, ((void*)0), 16);
   break;
  case 'v':
   VAR_9 = FUNC_4(VAR_3, ((void*)0), 16);
   break;
  case 'h':
   FUNC_5(VAR_11[0], VAR_2);
  default:
   FUNC_1(VAR_7, "Unknown option!\n");
   FUNC_5(VAR_11[0], VAR_1);
  }
 }
 if (VAR_5 == 0) {
  if (VAR_8 < 0 ||
      VAR_8 >= VAR_0) {
   FUNC_1(VAR_7, "Wrong byte offset 0x%.2lx, valid: "
    "[0-0x%.2lx]\n",
    VAR_8, VAR_0 - 1);
   FUNC_5(VAR_11[0], VAR_1);
  }
  if (VAR_9 < 0 ||
      VAR_9 >= 255) {
   FUNC_1(VAR_7, "Wrong byte offset 0x%.2lx, valid:"
    "[0-0xff]\n", VAR_8);
   FUNC_5(VAR_11[0], VAR_1);
  }
 }
 if (VAR_5 == 1 && VAR_4 != -1) {
  if (VAR_4 < -1 ||
      VAR_4 >= VAR_0) {
   FUNC_1(VAR_7, "Wrong byte offset 0x%.2x, valid: "
    "[0-0x%.2lx]\n",
    VAR_4, VAR_0 - 1);
   FUNC_5(VAR_11[0], VAR_1);
  }
 }

}
