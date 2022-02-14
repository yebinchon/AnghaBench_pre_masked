
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ method; } ;
struct TYPE_5__ {TYPE_1__ strf; } ;
typedef TYPE_2__ pdf_crypt ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(fz_context *VAR_2, pdf_crypt *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_3 == ((void*)0))
  return VAR_6;

 if (VAR_3->strf.method == VAR_0 || VAR_3->strf.method == VAR_1)
 {
  VAR_6 += 16;
  if ((VAR_6 & 15) == 0)
   VAR_6 += 16;
  VAR_6 = (VAR_6 + 15) & ~15;
 }

 return VAR_6;
}
