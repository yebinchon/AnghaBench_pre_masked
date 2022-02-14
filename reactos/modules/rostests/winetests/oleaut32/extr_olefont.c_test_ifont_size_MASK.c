
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int Hi; int Lo; } ;
struct TYPE_13__ {int int64; } ;
struct TYPE_10__ {int int64; int Hi; int Lo; } ;
struct TYPE_12__ {int cbSizeofstruct; TYPE_1__ cySize; void* fStrikethrough; void* fUnderline; void* fItalic; scalar_t__ sCharset; scalar_t__ sWeight; int lpstrName; } ;
struct TYPE_11__ {scalar_t__ lfHeight; } ;
typedef int * LPVOID ;
typedef int LONGLONG ;
typedef scalar_t__ LONG ;
typedef TYPE_2__ LOGFONTA ;
typedef int IFont ;
typedef scalar_t__ HRESULT ;
typedef int HFONT ;
typedef TYPE_3__ FONTDESC ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ CY ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_2 ;
 TYPE_6__ FUNC_5 (TYPE_4__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_7 (int,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *,int **) ;

__attribute__((used)) static void FUNC_9(LONGLONG VAR_5, LONG VAR_6, LONG VAR_7,
                            LONG VAR_8, const char * VAR_9)
{
 FONTDESC VAR_10;
 LPVOID VAR_11 = ((void*)0);
 IFont* VAR_12 = ((void*)0);
 HFONT VAR_13;
 LOGFONTA VAR_14;
 CY VAR_15;
 HRESULT VAR_16;
        DWORD VAR_17;

 VAR_10.cbSizeofstruct = sizeof(FONTDESC);
 VAR_10.lpstrName = VAR_4;
 VAR_10.cySize.int64 = VAR_5;
 VAR_10.sWeight = 0;
 VAR_10.sCharset = 0;
        VAR_10.fItalic = VAR_1;
        VAR_10.fUnderline = VAR_1;
        VAR_10.fStrikethrough = VAR_1;


 VAR_16 = FUNC_8(&VAR_10, &VAR_2, &VAR_11);
 VAR_12 = VAR_11;
 FUNC_7(VAR_16 == VAR_3,"%s: OCFI returns 0x%08x instead of S_OK.\n",
  VAR_9, VAR_16);
 FUNC_7(VAR_11 != ((void*)0),"%s: OCFI returns NULL.\n", VAR_9);


        VAR_16 = FUNC_2(VAR_12, VAR_6, VAR_7);
        FUNC_7((VAR_6 && VAR_7) ? VAR_16 == VAR_3 : VAR_16 == VAR_0,
           "%s: IFont_SetRatio unexpectedly returned 0x%08x.\n", VAR_9, VAR_16);


 VAR_16 = FUNC_3(VAR_12, &VAR_15);
 FUNC_7(VAR_16 == VAR_3,"%s: IFont_get_size returns 0x%08x instead of S_OK.\n",
  VAR_9, VAR_16);


 FUNC_7((VAR_15.int64 - VAR_5) < 10000 && (VAR_15.int64 - VAR_5) > -10000,
  "%s: IFont_get_Size: Lo=%d, Hi=%d; expected Lo=%d, Hi=%d.\n",
  VAR_9, FUNC_5(VAR_15).Lo, FUNC_5(VAR_15).Hi, VAR_10.cySize.Lo, VAR_10.cySize.Hi);


 VAR_16 = FUNC_4 (VAR_12, &VAR_13);
 FUNC_7(VAR_16 == VAR_3, "%s: IFont_get_hFont returns 0x%08x instead of S_OK.\n",
  VAR_9, VAR_16);
 VAR_17 = FUNC_0(VAR_13, sizeof(LOGFONTA), &VAR_14);
        FUNC_7(VAR_17 > 0, "GetObject(hfont) failed\n");


 FUNC_7(FUNC_6(VAR_14.lfHeight - VAR_8) <= 1,
  "%s: hFont has lf.lfHeight=%d, expected %d.\n",
  VAR_9, VAR_14.lfHeight, VAR_8);


 FUNC_1(VAR_12);
}
