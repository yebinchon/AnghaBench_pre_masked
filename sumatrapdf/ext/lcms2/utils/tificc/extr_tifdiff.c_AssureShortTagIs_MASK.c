
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int TIFF ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,int,int*) ;

__attribute__((used)) static
void FUNC_2(TIFF* VAR_0, TIFF* VAR_1, int VAR_2, int VAR_3, const char* VAR_4)
{
        uint16 VAR_5;


        if (!FUNC_1(VAR_0, VAR_2, &VAR_5)) goto Err;
        if (VAR_5 != VAR_3) goto Err;

        if (!FUNC_1(VAR_1, VAR_2, &VAR_5)) goto Err;
        if (VAR_5 != VAR_3) goto Err;

        return;
Err:
        FUNC_0("%s is not proper", VAR_4);
}
