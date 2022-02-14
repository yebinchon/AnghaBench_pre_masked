
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct ao {TYPE_1__ channels; int format; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ao*,void*,int) ;

void FUNC_2(struct ao *VAR_0, void **VAR_1, int VAR_2)
{
    bool VAR_3 = FUNC_0(VAR_0->format);
    int VAR_4 = VAR_3 ? VAR_0->channels.num : 1;
    int VAR_5 = VAR_2 * (VAR_3 ? 1: VAR_0->channels.num);
    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        FUNC_1(VAR_0, VAR_1[VAR_6], VAR_5);
}
