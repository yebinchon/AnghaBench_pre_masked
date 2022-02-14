
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(int VAR_9, char *VAR_10[])
{
 int VAR_11;
 VAR_4 = FUNC_1(VAR_10[0]);

 while ((VAR_11 = FUNC_2(VAR_9, VAR_10, "+lci:m:")) != -1) {
  switch (VAR_11) {
  case 'l':
   if (VAR_2)
    FUNC_3();
   VAR_2 = VAR_1;
   break;
  case 'i':

   if (VAR_2 && VAR_2 != VAR_5)
    FUNC_3();
   VAR_0 = FUNC_0(VAR_3);
   break;
  case 'm':
   if (VAR_2)
    FUNC_3();
   VAR_2 = VAR_5;
   VAR_7 = VAR_3;
   break;
  case 'c':
   VAR_8 = 1;
   break;
  default:
   FUNC_3();
  }
 }
 if (!VAR_2)
  VAR_2 = VAR_6;
}
