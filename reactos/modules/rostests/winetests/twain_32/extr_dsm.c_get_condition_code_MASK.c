
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TW_UINT16 ;
typedef int TW_STATUS ;
typedef int TW_IDENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(TW_IDENTITY *VAR_4, TW_IDENTITY *VAR_5, TW_STATUS *VAR_6)
{
    TW_UINT16 VAR_7;
    VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_1, VAR_0, VAR_2, VAR_6);
    FUNC_0(VAR_7 == VAR_3, "Condition code not available, rc %d\n", VAR_7);
}
