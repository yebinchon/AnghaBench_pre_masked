
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lfWeight; int lfFaceName; } ;
typedef TYPE_1__ LOGFONTA ;
typedef int INT ;
typedef scalar_t__ HFONT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;

void FUNC_5()
{
 HFONT VAR_8;
 LOGFONTA VAR_9;
 INT VAR_10;


 VAR_8 = FUNC_0(15, 0, 0, 0, VAR_5, VAR_4, VAR_4, VAR_4,
                     VAR_1, VAR_7, VAR_0,
                     VAR_3, VAR_2, VAR_6);
 FUNC_3(VAR_8 != 0, "CreateFontA failed\n");

 VAR_10 = FUNC_1(VAR_8, sizeof(LOGFONTA), &VAR_9);
 FUNC_3(VAR_10 == sizeof(LOGFONTA), "result = %d", VAR_10);

 FUNC_3(FUNC_2(VAR_9.lfFaceName, VAR_6, FUNC_4(VAR_6)) == 0, "not equal\n");
 FUNC_3(VAR_9.lfWeight == VAR_5, "lfWeight=%ld\n", VAR_9.lfWeight);

}
