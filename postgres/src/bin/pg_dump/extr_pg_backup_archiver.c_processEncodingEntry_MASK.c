
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* defn; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_6__ {int encoding; } ;
struct TYPE_8__ {TYPE_1__ public; } ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void
FUNC_5(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{

 char *VAR_2 = FUNC_3(VAR_1->defn);
 char *VAR_3;
 char *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_3 = FUNC_4(VAR_2, '\'');
 if (VAR_3)
  VAR_4 = FUNC_4(++VAR_3, '\'');
 if (VAR_4)
 {
  *VAR_4 = '\0';
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0)
   FUNC_0("unrecognized encoding \"%s\"",
      VAR_3);
  VAR_0->public.encoding = VAR_5;
 }
 else
  FUNC_0("invalid ENCODING item: %s",
     VAR_1->defn);

 FUNC_1(VAR_2);
}
