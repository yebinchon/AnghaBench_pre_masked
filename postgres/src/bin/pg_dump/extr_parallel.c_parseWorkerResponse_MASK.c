
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dumpId; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_6__ {int n_errors; } ;
struct TYPE_8__ {TYPE_1__ public; } ;
typedef scalar_t__ DumpId ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*,scalar_t__*,int*,int*,int*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(ArchiveHandle *VAR_0, TocEntry *VAR_1,
     const char *VAR_2)
{
 DumpId VAR_3;
 int VAR_4,
    VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(VAR_2, "OK "))
 {
  FUNC_3(VAR_2, "OK %d %d %d%n", &VAR_3, &VAR_6, &VAR_5, &VAR_4);

  FUNC_0(VAR_3 == VAR_1->dumpId);
  FUNC_0(VAR_4 == FUNC_4(VAR_2));

  VAR_0->public.n_errors += VAR_5;
 }
 else
  FUNC_1("invalid message received from worker: \"%s\"",
     VAR_2);

 return VAR_6;
}
