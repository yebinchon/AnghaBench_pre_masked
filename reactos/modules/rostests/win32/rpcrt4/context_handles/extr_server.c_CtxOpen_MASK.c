
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long* PCTXTYPE ;
typedef int CTXTYPE ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,long) ;

void FUNC_2( PCTXTYPE *VAR_0,
  long VAR_1)
{
 FUNC_1("CtxOpen(): Value=%d\n",VAR_1);
 *VAR_0 = (PCTXTYPE)FUNC_0( sizeof(CTXTYPE) );
 **VAR_0 = VAR_1;
}
