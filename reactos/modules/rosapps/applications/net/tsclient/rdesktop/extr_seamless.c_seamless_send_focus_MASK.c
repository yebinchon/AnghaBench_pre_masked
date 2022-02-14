
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int seamless_rdp; } ;
typedef TYPE_1__ RDPCLIENT ;


 unsigned int FUNC_0 (TYPE_1__*,char*,char*,unsigned long,unsigned long) ;

unsigned int
FUNC_1(RDPCLIENT * VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 if (!VAR_0->seamless_rdp)
  return (unsigned int) -1;

 return FUNC_0(VAR_0, "FOCUS", "0x%08lx,0x%lx", VAR_1, VAR_2);
}
