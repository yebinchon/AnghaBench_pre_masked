
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef int png_structp ;
typedef int png_infop ;
typedef scalar_t__ png_bytep ;
typedef int png_byte ;
struct TYPE_5__ {TYPE_1__* error; int mmgr; int stream; } ;
struct TYPE_4__ {scalar_t__ error_no; } ;
typedef scalar_t__ HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Dict ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int **,int *,int) ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_Dict VAR_1,
              png_structp VAR_2,
              png_infop VAR_3)
{
    png_uint_32 VAR_4 = FUNC_4(VAR_2, VAR_3);
    png_uint_32 VAR_5 = FUNC_3(VAR_2, VAR_3);
    png_bytep VAR_6 = FUNC_1 (VAR_1->mmgr, VAR_4);

    if (VAR_6) {
        HPDF_UINT VAR_7;

        for (VAR_7 = 0; VAR_7 < (HPDF_UINT)VAR_5; VAR_7++) {
            FUNC_5(VAR_2, (png_byte**)&VAR_6, ((void*)0), 1);
            if (VAR_1->error->error_no != VAR_0)
                break;

            if (FUNC_2 (VAR_1->stream, VAR_6, VAR_4) != VAR_0)
                break;
        }

        FUNC_0 (VAR_1->mmgr, VAR_6);
    }

    return VAR_1->error->error_no;
}
