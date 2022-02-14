
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int start; int index; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ Reindex ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*,size_t,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_1, const Reindex *VAR_2, size_t VAR_3)
{
    Reindex *VAR_4;
    Reindex VAR_5 = {0, 0, 0};
    VAR_5.start = VAR_1;
    VAR_4 = (Reindex *) FUNC_0(&VAR_5, VAR_2, VAR_3, sizeof(Reindex), VAR_0);

    if (VAR_4 != ((void*)0))
        return VAR_4->index + (VAR_1 - VAR_4->start);
    else
        return -1;
}
