
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {int create_subid; TYPE_1__ desc; int kind; } ;
typedef TYPE_2__ AllocateDesc ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int ,char*,size_t,char const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,char const*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_8 () ;

int
FUNC_9(const char *VAR_7, int VAR_8, mode_t VAR_9)
{
 int VAR_10;

 FUNC_1(FUNC_4(VAR_3, "OpenTransientFile: Allocated %d (%s)",
      VAR_6, VAR_7));


 if (!FUNC_8())
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("exceeded maxAllocatedDescs (%d) while trying to open file \"%s\"",
      VAR_5, VAR_7)));


 FUNC_3();

 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_9);

 if (VAR_10 >= 0)
 {
  AllocateDesc *VAR_11 = &VAR_4[VAR_6];

  VAR_11->kind = VAR_0;
  VAR_11->desc.fd = VAR_10;
  VAR_11->create_subid = FUNC_2();
  VAR_6++;

  return VAR_10;
 }

 return -1;
}
