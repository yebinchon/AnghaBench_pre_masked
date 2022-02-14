
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fontdesc ;
struct TYPE_4__ {int int64; } ;
struct TYPE_5__ {int cbSizeofstruct; int lpstrName; void* fStrikethrough; void* fUnderline; void* fItalic; scalar_t__ sCharset; int sWeight; TYPE_1__ cySize; } ;
typedef scalar_t__ SHORT ;
typedef int IFont ;
typedef int HRESULT ;
typedef TYPE_2__ FONTDESC ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int *,void**) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(void)
{
    IFont *VAR_8;
    FONTDESC VAR_9;
    HRESULT VAR_10;
    BSTR VAR_11;
    SHORT VAR_12;




    VAR_9.cbSizeofstruct = sizeof(VAR_9);
    VAR_9.lpstrName = VAR_7;
    VAR_9.cySize.int64 = 12 * 10000;
    VAR_9.sWeight = VAR_2;
    VAR_9.sCharset = VAR_0;
    VAR_9.fItalic = VAR_1;
    VAR_9.fUnderline = VAR_1;
    VAR_9.fStrikethrough = VAR_1;

    VAR_10 = FUNC_9(&VAR_9, &VAR_3, (void **)&VAR_8);
    FUNC_0(VAR_10, VAR_5);

    VAR_10 = FUNC_2(VAR_8, &VAR_12);
    FUNC_0(VAR_10, VAR_5);
    FUNC_8(VAR_12 == VAR_0, "got charset %d\n", VAR_12);

    FUNC_1(VAR_8);



    VAR_9.lpstrName = VAR_6;

    VAR_10 = FUNC_9(&VAR_9, &VAR_3, (void **)&VAR_8);
    FUNC_0(VAR_10, VAR_5);

    VAR_10 = FUNC_2(VAR_8, &VAR_12);
    FUNC_0(VAR_10, VAR_5);
    FUNC_8(VAR_12 == VAR_0, "got charset %d\n", VAR_12);

    VAR_11 = FUNC_5(VAR_7);
    VAR_10 = FUNC_4(VAR_8, VAR_11);
    FUNC_0(VAR_10, VAR_5);
    FUNC_6(VAR_11);

    VAR_10 = FUNC_3(VAR_8, &VAR_11);
    FUNC_0(VAR_10, VAR_5);
    FUNC_8(!FUNC_7(VAR_11, VAR_7), "got name %s\n", FUNC_10(VAR_11));
    FUNC_6(VAR_11);

    VAR_10 = FUNC_2(VAR_8, &VAR_12);
    FUNC_0(VAR_10, VAR_5);
    FUNC_8(VAR_12 == VAR_4, "got charset %d\n", VAR_12);

    FUNC_1(VAR_8);
}
