
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__* objectHandle; } ;
typedef scalar_t__ HGDIOBJ ;
typedef TYPE_1__ HANDLETABLE ;



__attribute__((used)) static int FUNC_0(HANDLETABLE *VAR_0, UINT VAR_1, HGDIOBJ VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
 if (*(VAR_0->objectHandle + VAR_3) == 0)
 {
     *(VAR_0->objectHandle + VAR_3) = VAR_2;
     return VAR_3;
 }
    }
    return -1;
}
