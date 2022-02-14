
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int modulus ;
typedef int exponent ;
typedef int STREAM ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *,int **,int *,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_6(STREAM VAR_6)
{
 uint8 *VAR_7 = ((void*)0);
 uint8 VAR_8[VAR_1];
 uint8 VAR_9[VAR_0];
 uint32 VAR_10;

 FUNC_2(VAR_8, 0, sizeof(VAR_8));
 FUNC_2(VAR_9, 0, sizeof(VAR_9));
 if (!FUNC_4(VAR_6, &VAR_10, &VAR_7, VAR_8, VAR_9))
 {
  FUNC_0(("Failed to parse crypt info\n"));
  return;
 }
 FUNC_0(("Generating client random\n"));
 FUNC_1(VAR_3);
 FUNC_5(VAR_4, VAR_3, VAR_2,
   VAR_5, VAR_8, VAR_9);
 FUNC_3(VAR_3, VAR_7, VAR_10);
}
