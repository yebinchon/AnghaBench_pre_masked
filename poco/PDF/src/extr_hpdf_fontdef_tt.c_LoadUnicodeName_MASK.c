
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef char HPDF_BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,size_t*) ;
 int FUNC_2 (int ,size_t,int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_3 (HPDF_Stream VAR_3,
                  HPDF_UINT VAR_4,
                  HPDF_UINT VAR_5,
                  char *VAR_6)
{
    HPDF_BYTE VAR_7[VAR_0 * 2 + 1];
    HPDF_UINT VAR_8 = 0;
    HPDF_UINT VAR_9 = 0;
    HPDF_STATUS VAR_10;

    FUNC_0 (VAR_6, 0, VAR_0 + 1);

    if ((VAR_10 = FUNC_2 (VAR_3, VAR_4, VAR_2)) !=
            VAR_1)
        return VAR_10;

    if ((VAR_10 = FUNC_1 (VAR_3, VAR_7, &VAR_5))
             != VAR_1)
        return VAR_10;

    while (VAR_8 < VAR_5) {
        VAR_8++;
        VAR_6[VAR_9] = VAR_7[VAR_8];
        VAR_9++;
        VAR_8++;
    }

    return VAR_1;
}
