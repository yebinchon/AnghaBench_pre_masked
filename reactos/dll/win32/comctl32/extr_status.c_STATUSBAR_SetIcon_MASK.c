
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hIcon; int bound; } ;
struct TYPE_7__ {int numParts; TYPE_2__* parts; int Self; scalar_t__ simple; TYPE_1__ part0; } ;
struct TYPE_6__ {scalar_t__ hIcon; int bound; } ;
typedef TYPE_3__ STATUS_INFO ;
typedef int INT ;
typedef scalar_t__ HICON ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_2 (STATUS_INFO *VAR_2, INT VAR_3, HICON VAR_4)
{
    if ((VAR_3 < -1) || (VAR_3 >= VAR_2->numParts))
 return VAR_0;

    FUNC_1("setting part %d\n", VAR_3);


    if (VAR_3 == -1) {
 if (VAR_2->part0.hIcon == VAR_4)
     return VAR_1;
 VAR_2->part0.hIcon = VAR_4;
 if (VAR_2->simple)
            FUNC_0(VAR_2->Self, &VAR_2->part0.bound, VAR_0);
    } else {
 if (VAR_2->parts[VAR_3].hIcon == VAR_4)
     return VAR_1;

 VAR_2->parts[VAR_3].hIcon = VAR_4;
 if (!(VAR_2->simple))
            FUNC_0(VAR_2->Self, &VAR_2->parts[VAR_3].bound, VAR_0);
    }
    return VAR_1;
}
