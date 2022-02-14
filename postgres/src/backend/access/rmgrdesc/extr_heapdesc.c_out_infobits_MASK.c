
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(StringInfo VAR_5, uint8 VAR_6)
{
 if (VAR_6 & VAR_2)
  FUNC_0(VAR_5, "IS_MULTI ");
 if (VAR_6 & VAR_4)
  FUNC_0(VAR_5, "LOCK_ONLY ");
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5, "EXCL_LOCK ");
 if (VAR_6 & VAR_3)
  FUNC_0(VAR_5, "KEYSHR_LOCK ");
 if (VAR_6 & VAR_0)
  FUNC_0(VAR_5, "KEYS_UPDATED ");
}
