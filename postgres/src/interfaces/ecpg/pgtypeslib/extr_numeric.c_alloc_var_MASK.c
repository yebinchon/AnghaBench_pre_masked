
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndigits; scalar_t__* buf; scalar_t__* digits; } ;
typedef TYPE_1__ numeric ;


 scalar_t__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(numeric *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0->buf);
 VAR_0->buf = FUNC_0(VAR_1 + 1);
 if (VAR_0->buf == ((void*)0))
  return -1;
 VAR_0->buf[0] = 0;
 VAR_0->digits = VAR_0->buf + 1;
 VAR_0->ndigits = VAR_1;
 return 0;
}
