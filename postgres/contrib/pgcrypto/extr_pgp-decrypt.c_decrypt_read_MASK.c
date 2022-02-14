
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PullFilter ;
typedef int PGP_CFB ;


 int FUNC_0 (int *,int *,int,int *) ;
 int FUNC_1 (int *,int,int **) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, PullFilter *VAR_1, int VAR_2,
    uint8 **VAR_3, uint8 *VAR_4, int VAR_5)
{
 PGP_CFB *VAR_6 = VAR_0;
 uint8 *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_7);
 if (VAR_8 > 0)
 {
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4);
  *VAR_3 = VAR_4;
 }
 return VAR_8;
}
