
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ArchiveHandle ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int,size_t,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 size_t FUNC_3 (char*,size_t,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;

__attribute__((used)) static void
FUNC_7(ArchiveHandle *VAR_3, char *VAR_4)
{
 size_t VAR_5;
 char *VAR_6;
 size_t VAR_7;
 VAR_2 *VAR_2;

 if (!VAR_4)
  return;

 VAR_2 = FUNC_2(VAR_4, VAR_0);

 if (!VAR_2)
  FUNC_4("could not open input file \"%s\": %m", VAR_4);

 VAR_6 = FUNC_6(VAR_1);
 VAR_7 = VAR_1;

 while ((VAR_5 = FUNC_3(VAR_6, VAR_7, VAR_2)))
 {
  FUNC_0(VAR_6, 1, VAR_5, VAR_3);
 }

 FUNC_5(VAR_6);
 if (FUNC_1(VAR_2) !=0)
  FUNC_4("could not close data file: %m");
}
