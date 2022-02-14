
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (char***) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int *) ;
 int * VAR_8 ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (size_t) ;
 int * VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 size_t FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (unsigned int) ;
 int FUNC_20 (int) ;

int
FUNC_21 (int VAR_14, char **VAR_15)
{
  int VAR_16;
  char * VAR_17;
  int VAR_18 = 1;
  char * VAR_19 = ((void*)0);
  FILE * VAR_20 = ((void*)0);
  unsigned int VAR_21 = 0;
  int VAR_22;






  VAR_10 = VAR_15[0];
  if (VAR_10 == ((void*)0) || VAR_10[0] == 0)
    VAR_10 = "wrjpgcom";


  for (VAR_16 = 1; VAR_16 < VAR_14; VAR_16++) {
    VAR_17 = VAR_15[VAR_16];
    if (VAR_17[0] != '-')
      break;
    VAR_17++;
    if (FUNC_10(VAR_17, "replace", 1)) {
      VAR_18 = 0;
    } else if (FUNC_10(VAR_17, "cfile", 2)) {
      if (++VAR_16 >= VAR_14) FUNC_17();
      if ((VAR_20 = FUNC_7(VAR_15[VAR_16], "r")) == ((void*)0)) {
 FUNC_8(VAR_11, "%s: can't open %s\n", VAR_10, VAR_15[VAR_16]);
 FUNC_3(VAR_1);
      }
    } else if (FUNC_10(VAR_17, "comment", 1)) {
      if (++VAR_16 >= VAR_14) FUNC_17();
      VAR_19 = VAR_15[VAR_16];



      if (VAR_19[0] == '"') {
 VAR_19 = (char *) FUNC_11((size_t) VAR_3);
 if (VAR_19 == ((void*)0))
   FUNC_0("Insufficient memory");
 if (FUNC_16(VAR_15[VAR_16]+1) >= (size_t) VAR_3) {
   FUNC_8(VAR_11, "Comment text may not exceed %u bytes\n",
    (unsigned int) VAR_3);
   FUNC_3(VAR_1);
 }
 FUNC_15(VAR_19, VAR_15[VAR_16]+1);
 for (;;) {
   VAR_21 = (unsigned int) FUNC_16(VAR_19);
   if (VAR_21 > 0 && VAR_19[VAR_21-1] == '"') {
     VAR_19[VAR_21-1] = '\0';
     break;
   }
   if (++VAR_16 >= VAR_14)
     FUNC_0("Missing ending quote mark");
   if (FUNC_16(VAR_19) + 1 + FUNC_16(VAR_15[VAR_16]) >=
       (size_t) VAR_3) {
     FUNC_8(VAR_11, "Comment text may not exceed %u bytes\n",
      (unsigned int) VAR_3);
     FUNC_3(VAR_1);
   }
   FUNC_14(VAR_19, " ");
   FUNC_14(VAR_19, VAR_15[VAR_16]);
 }
      } else if (FUNC_16(VAR_19) >= (size_t) VAR_3) {
 FUNC_8(VAR_11, "Comment text may not exceed %u bytes\n",
  (unsigned int) VAR_3);
 FUNC_3(VAR_1);
      }
      VAR_21 = (unsigned int) FUNC_16(VAR_19);
    } else
      FUNC_17();
  }


  if (VAR_19 != ((void*)0) && VAR_20 != ((void*)0))
    FUNC_17();



  if (VAR_19 == ((void*)0) && VAR_20 == ((void*)0) && VAR_16 >= VAR_14)
    FUNC_17();


  if (VAR_16 < VAR_14) {
    if ((VAR_8 = FUNC_7(VAR_15[VAR_16], VAR_6)) == ((void*)0)) {
      FUNC_8(VAR_11, "%s: can't open %s\n", VAR_10, VAR_15[VAR_16]);
      FUNC_3(VAR_1);
    }
  } else {
    VAR_8 = VAR_12;

  }
  if (VAR_16 < VAR_14-1) {
    FUNC_8(VAR_11, "%s: only one input file\n", VAR_10);
    FUNC_17();
  }
  VAR_9 = VAR_13;




  if (VAR_19 == ((void*)0)) {
    FILE * VAR_23;
    int VAR_24;

    VAR_19 = (char *) FUNC_11((size_t) VAR_3);
    if (VAR_19 == ((void*)0))
      FUNC_0("Insufficient memory");
    VAR_21 = 0;
    VAR_23 = (VAR_20 != ((void*)0) ? VAR_20 : VAR_12);
    while ((VAR_24 = FUNC_9(VAR_23)) != VAR_0) {
      if (VAR_21 >= (unsigned int) VAR_3) {
 FUNC_8(VAR_11, "Comment text may not exceed %u bytes\n",
  (unsigned int) VAR_3);
 FUNC_3(VAR_1);
      }
      VAR_19[VAR_21++] = (char) VAR_24;
    }
    if (VAR_20 != ((void*)0))
      FUNC_4(VAR_20);
  }







  VAR_22 = FUNC_12(VAR_18);

  if (VAR_21 > 0) {
    FUNC_20(VAR_4);
    FUNC_19(VAR_21 + 2);
    while (VAR_21 > 0) {
      FUNC_18(*VAR_19++);
      VAR_21--;
    }
  }



  FUNC_20(VAR_22);
  FUNC_2();


  FUNC_3(VAR_2);
  return 0;
}
