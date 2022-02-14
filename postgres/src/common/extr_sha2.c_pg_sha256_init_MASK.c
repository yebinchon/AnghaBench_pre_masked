
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bitcount; int buffer; int state; } ;
typedef TYPE_1__ pg_sha256_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;

void
FUNC_2(pg_sha256_ctx *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;
 FUNC_0(VAR_3->state, VAR_2, VAR_1);
 FUNC_1(VAR_3->buffer, 0, VAR_0);
 VAR_3->bitcount = 0;
}
