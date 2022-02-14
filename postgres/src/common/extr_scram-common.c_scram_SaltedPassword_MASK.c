
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int scram_HMAC_ctx ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (char const*) ;

void
FUNC_6(const char *VAR_1,
      const char *VAR_2, int VAR_3, int VAR_4,
      uint8 *VAR_5)
{
 int VAR_6 = FUNC_5(VAR_1);
 uint32 VAR_7 = FUNC_1(1);
 int VAR_8,
    VAR_9;
 uint8 VAR_10[VAR_0];
 uint8 VAR_11[VAR_0];
 scram_HMAC_ctx VAR_12;
 FUNC_3(&VAR_12, (uint8 *) VAR_1, VAR_6);
 FUNC_4(&VAR_12, VAR_2, VAR_3);
 FUNC_4(&VAR_12, (char *) &VAR_7, sizeof(uint32));
 FUNC_2(VAR_11, &VAR_12);
 FUNC_0(VAR_5, VAR_11, VAR_0);


 for (VAR_8 = 2; VAR_8 <= VAR_4; VAR_8++)
 {
  FUNC_3(&VAR_12, (uint8 *) VAR_1, VAR_6);
  FUNC_4(&VAR_12, (const char *) VAR_11, VAR_0);
  FUNC_2(VAR_10, &VAR_12);
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   VAR_5[VAR_9] ^= VAR_10[VAR_9];
  FUNC_0(VAR_11, VAR_10, VAR_0);
 }
}
