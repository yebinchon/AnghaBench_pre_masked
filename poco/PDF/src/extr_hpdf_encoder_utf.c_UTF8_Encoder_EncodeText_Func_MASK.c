
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UNICODE ;
typedef int HPDF_UINT ;
typedef int HPDF_ParseText_Rec ;
typedef int HPDF_Encoder ;
typedef scalar_t__ HPDF_ByteType ;
typedef int HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int const*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static char *
FUNC_6 (HPDF_Encoder VAR_1,
          const char *VAR_2,
          HPDF_UINT VAR_3,
          HPDF_UINT *VAR_4)
{
    char *VAR_5 = FUNC_5(VAR_3 * 2);
    char *VAR_6 = VAR_5;
    HPDF_ParseText_Rec VAR_7;
    HPDF_UINT VAR_8;

    FUNC_1 (VAR_1, &VAR_7,
          (const HPDF_BYTE *)VAR_2, VAR_3);

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
 HPDF_UNICODE VAR_9;
 HPDF_ByteType VAR_10 = FUNC_0 (VAR_1, &VAR_7);

 if (VAR_10 != VAR_0) {
     VAR_9 = FUNC_2 (VAR_1, 0);

     FUNC_4 (&VAR_9);
     FUNC_3 ((HPDF_BYTE *)VAR_6, (const HPDF_BYTE*)&VAR_9, 2);
     VAR_6 += 2;
        }
    }

    *VAR_4 = VAR_6 - VAR_5;

    return VAR_5;
}
