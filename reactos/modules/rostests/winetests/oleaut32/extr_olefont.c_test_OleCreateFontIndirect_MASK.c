
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fontdesc ;
struct TYPE_4__ {int int64; } ;
struct TYPE_5__ {int cbSizeofstruct; void* fStrikethrough; void* fUnderline; void* fItalic; int sCharset; int sWeight; TYPE_1__ cySize; int lpstrName; } ;
typedef int IUnknown ;
typedef int IFont ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ FONTDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int *,void**) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int *,void**) ;

__attribute__((used)) static void FUNC_9(void)
{
    FONTDESC VAR_10;
    IUnknown *VAR_11, *VAR_12;
    IFont *VAR_13;
    HRESULT VAR_14;

    VAR_10.cbSizeofstruct = sizeof(VAR_10);
    VAR_10.lpstrName = VAR_9;
    VAR_10.cySize.int64 = 12 * 10000;
    VAR_10.sWeight = VAR_4;
    VAR_10.sCharset = VAR_0;
    VAR_10.fItalic = VAR_3;
    VAR_10.fUnderline = VAR_3;
    VAR_10.fStrikethrough = VAR_3;

    VAR_14 = FUNC_8(&VAR_10, &VAR_6, (void**)&VAR_13);
    FUNC_1(VAR_14, VAR_8);
    FUNC_2(VAR_13);


    VAR_10.cbSizeofstruct = sizeof(VAR_10)-1;
    VAR_14 = FUNC_8(&VAR_10, &VAR_6, (void**)&VAR_13);
    FUNC_1(VAR_14, VAR_8);
    FUNC_2(VAR_13);

    VAR_10.cbSizeofstruct = sizeof(VAR_10)+1;
    VAR_14 = FUNC_8(&VAR_10, &VAR_6, (void**)&VAR_13);
    FUNC_1(VAR_14, VAR_8);
    FUNC_2(VAR_13);

    VAR_10.cbSizeofstruct = 0;
    VAR_14 = FUNC_8(&VAR_10, &VAR_6, (void**)&VAR_13);
    FUNC_1(VAR_14, VAR_8);
    FUNC_2(VAR_13);

    VAR_14 = FUNC_5(((void*)0));
    FUNC_7(VAR_14 == VAR_8, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_0(&VAR_2, VAR_1, ((void*)0), &VAR_5, (void**)&VAR_11);
    FUNC_7(VAR_14 == VAR_8, "got 0x%08x\n", VAR_14);

    VAR_14 = FUNC_3(VAR_11, &VAR_7, (void**)&VAR_12);
    FUNC_7(VAR_14 == VAR_8, "got 0x%08x\n", VAR_14);

    FUNC_4(VAR_11);
    FUNC_4(VAR_12);

    FUNC_6();
}
