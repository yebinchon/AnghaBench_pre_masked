
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int* PVOID ;
typedef int* PUSHORT ;
typedef int* PULONG ;
typedef int* PUCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 void* FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

NTSTATUS
FUNC_5(
    PUCHAR VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    ULONG VAR_7,
    PVOID * VAR_8,
    PULONG VAR_9)
{
    ULONG VAR_10;
    ULONG VAR_11;

    FUNC_0(VAR_6 != VAR_7);

    VAR_10 = VAR_5 / (VAR_6 / 8);


    if (VAR_6 == 8 && VAR_7 == 16)
    {
         USHORT VAR_12;
         PUSHORT VAR_13 = FUNC_2(VAR_0, VAR_10 * sizeof(USHORT));
         if (!VAR_13)
             return VAR_1;

          for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
          {
              VAR_12 = VAR_4[VAR_11];
              VAR_12 *= 2;



              VAR_13[VAR_11] = VAR_12;
          }
          *VAR_8 = VAR_13;
          *VAR_9 = VAR_10 * sizeof(USHORT);
    }
    else if (VAR_6 == 8 && VAR_7 == 32)
    {
         ULONG VAR_14;
         PULONG VAR_15 = FUNC_2(VAR_0, VAR_10 * sizeof(ULONG));
         if (!VAR_15)
             return VAR_1;

          for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
          {
              VAR_14 = VAR_4[VAR_11];
              VAR_14 *= 16777216;



              VAR_15[VAR_11] = VAR_14;
          }
          *VAR_8 = VAR_15;
          *VAR_9 = VAR_10 * sizeof(ULONG);
    }
    else if (VAR_6 == 16 && VAR_7 == 32)
    {
         ULONG VAR_16;
         PUSHORT VAR_17 = (PUSHORT)VAR_4;
         PULONG VAR_18 = FUNC_2(VAR_0, VAR_10 * sizeof(ULONG));
         if (!VAR_18)
             return VAR_1;

          for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
          {
              VAR_16 = VAR_17[VAR_11];
              VAR_16 *= 65536;



              VAR_18[VAR_11] = VAR_16;
          }
          *VAR_8 = VAR_18;
          *VAR_9 = VAR_10 * sizeof(ULONG);
    }

    else if (VAR_6 == 16 && VAR_7 == 8)
    {
         USHORT VAR_19;
         PUSHORT VAR_20 = (PUSHORT)VAR_4;
         PUCHAR VAR_21 = FUNC_2(VAR_0, VAR_10 * sizeof(UCHAR));
         if (!VAR_21)
             return VAR_1;

          for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
          {
              VAR_19 = VAR_20[VAR_11];



              VAR_19 /= 256;
              VAR_21[VAR_11] = (VAR_19 & 0xFF);
          }
          *VAR_8 = VAR_21;
          *VAR_9 = VAR_10 * sizeof(UCHAR);
    }
    else if (VAR_6 == 32 && VAR_7 == 8)
    {
         ULONG VAR_22;
         PULONG VAR_23 = (PULONG)VAR_4;
         PUCHAR VAR_24 = FUNC_2(VAR_0, VAR_10 * sizeof(UCHAR));
         if (!VAR_24)
             return VAR_1;

          for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
          {
              VAR_22 = VAR_23[VAR_11];



              VAR_22 /= 16777216;
              VAR_24[VAR_11] = (VAR_22 & 0xFF);
          }
          *VAR_8 = VAR_24;
          *VAR_9 = VAR_10 * sizeof(UCHAR);
    }
    else if (VAR_6 == 32 && VAR_7 == 16)
    {
         USHORT VAR_25;
         PULONG VAR_26 = (PULONG)VAR_4;
         PUSHORT VAR_27 = FUNC_2(VAR_0, VAR_10 * sizeof(USHORT));
         if (!VAR_27)
             return VAR_1;

          for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
          {
              VAR_25 = VAR_26[VAR_11];



              VAR_25 /= 65536;
              VAR_27[VAR_11] = (VAR_25 & 0xFFFF);
          }
          *VAR_8 = VAR_27;
          *VAR_9 = VAR_10 * sizeof(USHORT);
    }
    else
    {
        FUNC_1("Not implemented conversion OldWidth %u NewWidth %u\n", VAR_6, VAR_7);
        return VAR_2;
    }

    return VAR_3;
}
