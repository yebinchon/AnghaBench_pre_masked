
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_7__ {int (* Read ) (TYPE_3__*) ;} ;
struct TYPE_5__ {TYPE_3__* In; } ;
struct TYPE_6__ {int Range; int Low; int Code; TYPE_1__ Stream; } ;
typedef TYPE_2__ CPpmd8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(CPpmd8 *VAR_2, UInt32 VAR_3, UInt32 VAR_4)
{
  VAR_3 *= VAR_2->Range;
  VAR_2->Low += VAR_3;
  VAR_2->Code -= VAR_3;
  VAR_2->Range *= VAR_4;

  while ((VAR_2->Low ^ (VAR_2->Low + VAR_2->Range)) < VAR_1 ||
      (VAR_2->Range < VAR_0 && ((VAR_2->Range = (0 - VAR_2->Low) & (VAR_0 - 1)), 1)))
  {
    VAR_2->Code = (VAR_2->Code << 8) | VAR_2->Stream.In->Read(VAR_2->Stream.In);
    VAR_2->Range <<= 8;
    VAR_2->Low <<= 8;
  }
}
