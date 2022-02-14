
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
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

DWORD
FUNC_6(
    PUCHAR VAR_3,
    ULONG VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    PVOID * VAR_7,
    PULONG VAR_8)
{
    ULONG VAR_9;
    ULONG VAR_10;

    FUNC_0(VAR_5 != VAR_6);

    VAR_9 = VAR_4 / (VAR_5 / 8);




    if (VAR_5 == 8 && VAR_6 == 16)
    {
         USHORT VAR_11;
         PUSHORT VAR_12 = FUNC_3(FUNC_2(), 0, VAR_9 * sizeof(USHORT));
         if (!VAR_12)
             return VAR_0;

          for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
          {
              VAR_11 = VAR_3[VAR_10];
              VAR_11 *= 2;



              VAR_12[VAR_10] = VAR_11;
          }
          *VAR_7 = VAR_12;
          *VAR_8 = VAR_9 * sizeof(USHORT);
    }
    else if (VAR_5 == 8 && VAR_6 == 32)
    {
         ULONG VAR_13;
         PULONG VAR_14 = FUNC_3(FUNC_2(), 0, VAR_9 * sizeof(ULONG));
         if (!VAR_14)
             return VAR_0;

          for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
          {
              VAR_13 = VAR_3[VAR_10];
              VAR_13 *= 16777216;



              VAR_14[VAR_10] = VAR_13;
          }
          *VAR_7 = VAR_14;
          *VAR_8 = VAR_9 * sizeof(ULONG);
    }
    else if (VAR_5 == 16 && VAR_6 == 32)
    {
         ULONG VAR_15;
         PUSHORT VAR_16 = (PUSHORT)VAR_3;
         PULONG VAR_17 = FUNC_3(FUNC_2(), 0, VAR_9 * sizeof(ULONG));
         if (!VAR_17)
             return VAR_0;

          for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
          {
              VAR_15 = VAR_16[VAR_10];
              VAR_15 *= 65536;



              VAR_17[VAR_10] = VAR_15;
          }
          *VAR_7 = VAR_17;
          *VAR_8 = VAR_9 * sizeof(ULONG);
    }

    else if (VAR_5 == 16 && VAR_6 == 8)
    {
         USHORT VAR_18;
         PUSHORT VAR_19 = (PUSHORT)VAR_3;
         PUCHAR VAR_20 = FUNC_3(FUNC_2(), 0, VAR_9 * sizeof(UCHAR));
         if (!VAR_20)
             return VAR_0;

          for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
          {
              VAR_18 = VAR_19[VAR_10];



              VAR_18 /= 256;
              VAR_20[VAR_10] = (VAR_18 & 0xFF);
          }
          *VAR_7 = VAR_20;
          *VAR_8 = VAR_9 * sizeof(UCHAR);
    }
    else if (VAR_5 == 32 && VAR_6 == 8)
    {
         ULONG VAR_21;
         PULONG VAR_22 = (PULONG)VAR_3;
         PUCHAR VAR_23 = FUNC_3(FUNC_2(), 0, VAR_9 * sizeof(UCHAR));
         if (!VAR_23)
             return VAR_0;

          for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
          {
              VAR_21 = VAR_22[VAR_10];



              VAR_21 /= 16777216;
              VAR_23[VAR_10] = (VAR_21 & 0xFF);
          }
          *VAR_7 = VAR_23;
          *VAR_8 = VAR_9 * sizeof(UCHAR);
    }
    else if (VAR_5 == 32 && VAR_6 == 16)
    {
         USHORT VAR_24;
         PULONG VAR_25 = (PULONG)VAR_3;
         PUSHORT VAR_26 = FUNC_3(FUNC_2(), 0, VAR_9 * sizeof(USHORT));
         if (!VAR_26)
             return VAR_0;

          for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
          {
              VAR_24 = VAR_25[VAR_10];



              VAR_24 /= 65536;
              VAR_26[VAR_10] = (VAR_24 & 0xFFFF);
          }
          *VAR_7 = VAR_26;
          *VAR_8 = VAR_9 * sizeof(USHORT);
    }
    else
    {
        FUNC_1("Not implemented conversion OldWidth %u NewWidth %u\n", VAR_5, VAR_6);
        return VAR_1;
    }

    return VAR_2;
}
