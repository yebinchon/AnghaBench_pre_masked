
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int pub_key; } ;
typedef TYPE_1__ MDH ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int ,size_t) ;

__attribute__((used)) static int
FUNC_3(MDH *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
    int VAR_3;
    if (!VAR_0 || !VAR_0->pub_key)
        return 0;

    VAR_3 = (int)FUNC_0(VAR_0->pub_key);
    if (VAR_3 <= 0 || VAR_3 > (int) VAR_2)
        return 0;

    FUNC_2(VAR_1, 0, VAR_2);
    FUNC_1(VAR_0->pub_key, VAR_1 + (VAR_2 - VAR_3), VAR_3);
    return 1;
}
