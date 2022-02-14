
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* putC ) (TYPE_1__*,unsigned char) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,unsigned char) ;
 int FUNC_3 (TYPE_1__*,unsigned char) ;
 int FUNC_4 (TYPE_1__*,unsigned char) ;
 int FUNC_5 (TYPE_1__*,unsigned char) ;

void FUNC_6 (int VAR_0, gdIOCtx * VAR_1)
{
 FUNC_0 (FUNC_1("Putting int..."));
 (VAR_1->putC) (VAR_1, (unsigned char) (VAR_0 >> 24));
 (VAR_1->putC) (VAR_1, (unsigned char) ((VAR_0 >> 16) & 0xFF));
 (VAR_1->putC) (VAR_1, (unsigned char) ((VAR_0 >> 8) & 0xFF));
 (VAR_1->putC) (VAR_1, (unsigned char) (VAR_0 & 0xFF));
 FUNC_0 (FUNC_1("put."));
}
