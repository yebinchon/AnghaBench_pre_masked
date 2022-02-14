
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t rp; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;


 size_t FUNC_0 (int *,TYPE_1__*,size_t) ;
 int FUNC_1 (unsigned char*,size_t,size_t) ;

size_t
FUNC_2(fz_context *VAR_0, fz_stream *VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 VAR_4 = 0;
 do
 {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);
  if (VAR_5 > VAR_3)
   VAR_5 = VAR_3;
  if (VAR_5 == 0)
   break;

  FUNC_1(VAR_2, VAR_1->rp, VAR_5);
  VAR_1->rp += VAR_5;
  VAR_2 += VAR_5;
  VAR_4 += VAR_5;
  VAR_3 -= VAR_5;
 }
 while (VAR_3 > 0);

 return VAR_4;
}
