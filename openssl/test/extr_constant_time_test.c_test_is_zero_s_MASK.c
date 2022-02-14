
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t) ;
 size_t* VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
    size_t VAR_4 = VAR_2[VAR_3];

    if (VAR_4 == 0 && !FUNC_0(FUNC_2(VAR_4), VAR_1))
        return 0;
    if (VAR_4 != 0 && !FUNC_1(FUNC_2(VAR_4), VAR_0))
        return 0;
    return 1;
}
