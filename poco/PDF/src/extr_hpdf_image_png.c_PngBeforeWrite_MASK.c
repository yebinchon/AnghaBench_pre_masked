
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int png_size_t ;
typedef int png_byte ;
struct TYPE_10__ {scalar_t__ error_no; } ;
struct TYPE_9__ {TYPE_5__* error; int mmgr; int stream; } ;
struct TYPE_8__ {scalar_t__ value; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_String ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Dict ;


 TYPE_1__* FUNC_0 (TYPE_2__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *,int*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int ,int) ;

__attribute__((used)) static HPDF_STATUS
FUNC_11 (HPDF_Dict VAR_6)
{
    HPDF_STATUS VAR_7;
    png_byte VAR_8[VAR_5];
    HPDF_UINT VAR_9 = VAR_5;
    HPDF_Stream VAR_10;
    HPDF_String VAR_11;

    FUNC_4 ((" PngBeforeWrite\n"));

    FUNC_3(VAR_6->stream);

    VAR_11 = FUNC_0 (VAR_6, "_FILE_NAME", VAR_3);
    if (!VAR_11)
        return FUNC_5 (VAR_6->error, VAR_2, 0);

    VAR_10 = FUNC_1 (VAR_6->mmgr, (const char *)(VAR_11->value));
    if (!FUNC_8 (VAR_10))
        return VAR_6->error->error_no;

    FUNC_2 (VAR_8, 0x00, VAR_5);
    VAR_7 = FUNC_7 (VAR_10, VAR_8, &VAR_9);
    if (VAR_7 != VAR_4 ||
            FUNC_10 (VAR_8, (png_size_t)0, VAR_5)) {
        FUNC_6(VAR_10);
        return FUNC_5 (VAR_6->error, VAR_1, 0);
    }

    if ((VAR_7 = FUNC_9 (VAR_6, ((void*)0), VAR_10, VAR_0)) != VAR_4) {
        FUNC_6(VAR_10);
        return VAR_7;
    }

    FUNC_6(VAR_10);

    return VAR_4;
}
