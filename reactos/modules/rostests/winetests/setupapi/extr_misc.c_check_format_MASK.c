
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef char CHAR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int,char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static BOOL FUNC_4(LPSTR VAR_4, LPSTR VAR_5)
{
    CHAR VAR_6[VAR_2];
    BOOL VAR_7;

    static const CHAR VAR_8[] = "\\INF\\oem";

    FUNC_1(VAR_6, VAR_2);
    FUNC_2(VAR_6, VAR_8);
    VAR_7 = FUNC_0(VAR_1, VAR_3, VAR_6, -1, VAR_4, FUNC_3(VAR_6)) == VAR_0 &&
          VAR_4[FUNC_3(VAR_6)] != '\\';

    return (!VAR_5) ? VAR_7 : VAR_7 && (VAR_5 == VAR_4 + FUNC_3(VAR_6) - 3);
}
