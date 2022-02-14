
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned char,char*) ;
 char FUNC_1 () ;
 unsigned char FUNC_2 (char) ;
 int FUNC_3 (char) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

char *
FUNC_4 (void)
{
  char *VAR_4 = &VAR_1[0];
  unsigned char VAR_5;
  unsigned char VAR_6;
  int VAR_7;
  char VAR_8;

  while (1)
 {

   while ((VAR_8 = FUNC_1 ()) != '$')
  ;

 retry:
   VAR_5 = 0;
   VAR_6 = -1;
   VAR_7 = 0;


   while (VAR_7 < VAR_0 - 1)
  {
    VAR_8 = FUNC_1 ();
    if (VAR_8 == '$')
   goto retry;
    if (VAR_8 == '#')
   break;
    VAR_5 = VAR_5 + VAR_8;
    VAR_4[VAR_7] = VAR_8;
    VAR_7 = VAR_7 + 1;
  }
   VAR_4[VAR_7] = 0;

   if (VAR_8 == '#')
  {
    VAR_8 = FUNC_1 ();
    VAR_6 = FUNC_2 (VAR_8) << 4;
    VAR_8 = FUNC_1 ();
    VAR_6 += FUNC_2 (VAR_8);

    if (VAR_5 != VAR_6)
   {
     if (VAR_2)
    {
      FUNC_0 (VAR_3,
         "bad checksum.  My count = 0x%hhx, sent=0x%hhx. buf=%s\n",
         VAR_5, VAR_6, VAR_4);
    }
     FUNC_3 ('-');
   }
    else
   {
     FUNC_3 ('+');


     if (VAR_4[2] == ':')
    {
      FUNC_3 (VAR_4[0]);
      FUNC_3 (VAR_4[1]);

      return &VAR_4[3];
    }

     return &VAR_4[0];
   }
  }
 }
}
