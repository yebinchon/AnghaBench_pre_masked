
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* FUNC_1 (void*) ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (int,char**,char*) ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_3 () ;

__attribute__((used)) static
void FUNC_4(int VAR_15, char *VAR_16[])
{
 int VAR_17;

 FUNC_3();

 while ((VAR_17 = FUNC_2(VAR_15, VAR_16,"C:c:VvbBI:i:O:o:T:t:L:l:r:r:P:p:Mm")) != VAR_1) {


  switch (VAR_17){

  case 'b':
  case 'B':
   VAR_0 = VAR_6;
   break;

  case 'c':
  case 'C':
   VAR_3 = FUNC_1(VAR_13);
   if (VAR_3 < 0 || VAR_3 > 3)
    FUNC_0("Unknown precalc mode '%d'", VAR_3);
   break;

  case 'v':
  case 'V':
   VAR_7 = VAR_6;
   break;

  case 'i':
  case 'I':
   if (VAR_11)
    FUNC_0("Device-link already specified");
   VAR_8 = VAR_13;
   break;

  case 'o':
  case 'O':
   if (VAR_11)
    FUNC_0("Device-link already specified");
   VAR_9 = VAR_13;
   break;

  case 't':
  case 'T':
   VAR_2 = FUNC_1(VAR_13);

   if (VAR_2 < 0) VAR_2 = 0;
   break;


  case 'l':
  case 'L':
   VAR_8 = VAR_13;
   VAR_11 = VAR_6;
   break;

  case 'p':
  case 'P':
   VAR_10 = VAR_13;
   break;



  case 'r':
  case 'R':
   VAR_4 = FUNC_1(VAR_13);

   if (VAR_4 < 0) VAR_4 = 0;
   break;


  case 'm':
  case 'M':
   VAR_12 = VAR_6;
   break;

  default:
   FUNC_0("Unknown option.");
  }
 }



 if (VAR_14 < VAR_15) {

  if (!VAR_12)
   FUNC_0("Use %cm for multiprofile transforms", VAR_5);
 }

}
