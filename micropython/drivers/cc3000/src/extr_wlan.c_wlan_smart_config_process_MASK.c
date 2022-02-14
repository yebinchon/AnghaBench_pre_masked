
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ INT32 ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*) ;
 int* VAR_3 ;
 scalar_t__ FUNC_3 (int const,scalar_t__*,int,int *,int,int,int,int,scalar_t__*,int) ;

INT32 FUNC_4()
{
 INT32 VAR_4;
 UINT32 VAR_5, VAR_6;
 UINT8 *VAR_7;
 UINT8 *VAR_8;


 VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 != 0)
  return VAR_4;
 VAR_4 = FUNC_2(VAR_0, VAR_1, 0, VAR_3);

 if (VAR_4 != 0)
  return VAR_4;

 VAR_8 = &VAR_3[1];

 VAR_5 = VAR_3[0];

 VAR_7 = &VAR_3[VAR_3[0] + 3];

 FUNC_0(VAR_7, VAR_2);
 if (VAR_3[VAR_3[0] + 1] > 16)
  FUNC_0((UINT8 *)(VAR_7 + 16), VAR_2);

 if (*(UINT8 *)(VAR_7 +31) != 0)
 {
  if (*VAR_7 == 31)
  {
   VAR_6 = 31;
   VAR_7++;
  }
  else
  {
   VAR_6 = 32;
  }
 }
 else
 {
  VAR_6 = *VAR_7;
  VAR_7++;
 }


 switch (VAR_3[VAR_3[0] + 2])
 {
 case 131:
  {
   VAR_4 = FUNC_3(VAR_3[VAR_3[0] + 2],
    VAR_8,
    VAR_5,
    ((void*)0),
    1,
    0, 0, 0, 0, 0);

   break;
  }

 case 130:
  {
   VAR_4 = FUNC_3(VAR_3[VAR_3[0] + 2],
    VAR_8,
    VAR_5,
    ((void*)0),
    1,
    VAR_6,
    0,
    0,
    VAR_7,
    0);

   break;
  }

 case 129:
 case 128:
  {
   VAR_4 = FUNC_3(128,
    VAR_8,
    VAR_5,
    ((void*)0),
    1,
    0x18,
    0x1e,
    2,
    VAR_7,
    VAR_6);

   break;
  }
 }

 return VAR_4;
}
