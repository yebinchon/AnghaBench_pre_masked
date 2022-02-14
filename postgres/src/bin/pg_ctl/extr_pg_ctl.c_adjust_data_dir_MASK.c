
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 char* FUNC_5 (int ,char*,int ) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* VAR_6 ;
 int * FUNC_11 (char*,char*) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (char*,int,char*,char*,...) ;
 int FUNC_13 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_14(void)
{
 char VAR_9[VAR_0],
    VAR_10[VAR_0],
      *VAR_11;
 FILE *VAR_12;


 if (VAR_4 == ((void*)0))
  return;


 FUNC_12(VAR_10, sizeof(VAR_10), "%s/postgresql.conf", VAR_4);
 if ((VAR_12 = FUNC_6(VAR_10, "r")) == ((void*)0))
  return;
 FUNC_3(VAR_12);


 FUNC_12(VAR_10, sizeof(VAR_10), "%s/PG_VERSION", VAR_4);
 if ((VAR_12 = FUNC_6(VAR_10, "r")) != ((void*)0))
 {
  FUNC_3(VAR_12);
  return;
 }




 if (VAR_3 == ((void*)0))
  VAR_11 = FUNC_5(VAR_2, "postgres", VAR_1);
 else
  VAR_11 = FUNC_9(VAR_3);


 FUNC_12(VAR_9, VAR_0, "\"%s\" -C data_directory %s%s",
    VAR_11,
    VAR_6 ? VAR_6 : "",
    VAR_7 ? VAR_7 : "");

 VAR_12 = FUNC_11(VAR_9, "r");
 if (VAR_12 == ((void*)0) || FUNC_4(VAR_10, sizeof(VAR_10), VAR_12) == ((void*)0))
 {
  FUNC_13(FUNC_0("%s: could not determine the data directory using command \"%s\"\n"), VAR_8, VAR_9);
  FUNC_2(1);
 }
 FUNC_8(VAR_12);
 FUNC_7(VAR_11);


 (void) FUNC_10(VAR_10);

 FUNC_7(VAR_5);
 VAR_5 = FUNC_9(VAR_10);
 FUNC_1(VAR_5);
}
