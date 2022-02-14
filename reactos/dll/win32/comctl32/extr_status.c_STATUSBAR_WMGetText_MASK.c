
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* parts; } ;
struct TYPE_4__ {int text; } ;
typedef TYPE_2__ STATUS_INFO ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__ INT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static INT
FUNC_4 (const STATUS_INFO *VAR_0, INT VAR_1, LPWSTR VAR_2)
{
    INT VAR_3;

    FUNC_0("\n");
    if (!(VAR_0->parts[0].text))
        return 0;

    VAR_3 = FUNC_3 (VAR_0->parts[0].text);

    if (!VAR_1)
        return VAR_3;
    else if (VAR_1 > VAR_3) {
        FUNC_2 (VAR_2, VAR_0->parts[0].text);
 return VAR_3;
    }
    else {
        FUNC_1 (VAR_2, VAR_0->parts[0].text, (VAR_1 - 1) * sizeof(WCHAR));
        VAR_2[VAR_1 - 1] = 0;
        return VAR_1 - 1;
    }
}
