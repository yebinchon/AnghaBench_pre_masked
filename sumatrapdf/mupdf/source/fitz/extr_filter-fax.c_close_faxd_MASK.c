
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bidx; struct TYPE_3__* dst; struct TYPE_3__* ref; int chain; } ;
typedef TYPE_1__ fz_faxd ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, void *VAR_1)
{
 fz_faxd *VAR_2 = (fz_faxd *)VAR_1;
 int VAR_3;


 VAR_3 = (32 - VAR_2->bidx) / 8;
 while (VAR_3--)
  FUNC_2(VAR_0, VAR_2->chain);

 FUNC_0(VAR_0, VAR_2->chain);
 FUNC_1(VAR_0, VAR_2->ref);
 FUNC_1(VAR_0, VAR_2->dst);
 FUNC_1(VAR_0, VAR_2);
}
