
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int prefs ;
struct TYPE_5__ {int autoFlush; } ;
typedef TYPE_1__ LZ4F_preferences_t ;


 size_t FUNC_0 (size_t,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 size_t VAR_0 ;

size_t FUNC_2(size_t VAR_1, const LZ4F_preferences_t* VAR_2)
{
    LZ4F_preferences_t VAR_3;
    size_t const VAR_4 = VAR_0;

    if (VAR_2!=((void*)0)) VAR_3 = *VAR_2;
    else FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.autoFlush = 1;

    return VAR_4 + FUNC_0(VAR_1, &VAR_3, 0);;
}
