
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef scalar_t__ int32 ;
typedef int buf ;
typedef int CopyState ;


 int FUNC_0 (int ,int *,int,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(CopyState VAR_0, int32 *VAR_1)
{
 uint32 VAR_2;

 if (FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2), sizeof(VAR_2)) != sizeof(VAR_2))
 {
  *VAR_1 = 0;
  return 0;
 }
 *VAR_1 = (int32) FUNC_1(VAR_2);
 return 1;
}
