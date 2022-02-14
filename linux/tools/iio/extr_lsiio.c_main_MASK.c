
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(int VAR_4, char **VAR_5)
{
 int VAR_6, VAR_7 = 0;

 while ((VAR_6 = FUNC_3(VAR_4, VAR_5, "v")) != VAR_0) {
  switch (VAR_6) {
  case 'v':
   VAR_3++;
   break;

  case '?':
  default:
   VAR_7++;
   break;
  }
 }
 if (VAR_7 || VAR_4 > VAR_1) {
  FUNC_2(VAR_2, "Usage: lsiio [options]...\n"
   "List industrial I/O devices\n"
   "  -v  Increase verbosity (may be given multiple times)\n");
  FUNC_1(1);
 }

 return FUNC_0();
}
