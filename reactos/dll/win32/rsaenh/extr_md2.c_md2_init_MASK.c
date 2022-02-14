
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ curlen; int buf; int chksum; int X; } ;
typedef TYPE_1__ md2_state ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(md2_state *VAR_1)
{

   FUNC_0(VAR_1->X, 0, sizeof(VAR_1->X));
   FUNC_0(VAR_1->chksum, 0, sizeof(VAR_1->chksum));
   FUNC_0(VAR_1->buf, 0, sizeof(VAR_1->buf));
   VAR_1->curlen = 0;
   return VAR_0;
}
