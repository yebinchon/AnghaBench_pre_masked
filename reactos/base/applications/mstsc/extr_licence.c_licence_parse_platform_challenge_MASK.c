
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ uint16 ;
typedef int STREAM ;
typedef int RD_BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static RD_BOOL
FUNC_5(STREAM VAR_3, uint8 ** VAR_4, uint8 ** VAR_5)
{
 uint16 VAR_6;

 FUNC_3(VAR_3, 6);

 FUNC_1(VAR_3, VAR_6);
 if (VAR_6 != VAR_2)
 {
  FUNC_0("token len %d\n", VAR_6);
  return VAR_0;
 }

 FUNC_2(VAR_3, *VAR_4, VAR_6);
 FUNC_2(VAR_3, *VAR_5, VAR_1);

 return FUNC_4(VAR_3);
}
