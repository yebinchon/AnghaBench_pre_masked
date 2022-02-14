
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*,int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,int,int ,int ,int,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int ) ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 void* VAR_6 ;
 void* FUNC_10 (int ,int *,int) ;

int
FUNC_11(int VAR_7, char *VAR_8[])
{
 int VAR_9;
 int VAR_10=-1;
 int VAR_11=0, VAR_12=1;
 char *VAR_13 = ((void*)0);
 char *VAR_14;

 do {
  VAR_11 = FUNC_3(VAR_7, VAR_8, "hr:n:", VAR_4, ((void*)0));
  switch (VAR_11){
  case '?':
  case 'h':
   FUNC_8();
   VAR_12 = 0;
   break;
  case 'r':
   VAR_6 = FUNC_10(VAR_5, ((void*)0), 16);
   break;
  case 'n':
   VAR_10 = FUNC_10(VAR_5, ((void*)0), 10);
   break;
  case -1:
   VAR_12 = 0;
   break;
  }

 } while(VAR_12);

 VAR_9 = FUNC_7("/dev/mem", VAR_2);
 if (VAR_9 < 0) {
  FUNC_9 ("Couldn't open /dev/mem. Are you root?\n");
  FUNC_2(1);
 }

 VAR_13 = FUNC_5(VAR_13, 0x100000 - 0xc0000, VAR_3, VAR_1, VAR_9, 0xc0000);
 FUNC_0(VAR_9);

 for (VAR_14 = VAR_13; VAR_14 - VAR_13 < VAR_0; VAR_14+=16) {
  if (FUNC_4(VAR_14, "AMDK7PNOW!", 10) == 0) {
   FUNC_1(VAR_14, VAR_10);
   break;
  }
 }

 FUNC_6(VAR_13, VAR_0);
 return 0;
}
