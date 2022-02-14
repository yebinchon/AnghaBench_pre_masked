
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(int VAR_8, char *VAR_9[])
{
    int VAR_10;

    VAR_7 = VAR_9[0];

    VAR_4 = 0;
    while (1) {
 VAR_10 = FUNC_1(VAR_8, VAR_9, "hn:o:t:");
 if (VAR_10 == -1)
     break;

 switch (VAR_10) {
     case 'h':
  FUNC_4();
  break;

     case 'n':
  VAR_2 = VAR_3;
  break;

     case 'o':
  VAR_6 = VAR_3;
  break;

     case 't':
  if (!FUNC_3(VAR_3, "mono"))
      VAR_1 = 129;
  else if (!FUNC_3(VAR_3, "vga16"))
      VAR_1 = 128;
  else if (!FUNC_3(VAR_3, "clut224"))
      VAR_1 = 131;
  else if (!FUNC_3(VAR_3, "gray256"))
      VAR_1 = 130;
  else
      FUNC_4();
  break;

     default:
  FUNC_4();
  break;
 }
    }
    if (VAR_5 != VAR_8-1)
 FUNC_4();

    VAR_0 = VAR_9[VAR_5];

    FUNC_2();
    switch (VAR_1) {
 case 129:
     FUNC_7();
     break;

 case 128:
     FUNC_8();
     break;

 case 131:
     FUNC_5();
     break;

 case 130:
     FUNC_6();
     break;
    }
    FUNC_0(0);
}
