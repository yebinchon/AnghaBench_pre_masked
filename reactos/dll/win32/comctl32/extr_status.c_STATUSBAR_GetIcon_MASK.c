
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hIcon; } ;
struct TYPE_7__ {int numParts; TYPE_2__* parts; TYPE_1__ part0; } ;
struct TYPE_6__ {int hIcon; } ;
typedef TYPE_3__ STATUS_INFO ;
typedef int INT ;
typedef int HICON ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static HICON
FUNC_1 (const STATUS_INFO *VAR_0, INT VAR_1)
{
    FUNC_0("%d\n", VAR_1);

    if ((VAR_1 < -1) || (VAR_1 >= VAR_0->numParts))
 return 0;

    if (VAR_1 == -1)
        return (VAR_0->part0.hIcon);
    else
        return (VAR_0->parts[VAR_1].hIcon);
}
