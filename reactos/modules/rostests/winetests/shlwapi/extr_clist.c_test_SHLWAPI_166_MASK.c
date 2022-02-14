
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int QuadPart; } ;
struct dummystream {int readcalls; scalar_t__ writecalls; int seekcalls; int statcalls; TYPE_1__ pos; int IStream_iface; scalar_t__ failreadcall; scalar_t__ failstatcall; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dummystream*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
  struct dummystream VAR_2;
  BOOL VAR_3;

  if (!&FUNC_2)
    return VAR_0;

  FUNC_0(&VAR_2);
  VAR_3 = FUNC_2(&VAR_2.IStream_iface);

  if (VAR_3 != VAR_1)
    return VAR_0;

  FUNC_1(VAR_2.readcalls == 0, "called Read()\n");
  FUNC_1(VAR_2.writecalls == 0, "called Write()\n");
  FUNC_1(VAR_2.seekcalls == 0, "called Seek()\n");
  FUNC_1(VAR_2.statcalls == 1, "wrong call count\n");

  VAR_2.statcalls = 0;
  VAR_2.pos.QuadPart = 50001;

  VAR_3 = FUNC_2(&VAR_2.IStream_iface);

  FUNC_1(VAR_3 == VAR_0, "failed after seek adjusted\n");
  FUNC_1(VAR_2.readcalls == 0, "called Read()\n");
  FUNC_1(VAR_2.writecalls == 0, "called Write()\n");
  FUNC_1(VAR_2.seekcalls == 0, "called Seek()\n");
  FUNC_1(VAR_2.statcalls == 1, "wrong call count\n");


  FUNC_0(&VAR_2);
  VAR_2.pos.QuadPart = 50001;
  VAR_2.failstatcall = VAR_1;
  VAR_3 = FUNC_2(&VAR_2.IStream_iface);
  FUNC_1(VAR_3 == VAR_0, "should be FALSE after read is OK\n");
  FUNC_1(VAR_2.readcalls == 1, "wrong call count\n");
  FUNC_1(VAR_2.writecalls == 0, "called Write()\n");
  FUNC_1(VAR_2.seekcalls == 1, "wrong call count\n");
  FUNC_1(VAR_2.statcalls == 1, "wrong call count\n");
  FUNC_1(VAR_2.pos.QuadPart == 0, "Didn't seek to start\n");

  FUNC_0(&VAR_2);
  VAR_2.pos.QuadPart = 50001;
  VAR_2.failstatcall = VAR_1;
  VAR_2.failreadcall = VAR_1;
  VAR_3 = FUNC_2(&VAR_2.IStream_iface);
  FUNC_1(VAR_3 == VAR_1, "Should be true after read fails\n");
  FUNC_1(VAR_2.readcalls == 1, "wrong call count\n");
  FUNC_1(VAR_2.writecalls == 0, "called Write()\n");
  FUNC_1(VAR_2.seekcalls == 0, "Called Seek()\n");
  FUNC_1(VAR_2.statcalls == 1, "wrong call count\n");
  FUNC_1(VAR_2.pos.QuadPart == 50001, "called Seek() after read failed\n");
  return VAR_1;
}
