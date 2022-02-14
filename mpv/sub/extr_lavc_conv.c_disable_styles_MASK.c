
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* start; scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 TYPE_1__ FUNC_0 (char*) ;
 TYPE_1__ FUNC_1 (TYPE_1__,scalar_t__) ;
 int FUNC_2 (TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_3(bstr VAR_0)
{
    bstr VAR_1 = FUNC_0("\nStyle: ");
    while (VAR_0.len) {
        int VAR_2 = FUNC_2(VAR_0, VAR_1);
        if (VAR_2 < 0)
            break;
        VAR_0.start[VAR_2 + 1] = '#';
        VAR_0 = FUNC_1(VAR_0, VAR_2 + VAR_1.len);
    }
}
