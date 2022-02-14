
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* putC ) (TYPE_1__*,unsigned char) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,unsigned char) ;
 int FUNC_3 (TYPE_1__*,unsigned char) ;

void FUNC_4 (int VAR_0, gdIOCtx * VAR_1)
{
 FUNC_0 (FUNC_1("Putting word..."));
 (VAR_1->putC) (VAR_1, (unsigned char) (VAR_0 >> 8));
 (VAR_1->putC) (VAR_1, (unsigned char) (VAR_0 & 0xFF));
 FUNC_0 (FUNC_1("put."));
}
