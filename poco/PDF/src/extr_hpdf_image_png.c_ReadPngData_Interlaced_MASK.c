
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_structp ;
typedef int png_infop ;
typedef int **** png_bytep ;
struct TYPE_5__ {TYPE_1__* error; int mmgr; int stream; } ;
struct TYPE_4__ {scalar_t__ error_no; } ;
typedef size_t HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Dict ;


 int FUNC_0 (int ,int *****) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int *****,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ****,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *****) ;

__attribute__((used)) static HPDF_STATUS
FUNC_7 (HPDF_Dict VAR_1,
                         png_structp VAR_2,
                         png_infop VAR_3)
{
    png_uint_32 VAR_4 = FUNC_5(VAR_2, VAR_3);
    png_uint_32 VAR_5 = FUNC_4(VAR_2, VAR_3);
    png_bytep* VAR_6 = FUNC_1 (VAR_1->mmgr,
                VAR_5 * sizeof (png_bytep));

    if (VAR_6) {
        HPDF_UINT VAR_7;

        FUNC_2 (VAR_6, 0, VAR_5 * sizeof (png_bytep));
        for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5; VAR_7++) {
            VAR_6[VAR_7] = FUNC_1 (VAR_1->mmgr, VAR_4);

            if (VAR_1->error->error_no != VAR_0)
                break;
        }

        if (VAR_1->error->error_no == VAR_0) {
            FUNC_6(VAR_2, VAR_6);
            if (VAR_1->error->error_no == VAR_0) {
                for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5; VAR_7++) {
                    if (FUNC_3 (VAR_1->stream, VAR_6[VAR_7], VAR_4) !=
                            VAR_0)
                        break;
                }
            }
        }


        for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5; VAR_7++) {
            FUNC_0 (VAR_1->mmgr, &VAR_6[VAR_7]);
        }

        FUNC_0 (VAR_1->mmgr, VAR_6);
    }

    return VAR_1->error->error_no;
}
