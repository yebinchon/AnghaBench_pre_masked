
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RX509Certificate ;
typedef int RStrBuf ;
typedef int RCore ;
typedef int RCMS ;
typedef int RASN1Object ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int * FUNC_3 (int const*,int,int const*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int const*,int) ;
 char* FUNC_11 (int const*,int,int) ;
 char* FUNC_12 (int *) ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(RCore *VAR_1, const char *VAR_2, const ut8* VAR_3, int VAR_4) {
 switch (*VAR_2) {
 case 'a':
  {
   FUNC_0 (VAR_2[1] != 'q');
   RASN1Object *VAR_5 = FUNC_3 (VAR_3, VAR_4, VAR_3);
   if (VAR_5) {
    char *VAR_6 = FUNC_5 (VAR_5, 0, ((void*)0));
    FUNC_4 (VAR_5);
    if (VAR_6) {
     FUNC_6 ("%s\n", VAR_6);
     FUNC_2 (VAR_6);
    }
   } else {
    FUNC_1 ("Malformed object: did you supply enough data?\ntry to change the block size (see b?)\n");
   }
  }
  break;
 case 'x':
  {
   RX509Certificate* VAR_7 = FUNC_16 (FUNC_3 (VAR_3, VAR_4, VAR_3));
   if (VAR_7) {
    RStrBuf *VAR_8 = FUNC_13 ("");
    FUNC_14 (VAR_7, ((void*)0), VAR_8);
    char *VAR_9 = FUNC_12 (VAR_8);
    if (VAR_9) {
     FUNC_6 ("%s\n", VAR_9);
     FUNC_2 (VAR_9);
    }
    FUNC_15 (VAR_7);
   } else {
    FUNC_1 ("Malformed object: did you supply enough data?\ntry to change the block size (see b?)\n");
   }
  }
  break;
 case 'p':
  {
   RCMS *VAR_10 = FUNC_10 (VAR_3, VAR_4);
   if (VAR_10) {
    char *VAR_11 = FUNC_8 (VAR_10);
    if (VAR_11) {
     FUNC_6 ("%s\n", VAR_11);
     FUNC_2 (VAR_11);
    }
    FUNC_9 (VAR_10);
   } else {
    FUNC_1 ("Malformed object: did you supply enough data?\ntry to change the block size (see b?)\n");
   }
  }
  break;
 case 'b':
  {
   char *VAR_12 = FUNC_11(VAR_3, VAR_4, VAR_2[1] == 'v');
   if (VAR_12) {
    FUNC_6 ("%s", VAR_12);
    FUNC_2 (VAR_12);
   }
  }
  break;
 default:
 case '?':
  FUNC_7 (VAR_1, VAR_0);
  break;
 }
}
