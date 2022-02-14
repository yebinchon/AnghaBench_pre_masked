
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int FUNC_0 (int,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,long,...) ;

char *FUNC_3(ut32 VAR_0, ut32 *VAR_1, ut32 VAR_2, ut32 VAR_3) {
 ut8 VAR_4, VAR_5, VAR_6, VAR_7;
 char *VAR_8 = ((void*)0);

 VAR_4 = VAR_0 >> 6;
 VAR_5 = VAR_0 & 3;
 VAR_6 = (VAR_0 >> 2) & 0xF;
 if (VAR_1) {
  *VAR_1 = 0;
 }

 VAR_8 = FUNC_1(50);
 if (!VAR_8) {
  return ((void*)0);
 }
 if(VAR_5 == 2) {
  if(VAR_4) {
   FUNC_2 (VAR_8, "*ar%ld(short(#0x%lx))",
     (long int)VAR_6, (long int)VAR_3 * VAR_4);
  } else {
   FUNC_2(VAR_8, "*ar%ld", (long int)VAR_6);
  }
 } else {
  VAR_7 = (VAR_4 >> 3 | 2 * VAR_5);
  if(VAR_7 == 6) {
   FUNC_2(VAR_8, "@#0x%lx", (long int)VAR_3 * (VAR_6 | 16 * (VAR_4 & 7)));
  } else if(VAR_7 == 7) {
   FUNC_2(VAR_8, "*sp(#0x%lx)", (long int)VAR_3 * (VAR_6 | 16 * (VAR_4 & 7)));
  } else {
   VAR_7 = VAR_3 | 16 * VAR_4;
   switch(VAR_7) {
   case 0:
    FUNC_2(VAR_8, "*ar%ld-", (long int)VAR_6);
    break;
   case 1:
    FUNC_2(VAR_8, "*ar%ld+", (long int)VAR_6);
    break;
   case 2:
    FUNC_2(VAR_8, "*ar%ld(t0)", (long int)VAR_6);
    break;
   case 3:
    FUNC_2(VAR_8, "*ar%ld(t1)", (long int)VAR_6);
    break;
   case 4:
    FUNC_2(VAR_8, "*(ar%ld-t0)", (long int)VAR_6);
    break;
   case 5:
    FUNC_2(VAR_8, "*(ar%ld-t1)", (long int)VAR_6);
    break;
   case 6:
    FUNC_2(VAR_8, "*(ar%ld+t0)", (long int)VAR_6);
    break;
   case 7:
    FUNC_2(VAR_8, "*(ar%ld+t1)", (long int)VAR_6);
    break;
   case 8:
    FUNC_2(VAR_8, "*-ar%ld", (long int)VAR_6);
    break;
   case 9:
    FUNC_2(VAR_8, "*+ar%ld", (long int)VAR_6);
    break;
   case 10:
    FUNC_2(VAR_8, "*ar%ld(t2)", (long int)VAR_6);
    break;
   case 11:
    FUNC_2(VAR_8, "*ar%ld(t3)", (long int)VAR_6);
    break;
   case 12:
    FUNC_2(VAR_8, "*(ar%ld-t2)", (long int)VAR_6);
    break;
   case 13:
    FUNC_2(VAR_8, "*(ar%ld-t3)", (long int)VAR_6);
    break;
   case 14:
    FUNC_2(VAR_8, "*(ar%ld+t2)", (long int)VAR_6);
    break;
   case 15:
    FUNC_2(VAR_8, "*(ar%ld+t3)", (long int)VAR_6);
    break;
   case 16:
    FUNC_2(VAR_8, "*(ar%ld-t0b)", (long int)VAR_6);
    break;
   case 17:
    FUNC_2(VAR_8, "*(ar%ld+t0b)", (long int)VAR_6);
    break;
   case 18:
    FUNC_2(VAR_8, "*ar%ld(t0<<#1)", (long int)VAR_6);
    break;
   case 19:
    FUNC_2(VAR_8, "*ar%ld(t1<<#1)", (long int)VAR_6);
    break;
   case 23:
    FUNC_2(VAR_8, "*ar%ld(xar15)", (long int)VAR_6);
    break;

   case 24:
   case 25:
   case 26:
   case 27:
    VAR_3 = FUNC_0(VAR_2, 2);
    if(VAR_1) {
     *VAR_1 = 2;
    }
    switch (VAR_7) {
    case 24:
     FUNC_2(VAR_8, "*ar%ld(#%ld)", (long int)VAR_6, (long int)VAR_4 * VAR_3);
     break;
    case 25:
     FUNC_2(VAR_8, "*+ar%ld(#%ld)", (long int)VAR_6, (long int)VAR_4 * VAR_3);
     break;
    case 26:
     FUNC_2(VAR_8, "*abs16(#0x%lx)", (long int)VAR_3);
     break;
    default:
     FUNC_2(VAR_8, "*port(#0x%lx)", (long int)VAR_3);
     break;
    }
    break;
   case 28:
   case 29:
   case 30:
    VAR_3 = FUNC_0(VAR_2, 3);
    if(VAR_1) {
     *VAR_1 = 3;
    }
    switch (VAR_7) {
    case 28:
     FUNC_2(VAR_8, "*ar%ld(#0x%lx)", (long int)VAR_6, (long int)VAR_3 * VAR_4);
     break;
    case 29:
     FUNC_2(VAR_8, "*+ar%ld(#0x%lx)", (long int)VAR_6, (long int)VAR_3 * VAR_4);
     break;
    default:
     FUNC_2(VAR_8, "*(#0x%lx)", (long int)VAR_3);
     break;
    }

    break;
   }
  }
 }

 return VAR_8;
}
