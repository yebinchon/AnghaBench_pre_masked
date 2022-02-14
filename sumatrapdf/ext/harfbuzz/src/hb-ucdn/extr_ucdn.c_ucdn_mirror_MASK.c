
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int to; int from; int member_0; } ;
typedef TYPE_1__ MirrorPair ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

uint32_t FUNC_1(uint32_t VAR_3)
{
    MirrorPair VAR_4 = {0};
    MirrorPair *VAR_5;

    VAR_4.from = VAR_3;
    VAR_5 = (MirrorPair *) FUNC_0(&VAR_4, VAR_2, VAR_0,
                                sizeof(MirrorPair), VAR_1);

    if (VAR_5 == ((void*)0))
        return VAR_3;
    else
        return VAR_5->to;
}
