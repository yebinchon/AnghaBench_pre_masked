
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* putBuf ) (TYPE_1__*,char*,int) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (TYPE_1__*,char*,int) ;

void FUNC_1 (int VAR_0, gdIOCtx * VAR_1)
{
 unsigned char VAR_2[2];

 VAR_2[0] = VAR_0 & 0xff;
 VAR_2[1] = (VAR_0 / 256) & 0xff;
 (VAR_1->putBuf) (VAR_1, (char *) VAR_2, 2);
}
