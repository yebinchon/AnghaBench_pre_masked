
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TOOLBAR_INFO ;
typedef scalar_t__ INT ;
typedef int HIMAGELIST ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int const*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_4(const TOOLBAR_INFO *VAR_3, INT VAR_4)
{
    HIMAGELIST VAR_5;
    INT VAR_6 = FUNC_1(VAR_3, VAR_4);
    INT VAR_7 = FUNC_2(VAR_3, VAR_4);

    if (((VAR_5 = FUNC_0(VAR_3, VAR_6)) &&
        VAR_7 >= 0 && VAR_7 < FUNC_3(VAR_5)) ||
        (VAR_4 == VAR_1))
      return VAR_2;
    else
      return VAR_0;
}
