
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_4 (int ,char*,size_t,char const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int * FUNC_9 (char const*,char const*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int VAR_13 ;
 int VAR_14 ;

FILE *
FUNC_12(const char *VAR_15, const char *VAR_16)
{
 FILE *VAR_17;
 int VAR_18;

 FUNC_0(FUNC_4(VAR_5, "OpenPipeStream: Allocated %d (%s)",
      VAR_12, VAR_15));


 if (!FUNC_11())
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("exceeded maxAllocatedDescs (%d) while trying to execute command \"%s\"",
      VAR_11, VAR_15)));


 FUNC_3();

TryAgain:
 FUNC_8(VAR_14);
 FUNC_8(VAR_13);
 FUNC_10(VAR_6, VAR_7);
 VAR_10 = 0;
 VAR_17 = FUNC_9(VAR_15, VAR_16);
 VAR_18 = VAR_10;
 FUNC_10(VAR_6, VAR_8);
 VAR_10 = VAR_18;
 if (VAR_17 != ((void*)0))
 {
  AllocateDesc *VAR_19 = &VAR_9[VAR_12];

  VAR_19->kind = VAR_0;
  VAR_19->desc.file = VAR_17;
  VAR_19->create_subid = FUNC_1();
  VAR_12++;
  return VAR_19->desc.file;
 }

 if (VAR_10 == VAR_1 || VAR_10 == VAR_2)
 {
  FUNC_5(VAR_5,
    (FUNC_6(VAR_3),
     FUNC_7("out of file descriptors: %m; release and retry")));
  if (FUNC_2())
   goto TryAgain;
  VAR_10 = VAR_18;
 }

 return ((void*)0);
}
