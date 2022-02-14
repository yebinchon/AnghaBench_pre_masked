
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_7__ {int style; int bEnableState; char password_char; int buffer_size; int undo_buffer_size; int line_count; struct TYPE_7__* logAttr; scalar_t__ hloc32W; struct TYPE_7__* undo_text; struct TYPE_7__* first_line_def; int hwndSelf; void* buffer_limit; int hwndParent; int hwndListBox; } ;
struct TYPE_6__ {int style; int dwExStyle; int hwndParent; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPCREATESTRUCTW ;
typedef int LONG_PTR ;
typedef int LINEDEF ;
typedef int HWND ;
typedef TYPE_2__ EDITSTATE ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static LRESULT FUNC_11(HWND VAR_23, LPCREATESTRUCTW VAR_24)
{
 EDITSTATE *VAR_25;
 UINT VAR_26;

    FUNC_8("Creating edit control, style = %08x\n", VAR_24->style);

    if (!(VAR_25 = FUNC_9(sizeof(*VAR_25))))
        return VAR_11;
    FUNC_6( VAR_23, 0, (LONG_PTR)VAR_25 );







    VAR_25->style = VAR_24->style;

        VAR_25->bEnableState = !(VAR_25->style & VAR_18);

 VAR_25->hwndSelf = VAR_23;

 VAR_25->hwndParent = VAR_24->hwndParent;

 if (VAR_25->style & VAR_4)
    VAR_25->hwndListBox = FUNC_1(VAR_25->hwndParent, VAR_13);


        if (VAR_24->dwExStyle & VAR_20) VAR_25->style |= VAR_9;





        if (VAR_25->style & VAR_7) {
                ;
        } else if (VAR_25->style & VAR_5) {
                VAR_25->style &= ~VAR_10;
        }
 if (VAR_25->style & VAR_6) {
  VAR_25->buffer_limit = VAR_0;
  if (VAR_25->style & VAR_22)
   VAR_25->style |= VAR_2;
  if (VAR_25->style & VAR_21)
   VAR_25->style |= VAR_1;
  VAR_25->style &= ~VAR_8;
  if ((VAR_25->style & VAR_3) || (VAR_25->style & VAR_9)) {

   if (VAR_25->style & VAR_9)
    VAR_25->style &= ~VAR_3;
   VAR_25->style &= ~VAR_21;
   VAR_25->style &= ~VAR_1;
  }
 } else {
  VAR_25->buffer_limit = VAR_0;
  if ((VAR_25->style & VAR_9) && (VAR_25->style & VAR_3))
   VAR_25->style &= ~VAR_3;
  VAR_25->style &= ~VAR_21;
  VAR_25->style &= ~VAR_22;
  if (VAR_25->style & VAR_8)
   VAR_25->password_char = '*';
 }

 VAR_26 = FUNC_5((VAR_25->buffer_size + 1) * sizeof(WCHAR));
 if(!(VAR_25->hloc32W = FUNC_2(VAR_14 | VAR_15, VAR_26)))
     goto cleanup;
 VAR_25->buffer_size = FUNC_4(VAR_25->hloc32W)/sizeof(WCHAR) - 1;

 if (!(VAR_25->undo_text = FUNC_9((VAR_25->buffer_size + 1) * sizeof(WCHAR))))
  goto cleanup;
 VAR_25->undo_buffer_size = VAR_25->buffer_size;

 if (VAR_25->style & VAR_6)
     if (!(VAR_25->first_line_def = FUNC_9(sizeof(LINEDEF))))
         goto cleanup;
 VAR_25->line_count = 1;
 if (VAR_24->dwExStyle & VAR_19)
  VAR_25->style &= ~VAR_17;
        else if (VAR_25->style & VAR_17)
  FUNC_7(VAR_23, VAR_12, VAR_25->style & ~VAR_17);

 return VAR_16;

cleanup:
 FUNC_6(VAR_25->hwndSelf, 0, 0);
 FUNC_0(VAR_25);
 FUNC_10(VAR_25->first_line_def);
 FUNC_10(VAR_25->undo_text);
 if (VAR_25->hloc32W) FUNC_3(VAR_25->hloc32W);
 FUNC_10(VAR_25->logAttr);
 FUNC_10(VAR_25);
 return VAR_11;
}
