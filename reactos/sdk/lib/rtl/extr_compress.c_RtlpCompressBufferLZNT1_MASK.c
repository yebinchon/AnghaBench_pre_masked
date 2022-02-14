
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static NTSTATUS
FUNC_2(UCHAR *VAR_2, ULONG VAR_3, UCHAR *VAR_4, ULONG VAR_5,
                        ULONG VAR_6, ULONG *VAR_7, UCHAR *VAR_8)
{
        UCHAR *VAR_9 = VAR_2, *VAR_10 = VAR_2 + VAR_3;
        UCHAR *VAR_11 = VAR_4, *VAR_12 = VAR_4 + VAR_5;
        ULONG VAR_13;

        while (VAR_9 < VAR_10)
        {

            VAR_13 = FUNC_1(0x1000, VAR_10 - VAR_9);
            if (VAR_11 + sizeof(WORD) + VAR_13 > VAR_12)
                return VAR_0;


            *(WORD *)VAR_11 = 0x3000 | (VAR_13 - 1);
            VAR_11 += sizeof(WORD);


            FUNC_0(VAR_11, VAR_9, VAR_13);
            VAR_11 += VAR_13;
            VAR_9 += VAR_13;
        }

        if (VAR_7)
            *VAR_7 = VAR_11 - VAR_4;

        return VAR_1;
}
