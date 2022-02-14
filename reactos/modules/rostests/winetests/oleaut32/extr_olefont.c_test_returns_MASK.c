
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fontdesc ;
struct TYPE_4__ {int int64; } ;
struct TYPE_5__ {int cbSizeofstruct; void* fStrikethrough; void* fUnderline; void* fItalic; scalar_t__ sCharset; int sWeight; TYPE_1__ cySize; int lpstrName; } ;
typedef int IFont ;
typedef int HRESULT ;
typedef TYPE_2__ FONTDESC ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int *,void**) ;

__attribute__((used)) static void FUNC_7(void)
{
    IFont *VAR_7;
    FONTDESC VAR_8;
    HRESULT VAR_9;

    VAR_8.cbSizeofstruct = sizeof(VAR_8);
    VAR_8.lpstrName = VAR_5;
    VAR_8.cySize.int64 = 12 * 10000;
    VAR_8.sWeight = VAR_3;
    VAR_8.sCharset = 0;
    VAR_8.fItalic = VAR_2;
    VAR_8.fUnderline = VAR_2;
    VAR_8.fStrikethrough = VAR_2;

    VAR_9 = FUNC_6(&VAR_8, &VAR_4, (void **)&VAR_7);
    FUNC_0(VAR_9, VAR_6);

    VAR_9 = FUNC_5(VAR_7, ((void*)0));
    FUNC_0(VAR_9, VAR_0);

    VAR_9 = FUNC_3(VAR_7, ((void*)0));
    FUNC_0(VAR_9, VAR_1);

    VAR_9 = FUNC_4(VAR_7, ((void*)0));
    FUNC_0(VAR_9, VAR_1);

    VAR_9 = FUNC_2(VAR_7, ((void*)0));
    FUNC_0(VAR_9, VAR_1);

    FUNC_1(VAR_7);
}
