
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nb_items; int locale; TYPE_1__* items; } ;
struct TYPE_6__ {char* str; } ;
typedef char* LPCWSTR ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static INT FUNC_3( LB_DESCR *VAR_1, LPCWSTR VAR_2 )
{
    INT VAR_3, VAR_4, VAR_5;

    if (!FUNC_0(VAR_1))
        return FUNC_1( VAR_1, VAR_2, VAR_0 );
    VAR_3 = 0;
    VAR_4 = VAR_1->nb_items;
    while (VAR_3 != VAR_4)
    {
        INT VAR_6 = (VAR_3 + VAR_4) / 2;
        LPCWSTR VAR_7 = VAR_1->items[VAR_6].str;
        if (*VAR_7 == '[')
        {
            if (*VAR_2 != '[') VAR_5 = -1;
            else if (VAR_7[1] == '-')
            {
                if (VAR_2[1] == '-') VAR_5 = VAR_2[2] - VAR_7[2];
                else VAR_5 = -1;
            }
            else
            {
                if (VAR_2[1] == '-') VAR_5 = 1;
                else VAR_5 = FUNC_2( VAR_1->locale, VAR_2, VAR_7 );
            }
        }
        else
        {
            if (*VAR_2 == '[') VAR_5 = 1;
            else VAR_5 = FUNC_2( VAR_1->locale, VAR_2, VAR_7 );
        }
        if (!VAR_5) return VAR_6;
        if (VAR_5 < 0) VAR_4 = VAR_6;
        else VAR_3 = VAR_6 + 1;
    }
    return VAR_4;
}
