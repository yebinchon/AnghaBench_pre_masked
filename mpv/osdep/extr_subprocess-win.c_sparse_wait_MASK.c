
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef unsigned int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (unsigned int,scalar_t__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(HANDLE *VAR_3, unsigned VAR_4)
{
    unsigned VAR_5 = 0;
    HANDLE VAR_6[10];
    int VAR_7[10];
    if (VAR_4 > FUNC_0(VAR_6))
        return -1;

    for (unsigned VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        if (!VAR_3[VAR_8])
            continue;

        VAR_6[VAR_5] = VAR_3[VAR_8];
        VAR_7[VAR_5] = VAR_8;
        VAR_5++;
    }

    if (VAR_5 == 0)
        return -1;
    DWORD VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_0, VAR_1);
    VAR_9 -= VAR_2;

    if (VAR_9 >= VAR_5)
        return -1;
    return VAR_7[VAR_9];
}
