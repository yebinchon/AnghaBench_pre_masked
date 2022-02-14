
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_2__ {char* z_name; char* z_filename; int z_linenum; } ;


 char* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (char**,int,int) ;
 int * VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static bool
FUNC_4(char **VAR_9, int VAR_10)
{
 ptrdiff_t VAR_11;

 if (VAR_10 < VAR_3 || VAR_10 > VAR_2)
 {
  FUNC_1(FUNC_0("wrong number of fields on Zone line"));
  return 0;
 }
 if (VAR_4 != ((void*)0) && FUNC_3(VAR_9[VAR_1], VAR_7) == 0)
 {
  FUNC_1(
     FUNC_0("\"Zone %s\" line and -l option are mutually exclusive"),
     VAR_7);
  return 0;
 }
 if (FUNC_3(VAR_9[VAR_1], VAR_0) == 0 && VAR_6 != ((void*)0))
 {
  FUNC_1(
     FUNC_0("\"Zone %s\" line and -p option are mutually exclusive"),
     VAR_0);
  return 0;
 }
 for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11)
  if (VAR_8[VAR_11].z_name != ((void*)0) &&
   FUNC_3(VAR_8[VAR_11].z_name, VAR_9[VAR_1]) == 0)
  {
   FUNC_1(FUNC_0("duplicate zone name %s"
     " (file \"%s\", line %d)"),
      VAR_9[VAR_1],
      VAR_8[VAR_11].z_filename,
      VAR_8[VAR_11].z_linenum);
   return 0;
  }
 return FUNC_2(VAR_9, VAR_10, 0);
}
