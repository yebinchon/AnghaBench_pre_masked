
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_7__ {int style; int bEnableState; char password_char; int buffer_size; int undo_buffer_size; int line_count; struct TYPE_7__* logAttr; scalar_t__ hloc32W; struct TYPE_7__* undo_text; struct TYPE_7__* first_line_def; int hwndSelf; void* buffer_limit; int hwndParent; int hwndListBox; scalar_t__ is_unicode; } ;
struct TYPE_6__ {int style; int dwExStyle; int hwndParent; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPCREATESTRUCTW ;
typedef int LONG_PTR ;
typedef int LINEDEF ;
typedef int HWND ;
typedef TYPE_2__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_13 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (char*,char*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static LRESULT FUNC_12(HWND VAR_24, LPCREATESTRUCTW VAR_25, BOOL VAR_26)
{
 EDITSTATE *VAR_27;
 UINT VAR_28;

 FUNC_11("Creating %s edit control, style = %08x\n",
  VAR_26 ? "Unicode" : "ANSI", VAR_25->style);

 if (!(VAR_27 = FUNC_3(FUNC_2(), VAR_13, sizeof(*VAR_27))))
  return VAR_11;
        FUNC_9( VAR_24, 0, (LONG_PTR)VAR_27 );







 VAR_27->is_unicode = VAR_26;
 VAR_27->style = VAR_25->style;

        VAR_27->bEnableState = !(VAR_27->style & VAR_19);

 VAR_27->hwndSelf = VAR_24;

 VAR_27->hwndParent = VAR_25->hwndParent;

 if (VAR_27->style & VAR_4)
    VAR_27->hwndListBox = FUNC_1(VAR_27->hwndParent, VAR_14);


        if (VAR_25->dwExStyle & VAR_21) VAR_27->style |= VAR_9;





        if (VAR_27->style & VAR_7) {
                ;
        } else if (VAR_27->style & VAR_5) {
                VAR_27->style &= ~VAR_10;
        }
 if (VAR_27->style & VAR_6) {
  VAR_27->buffer_limit = VAR_0;
  if (VAR_27->style & VAR_23)
   VAR_27->style |= VAR_2;
  if (VAR_27->style & VAR_22)
   VAR_27->style |= VAR_1;
  VAR_27->style &= ~VAR_8;
  if ((VAR_27->style & VAR_3) || (VAR_27->style & VAR_9)) {

   if (VAR_27->style & VAR_9)
    VAR_27->style &= ~VAR_3;
   VAR_27->style &= ~VAR_22;
   VAR_27->style &= ~VAR_1;
  }
 } else {
  VAR_27->buffer_limit = VAR_0;
  if ((VAR_27->style & VAR_9) && (VAR_27->style & VAR_3))
   VAR_27->style &= ~VAR_3;
  VAR_27->style &= ~VAR_22;
  VAR_27->style &= ~VAR_23;
  if (VAR_27->style & VAR_8)
   VAR_27->password_char = '*';
 }

 VAR_28 = FUNC_8((VAR_27->buffer_size + 1) * sizeof(WCHAR));
 if(!(VAR_27->hloc32W = FUNC_5(VAR_15 | VAR_16, VAR_28)))
     goto cleanup;
 VAR_27->buffer_size = FUNC_7(VAR_27->hloc32W)/sizeof(WCHAR) - 1;

 if (!(VAR_27->undo_text = FUNC_3(FUNC_2(), VAR_13, (VAR_27->buffer_size + 1) * sizeof(WCHAR))))
  goto cleanup;
 VAR_27->undo_buffer_size = VAR_27->buffer_size;

 if (VAR_27->style & VAR_6)
  if (!(VAR_27->first_line_def = FUNC_3(FUNC_2(), VAR_13, sizeof(LINEDEF))))
   goto cleanup;
 VAR_27->line_count = 1;
 if (VAR_25->dwExStyle & VAR_20)
  VAR_27->style &= ~VAR_18;
        else if (VAR_27->style & VAR_18)
  FUNC_10(VAR_24, VAR_12, VAR_27->style & ~VAR_18);

 return VAR_17;

cleanup:
 FUNC_9(VAR_27->hwndSelf, 0, 0);
 FUNC_0(VAR_27);
 FUNC_4(FUNC_2(), 0, VAR_27->first_line_def);
 FUNC_4(FUNC_2(), 0, VAR_27->undo_text);
 if (VAR_27->hloc32W) FUNC_6(VAR_27->hloc32W);
 FUNC_4(FUNC_2(), 0, VAR_27->logAttr);
 FUNC_4(FUNC_2(), 0, VAR_27);
 return VAR_11;
}
