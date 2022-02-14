
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dummystream {int seekcalls; scalar_t__ statcalls; scalar_t__ readcalls; scalar_t__ writecalls; int IStream_iface; } ;
struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_6__ {long QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (struct dummystream*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_2__,int ,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(void)
{
  struct dummystream VAR_1;
  ULARGE_INTEGER VAR_2;
  LARGE_INTEGER VAR_3;
  HRESULT VAR_4;

  if (!&FUNC_3 || !&FUNC_4)
    return;

  FUNC_0(&VAR_1);
  VAR_3.QuadPart = 5000l;
  FUNC_1(&VAR_1.IStream_iface, VAR_3, 0, ((void*)0));

  VAR_1.seekcalls = 0;
  FUNC_3(&VAR_1.IStream_iface);
  FUNC_2(VAR_1.statcalls == 0, "called Stat()\n");
  FUNC_2(VAR_1.readcalls == 0, "called Read()\n");
  FUNC_2(VAR_1.writecalls == 0, "called Write()\n");
  FUNC_2(VAR_1.seekcalls == 1, "wrong call count\n");

  VAR_2.QuadPart = 50001;
  VAR_4 = FUNC_4(&VAR_1.IStream_iface, &VAR_2);
  FUNC_2(VAR_4 == VAR_0, "failed Stat()\n");
  FUNC_2(VAR_2.QuadPart == 0, "213 didn't rewind stream\n");
}
