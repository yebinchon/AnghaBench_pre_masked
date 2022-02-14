
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LANGID ;
typedef int HKL ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static HKL FUNC_9(LANGID VAR_0, HKL *VAR_1)
{
    HKL VAR_2, VAR_3;
    char VAR_4[64];

    FUNC_6(VAR_4, "%08x", VAR_0);
    FUNC_7("Loading keyboard layout %s\n", VAR_4);
    VAR_2 = FUNC_3(VAR_4, 0);
    if (!VAR_2)
    {
        FUNC_8("Unable to load keyboard layout %s\n", VAR_4);
        return 0;
    }
    *VAR_1 = FUNC_0(VAR_2, 0);
    FUNC_4(*VAR_1 != 0, "Unable to activate keyboard layout %s\n", VAR_4);
    if (!*VAR_1) return 0;

    VAR_3 = FUNC_1(0);
    if (FUNC_2(VAR_3) != VAR_0)
    {






        FUNC_5("current %08x != langid %08x\n", FUNC_2(VAR_3), VAR_0);
        return 0;
    }

    return VAR_2;
}
