
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_9__ {TYPE_1__ range; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct TYPE_10__ {char* cp; int progLength; TYPE_5__* result; } ;
typedef int INT ;
typedef TYPE_3__ CompilerState ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char,int,int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static INT
FUNC_4(CompilerState *VAR_6, BOOL VAR_7)
{
    UINT VAR_8, VAR_9;
    WCHAR VAR_10;
    const WCHAR *VAR_11 = VAR_6->cp++;

    VAR_10 = *VAR_6->cp;
    if (FUNC_2(VAR_10)) {
        ++VAR_6->cp;
        VAR_8 = FUNC_1(VAR_10, 0xFFFF, ((void*)0), VAR_6);
        VAR_10 = *VAR_6->cp;

        if (!VAR_7 && VAR_8 == VAR_4)
            return VAR_1;

        if (VAR_10 == ',') {
            VAR_10 = *++VAR_6->cp;
            if (FUNC_2(VAR_10)) {
                ++VAR_6->cp;
                VAR_9 = FUNC_1(VAR_10, 0xFFFF, ((void*)0), VAR_6);
                VAR_10 = *VAR_6->cp;
                if (!VAR_7 && VAR_9 == VAR_4)
                    return VAR_0;
                if (!VAR_7 && VAR_8 > VAR_9)
                    return VAR_3;
            } else {
                VAR_9 = (UINT)-1;
            }
        } else {
            VAR_9 = VAR_8;
        }
        if (VAR_10 == '}') {
            VAR_6->result = FUNC_3(VAR_6, VAR_5);
            if (!VAR_6->result)
                return VAR_2;
            VAR_6->result->u.range.min = VAR_8;
            VAR_6->result->u.range.max = VAR_9;





            VAR_6->progLength += (1 + FUNC_0(VAR_8)
                                  + FUNC_0(VAR_9 + 1)
                                  +3);
            return 0;
        }
    }

    VAR_6->cp = VAR_11;
    return -1;
}
