
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* inbuf; char* outbuf; void* hfdi; } ;
typedef TYPE_1__ fdi_decomp_state ;
struct TYPE_5__ {int pfnfree; int pfnalloc; } ;
typedef TYPE_2__ FDI_Int ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,char*,char*) ;
 int FUNC_2 (unsigned int,unsigned int,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,unsigned int) ;

int FUNC_4(unsigned int VAR_5, unsigned int VAR_6, char* VAR_7, char* VAR_8)
{
  int VAR_9;
  fdi_decomp_state VAR_10;
  FDI_Int VAR_11;

  FUNC_1("(%u, %u, %p, %p)\n", VAR_5, VAR_6, VAR_7, VAR_8);

  if ((VAR_5 > VAR_1) || (VAR_6 > VAR_0))
  {
    FUNC_0("Big file not supported yet (inlen = %u, outlen = %u)\n", VAR_5, VAR_6);
    return VAR_2;
  }

  VAR_11.pfnalloc = VAR_3;
  VAR_11.pfnfree = VAR_4;
  VAR_10.hfdi = (void*)&VAR_11;

  FUNC_3(VAR_10.inbuf, VAR_7, VAR_5);

  VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_10);

  FUNC_3(VAR_8, VAR_10.outbuf, VAR_6);

  return VAR_9;
}
