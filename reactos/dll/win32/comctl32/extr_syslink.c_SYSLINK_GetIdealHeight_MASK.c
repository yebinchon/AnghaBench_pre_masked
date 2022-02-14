
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Self; int Font; } ;
struct TYPE_5__ {scalar_t__ tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ SYSLINK_INFO ;
typedef scalar_t__ LRESULT ;
typedef int HGDIOBJ ;
typedef int * HDC ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static LRESULT FUNC_4 (const SYSLINK_INFO *VAR_0)
{
    HDC VAR_1 = FUNC_0(VAR_0->Self);
    if(VAR_1 != ((void*)0))
    {
        LRESULT VAR_2;
        TEXTMETRICW VAR_3;
        HGDIOBJ VAR_4 = FUNC_3(VAR_1, VAR_0->Font);

        if(FUNC_1(VAR_1, &VAR_3))
        {
            VAR_2 = VAR_3.tmHeight;
        }
        else
        {
            VAR_2 = 0;
        }
        FUNC_3(VAR_1, VAR_4);
        FUNC_2(VAR_0->Self, VAR_1);

        return VAR_2;
    }
    return 0;
}
