
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* crypt; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_permission ;
typedef int fz_context ;
struct TYPE_4__ {int p; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(fz_context *VAR_4, pdf_document *VAR_5, fz_permission VAR_6)
{
 if (!VAR_5->crypt)
  return 1;
 switch (VAR_6)
 {
 case 128: return VAR_5->crypt->p & VAR_3;
 case 130: return VAR_5->crypt->p & VAR_1;
 case 129: return VAR_5->crypt->p & VAR_2;
 case 131: return VAR_5->crypt->p & VAR_0;
 }
 return 1;
}
