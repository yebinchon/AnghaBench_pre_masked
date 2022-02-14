
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t (* ReadFunc ) (int *,char**,size_t*) ;
typedef int ArchiveHandle ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,size_t,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_1, ReadFunc VAR_2)
{
 size_t VAR_3;
 char *VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 VAR_5 = VAR_0;

 while ((VAR_3 = VAR_2(VAR_1, &VAR_4, &VAR_5)))
 {
  FUNC_0(VAR_4, 1, VAR_3, VAR_1);
 }

 FUNC_1(VAR_4);
}
