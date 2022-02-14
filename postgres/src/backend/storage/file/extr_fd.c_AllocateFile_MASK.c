
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * file; } ;
struct TYPE_5__ {TYPE_1__ desc; int create_subid; int kind; } ;
typedef int FILE ;
typedef TYPE_2__ AllocateDesc ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* VAR_6 ;
 int FUNC_4 (int ,char*,size_t,char const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_7 ;
 int * FUNC_8 (char const*,char const*) ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_9 () ;

FILE *
FUNC_10(const char *VAR_10, const char *VAR_11)
{
 FILE *VAR_12;

 FUNC_0(FUNC_4(VAR_5, "AllocateFile: Allocated %d (%s)",
      VAR_9, VAR_10));


 if (!FUNC_9())
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("exceeded maxAllocatedDescs (%d) while trying to open file \"%s\"",
      VAR_8, VAR_10)));


 FUNC_3();

TryAgain:
 if ((VAR_12 = FUNC_8(VAR_10, VAR_11)) != ((void*)0))
 {
  AllocateDesc *VAR_13 = &VAR_6[VAR_9];

  VAR_13->kind = VAR_0;
  VAR_13->desc.file = VAR_12;
  VAR_13->create_subid = FUNC_1();
  VAR_9++;
  return VAR_13->desc.file;
 }

 if (VAR_7 == VAR_1 || VAR_7 == VAR_2)
 {
  int VAR_14 = VAR_7;

  FUNC_5(VAR_5,
    (FUNC_6(VAR_3),
     FUNC_7("out of file descriptors: %m; release and retry")));
  VAR_7 = 0;
  if (FUNC_2())
   goto TryAgain;
  VAR_7 = VAR_14;
 }

 return ((void*)0);
}
