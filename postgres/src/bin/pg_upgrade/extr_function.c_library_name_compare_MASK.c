
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int dbnum; } ;
typedef TYPE_1__ LibraryInfo ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const char *VAR_2 = ((const LibraryInfo *) VAR_0)->name;
 const char *VAR_3 = ((const LibraryInfo *) VAR_1)->name;
 int VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4 != VAR_5)
  return VAR_4 - VAR_5;
 if (VAR_6 != 0)
  return VAR_6;
 else
  return ((const LibraryInfo *) VAR_0)->dbnum -
   ((const LibraryInfo *) VAR_1)->dbnum;
}
