
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_test {scalar_t__* bytes; int text; } ;
typedef int ID3DBlob ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int,char*,char const*,unsigned int,...) ;
 int FUNC_5 (int ,int ,int *,int *,int *,int ,int **,int **) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_5, struct shader_test VAR_6[], unsigned int VAR_7) {
    HRESULT VAR_8;
    DWORD *VAR_9;
    unsigned int VAR_10, VAR_11;
    BOOL VAR_12;
    ID3DBlob *VAR_13, *VAR_14;

    for(VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {

        VAR_14 = ((void*)0);
        VAR_8 = FUNC_5(VAR_6[VAR_10].text, FUNC_6(VAR_6[VAR_10].text), ((void*)0),
                          ((void*)0), ((void*)0), VAR_0,
                          &VAR_13, &VAR_14);
        FUNC_4(VAR_8 == VAR_3, "Test %s, shader %d: D3DAssemble failed with error 0x%x - %d\n", VAR_5, VAR_10, VAR_8, VAR_8 & 0x0000FFFF);
        if(VAR_14) {
            FUNC_7("D3DAssemble messages:\n%s", (char *)FUNC_1(VAR_14));
            FUNC_2(VAR_14);
        }
        if(FUNC_0(VAR_8)) continue;

        VAR_11 = 0;
        VAR_12 = VAR_2;
        VAR_9 = FUNC_1(VAR_13);
        while(VAR_9[VAR_11] != VAR_1 && VAR_6[VAR_10].bytes[VAR_11] != VAR_1) {
            if(VAR_9[VAR_11] != VAR_6[VAR_10].bytes[VAR_11]) VAR_12 = VAR_4;
            VAR_11++;
        };

        if(VAR_9[VAR_11] != VAR_6[VAR_10].bytes[VAR_11]) VAR_12 = VAR_4;

        if(VAR_12) {
            FUNC_4(VAR_2, "Test %s, shader %d: Generated code differs\n", VAR_5, VAR_10);
            FUNC_3(VAR_9);
        }
        FUNC_2(VAR_13);
    }
}
