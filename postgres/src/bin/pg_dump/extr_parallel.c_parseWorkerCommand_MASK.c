
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TocEntry ;
typedef int T_Action ;
typedef int DumpId ;
typedef int ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*,int *,int*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(ArchiveHandle *VAR_2, TocEntry **VAR_3, T_Action *VAR_4,
       const char *VAR_5)
{
 DumpId VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_5, "DUMP "))
 {
  *VAR_4 = VAR_0;
  FUNC_4(VAR_5, "DUMP %d%n", &VAR_6, &VAR_7);
  FUNC_0(VAR_7 == FUNC_5(VAR_5));
  *VAR_3 = FUNC_2(VAR_2, VAR_6);
  FUNC_0(*VAR_3 != ((void*)0));
 }
 else if (FUNC_3(VAR_5, "RESTORE "))
 {
  *VAR_4 = VAR_1;
  FUNC_4(VAR_5, "RESTORE %d%n", &VAR_6, &VAR_7);
  FUNC_0(VAR_7 == FUNC_5(VAR_5));
  *VAR_3 = FUNC_2(VAR_2, VAR_6);
  FUNC_0(*VAR_3 != ((void*)0));
 }
 else
  FUNC_1("unrecognized command received from master: \"%s\"",
     VAR_5);
}
