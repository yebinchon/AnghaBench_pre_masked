
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int defn; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_6__ {int std_strings; } ;
struct TYPE_8__ {TYPE_1__ public; } ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (int ,char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{

 char *VAR_2;

 VAR_2 = FUNC_1(VAR_1->defn, '\'');
 if (VAR_2 && FUNC_2(VAR_2, "'on'", 4) == 0)
  VAR_0->public.std_strings = 1;
 else if (VAR_2 && FUNC_2(VAR_2, "'off'", 5) == 0)
  VAR_0->public.std_strings = 0;
 else
  FUNC_0("invalid STDSTRINGS item: %s",
     VAR_1->defn);
}
