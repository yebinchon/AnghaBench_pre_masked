
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef scalar_t__ ULONG_PTR ;
typedef size_t UCHAR ;
typedef int * PVOID ;
typedef int PEMS_PAGE ;
typedef int PEMS_HANDLE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int ** VAR_8 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static UCHAR FUNC_4(USHORT VAR_9, UCHAR VAR_10, USHORT VAR_11)
{
    PEMS_PAGE VAR_12;
    PEMS_HANDLE VAR_13 = FUNC_1(VAR_9);

    if (!FUNC_3(VAR_13))
        return VAR_2;

    if (VAR_10 >= VAR_1)
        return VAR_4;

    if (VAR_11 == 0xFFFF)
    {

        VAR_8[VAR_10] = ((void*)0);
        return VAR_5;
    }

    VAR_12 = FUNC_2(VAR_13, VAR_11);
    if (!VAR_12) return VAR_3;

    VAR_8[VAR_10] = (PVOID)((ULONG_PTR)VAR_6
                            + FUNC_0(VAR_12, VAR_7) * VAR_0);
    return VAR_5;
}
