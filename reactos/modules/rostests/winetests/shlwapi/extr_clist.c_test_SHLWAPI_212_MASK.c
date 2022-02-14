
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummystream {scalar_t__ readcalls; int writecalls; scalar_t__ seekcalls; int IStream_iface; } ;
typedef int buff ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (struct dummystream*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
  struct dummystream VAR_1;
  char VAR_2[256];
  HRESULT VAR_3;

  if (!&FUNC_2)
    return;

  FUNC_0(&VAR_1);
  VAR_3 = FUNC_2(&VAR_1.IStream_iface, VAR_2, sizeof(VAR_2));

  FUNC_1(VAR_3 == VAR_0, "failed Write()\n");
  FUNC_1(VAR_1.readcalls == 0, "called Read()\n");
  FUNC_1(VAR_1.writecalls == 1, "wrong call count\n");
  FUNC_1(VAR_1.seekcalls == 0, "called Seek()\n");
}
