
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Range; int Code; TYPE_1__* Stream; } ;
struct TYPE_4__ {int (* Read ) (void*) ;} ;
typedef TYPE_2__ CPpmd7z_RangeDec ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(CPpmd7z_RangeDec *VAR_1)
{
  if (VAR_1->Range < VAR_0)
  {
    VAR_1->Code = (VAR_1->Code << 8) | VAR_1->Stream->Read((void *)VAR_1->Stream);
    VAR_1->Range <<= 8;
    if (VAR_1->Range < VAR_0)
    {
      VAR_1->Code = (VAR_1->Code << 8) | VAR_1->Stream->Read((void *)VAR_1->Stream);
      VAR_1->Range <<= 8;
    }
  }
}
