
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {scalar_t__ error_no; } ;
struct TYPE_5__ {TYPE_1__ error; int mmgr; int trailer; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MD5_CTX ;
typedef TYPE_2__* HPDF_Doc ;
typedef int HPDF_BYTE ;
typedef scalar_t__ HPDF_Array ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char const*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

HPDF_STATUS
FUNC_11(HPDF_Doc VAR_3)
{
    HPDF_Array VAR_4;
    HPDF_BYTE *VAR_5;
    HPDF_BYTE VAR_6[VAR_0];
    HPDF_MD5_CTX VAR_7;
    time_t VAR_8;

    VAR_8 = FUNC_10(((void*)0));
    VAR_5 = (HPDF_BYTE *)FUNC_9(&VAR_8);

    VAR_4 = FUNC_4(VAR_3->trailer, "ID", VAR_1);
    if (!VAR_4) {
       VAR_4 = FUNC_1(VAR_3->mmgr);

       if (!VAR_4 || FUNC_3(VAR_3->trailer, "ID", VAR_4) != VAR_2)
         return VAR_3->error.error_no;

       FUNC_6(&VAR_7);
       FUNC_7(&VAR_7, (HPDF_BYTE *) "libHaru", sizeof("libHaru") - 1);
       FUNC_7(&VAR_7, VAR_5, FUNC_8((const char *)VAR_5, -1));
       FUNC_5(VAR_6, &VAR_7);

       if (FUNC_0 (VAR_4, FUNC_2 (VAR_3->mmgr, VAR_6, VAR_0)) != VAR_2)
         return VAR_3->error.error_no;

       if (FUNC_0 (VAR_4, FUNC_2 (VAR_3->mmgr,VAR_6,VAR_0)) != VAR_2)
         return VAR_3->error.error_no;

       return VAR_2;
    }

    return VAR_2;
}
