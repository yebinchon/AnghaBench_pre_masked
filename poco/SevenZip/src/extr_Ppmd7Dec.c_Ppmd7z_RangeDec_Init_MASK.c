
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Code; int Range; TYPE_1__* Stream; } ;
struct TYPE_4__ {int (* Read ) (void*) ;} ;
typedef TYPE_2__ CPpmd7z_RangeDec ;
typedef int Bool ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

Bool FUNC_2(CPpmd7z_RangeDec *VAR_1)
{
  unsigned VAR_2;
  VAR_1->Code = 0;
  VAR_1->Range = 0xFFFFFFFF;
  if (VAR_1->Stream->Read((void *)VAR_1->Stream) != 0)
    return VAR_0;
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
    VAR_1->Code = (VAR_1->Code << 8) | VAR_1->Stream->Read((void *)VAR_1->Stream);
  return (VAR_1->Code < 0xFFFFFFFF);
}
