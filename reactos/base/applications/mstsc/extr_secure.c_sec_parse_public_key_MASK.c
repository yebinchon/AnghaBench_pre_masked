
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int STREAM ;
typedef int RD_BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static RD_BOOL
FUNC_5(STREAM VAR_7, uint8 * VAR_8, uint8 * VAR_9)
{
 uint32 VAR_10, VAR_11;

 FUNC_1(VAR_7, VAR_10);
 if (VAR_10 != VAR_5)
 {
  FUNC_0("RSA magic 0x%x\n", VAR_10);
  return VAR_0;
 }

 FUNC_1(VAR_7, VAR_11);
 VAR_11 -= VAR_4;
 if ((VAR_11 < VAR_3) || (VAR_11 > VAR_2))
 {
  FUNC_0("Bad server public key size (%u bits)\n", VAR_11 * 8);
  return VAR_0;
 }

 FUNC_3(VAR_7, 8);
 FUNC_2(VAR_7, VAR_9, VAR_1);
 FUNC_2(VAR_7, VAR_8, VAR_11);
 FUNC_3(VAR_7, VAR_4);
 VAR_6 = VAR_11;

 return FUNC_4(VAR_7);
}
