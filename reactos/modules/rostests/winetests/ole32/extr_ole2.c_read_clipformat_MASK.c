
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int length ;
typedef int clipformat ;
typedef int ULONG ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int*,int,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(IStream *VAR_1)
{
    HRESULT VAR_2;
    ULONG VAR_3;
    int VAR_4, VAR_5 = -2;

    VAR_2 = FUNC_0(VAR_1, &VAR_4, sizeof(VAR_4), &VAR_3);
    if (VAR_2 != VAR_0 || VAR_3 != sizeof(VAR_4))
        return -2;
    if (VAR_4 == 0)
        return 0;
    if (VAR_4 == -1)
    {
        VAR_2 = FUNC_0(VAR_1, &VAR_5, sizeof(VAR_5), &VAR_3);
        if (VAR_2 != VAR_0 || VAR_3 != sizeof(VAR_5))
            return -2;
    }
    else
        FUNC_1(0, "unhandled clipformat length %d\n", VAR_4);

    return VAR_5;
}
