
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* directory; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_1, char *VAR_2, const char *VAR_3)
{
 lclContext *VAR_4 = (lclContext *) VAR_1->formatData;
 char *VAR_5;

 VAR_5 = VAR_4->directory;

 if (FUNC_3(VAR_5) + 1 + FUNC_3(VAR_3) + 1 > VAR_0)
  FUNC_0("file name too long: \"%s\"", VAR_5);

 FUNC_2(VAR_2, VAR_5);
 FUNC_1(VAR_2, "/");
 FUNC_1(VAR_2, VAR_3);
}
