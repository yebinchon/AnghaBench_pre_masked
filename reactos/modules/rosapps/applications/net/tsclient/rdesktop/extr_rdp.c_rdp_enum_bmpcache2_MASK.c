
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;
typedef int HASH_KEY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int,int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static BOOL
FUNC_8(RDPCLIENT * VAR_5)
{
 STREAM VAR_6;
 HASH_KEY VAR_7[VAR_0];
 uint32 VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_9 = 0;
 VAR_8 = FUNC_4(VAR_5, 2, VAR_7);

 while (VAR_9 < VAR_8)
 {
  VAR_10 = FUNC_0(VAR_8 - VAR_9, 169);

  VAR_6 = FUNC_5(VAR_5, 24 + VAR_10 * sizeof(HASH_KEY));

  if(VAR_6 == ((void*)0))
   return VAR_1;

  VAR_11 = 0;
  if (VAR_9 == 0)
   VAR_11 |= VAR_2;
  if (VAR_8 - VAR_9 <= 169)
   VAR_11 |= VAR_3;


  FUNC_2(VAR_6, 0);
  FUNC_1(VAR_6, VAR_10);
  FUNC_1(VAR_6, 0);
  FUNC_1(VAR_6, 0);
  FUNC_1(VAR_6, 0);
  FUNC_1(VAR_6, 0);
  FUNC_1(VAR_6, VAR_8);
  FUNC_2(VAR_6, 0);
  FUNC_2(VAR_6, VAR_11);


  FUNC_3(VAR_6, VAR_7[VAR_9], VAR_10 * sizeof(HASH_KEY));

  FUNC_7(VAR_6);
  if(!FUNC_6(VAR_5, VAR_6, 0x2b))
   return VAR_1;

  VAR_9 += 169;
 }

 return VAR_4;
}
