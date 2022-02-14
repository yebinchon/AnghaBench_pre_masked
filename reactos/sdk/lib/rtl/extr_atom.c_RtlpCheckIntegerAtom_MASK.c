
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UNICODE_STRING ;
typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int* PWSTR ;
typedef int* PWCHAR ;
typedef int* PUSHORT ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int,int*) ;
 int VAR_1 ;

__attribute__((used)) static
BOOLEAN
FUNC_4(
    PWSTR VAR_2,
    PUSHORT VAR_3)
{
    UNICODE_STRING VAR_4;
    ULONG VAR_5;
    USHORT VAR_6;
    PWCHAR VAR_7;

    FUNC_1("RtlpCheckIntegerAtom(AtomName '%S' AtomValue %p)\n",
           VAR_2, VAR_3);

    if (!((ULONG_PTR)VAR_2 & 0xFFFF0000))
    {
        VAR_6 = (USHORT)((ULONG_PTR)VAR_2 & 0xFFFF);

        if (VAR_6 == 0)
            VAR_6 = 0xC000;

        if (VAR_3 != ((void*)0))
            *VAR_3 = VAR_6;

        return VAR_1;
    }





    FUNC_0(VAR_2 != ((void*)0));

    if (*VAR_2 != L'#')
        return VAR_0;

    VAR_7 = VAR_2;
    VAR_7++;
    while (*VAR_7)
    {
        if ((*VAR_7 < L'0') || (*VAR_7 > L'9'))
            return VAR_0;
        VAR_7++;
    }

    VAR_7 = VAR_2;
    VAR_7++;
    FUNC_2(&VAR_4, VAR_7);

    FUNC_1("AtomString: %wZ\n", &VAR_4);

    FUNC_3(&VAR_4, 10, &VAR_5);

    FUNC_1("LongValue: %lu\n", VAR_5);

    *VAR_3 = (USHORT)(VAR_5 & 0x0000FFFF);

    return VAR_1;
}
