
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cap; int code; } ;
struct TYPE_5__ {TYPE_2__ p; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_3__ pdf_function ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, pdf_function *VAR_2, int VAR_3)
{
 if (VAR_3 >= VAR_2->u.p.cap)
 {
  int VAR_4 = VAR_2->u.p.cap + 64;
  VAR_2->u.p.code = FUNC_0(VAR_1, VAR_2->u.p.code, VAR_4, VAR_0);
  VAR_2->u.p.cap = VAR_4;
 }
}
