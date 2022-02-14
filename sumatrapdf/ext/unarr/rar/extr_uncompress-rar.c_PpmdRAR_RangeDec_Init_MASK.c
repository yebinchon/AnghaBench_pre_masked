
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CPpmdRAR_RangeDec {int Code; int Range; TYPE_1__* Stream; scalar_t__ Low; } ;
struct TYPE_2__ {int (* Read ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct CPpmdRAR_RangeDec *VAR_0)
{
    int VAR_1;
    VAR_0->Code = 0;
    VAR_0->Low = 0;
    VAR_0->Range = 0xFFFFFFFF;
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
        VAR_0->Code = (VAR_0->Code << 8) | VAR_0->Stream->Read(VAR_0->Stream);
    }
}
