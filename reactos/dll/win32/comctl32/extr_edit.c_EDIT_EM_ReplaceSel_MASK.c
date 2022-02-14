
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {scalar_t__ right; scalar_t__ left; } ;
struct TYPE_20__ {scalar_t__ selection_start; scalar_t__ selection_end; scalar_t__ text_width; scalar_t__ buffer_limit; scalar_t__ text; int style; scalar_t__ line_count; int text_length; char* undo_text; scalar_t__ undo_insert_count; scalar_t__ undo_position; scalar_t__ x_offset; int flags; TYPE_1__ format_rect; } ;
typedef char* LPWSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HRGN ;
typedef TYPE_2__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int *,int ) ;
 int FUNC_15 (TYPE_2__*,scalar_t__,int ) ;
 int VAR_0 ;
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
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (char*,...) ;
 int VAR_12 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (char const*,scalar_t__) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 scalar_t__ FUNC_22 (TYPE_2__*) ;
 char* FUNC_23 (scalar_t__) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__,scalar_t__) ;
 int FUNC_27 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (char*) ;
 int FUNC_29 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_30(EDITSTATE *VAR_13, BOOL VAR_14, const WCHAR *VAR_15, UINT VAR_16,
                               BOOL VAR_17, BOOL VAR_18)
{
 UINT VAR_19 = FUNC_21(VAR_13);
 UINT VAR_20;
 UINT VAR_21;
 UINT VAR_22;
 UINT VAR_23;
 UINT VAR_24;
 LPWSTR VAR_25;
 HRGN VAR_26 = 0;
 LPWSTR VAR_27 = ((void*)0);
 UINT VAR_28;

 FUNC_17("%s, can_undo %d, send_update %d\n",
     FUNC_20(VAR_15, VAR_16), VAR_14, VAR_17);

 VAR_21 = VAR_13->selection_start;
 VAR_22 = VAR_13->selection_end;

 FUNC_9(VAR_13);
 if ((VAR_21 == VAR_22) && !VAR_16)
  return;

 FUNC_16(VAR_21, VAR_22);

 VAR_24 = VAR_19 - (VAR_22 - VAR_21) + VAR_16;
 if (!VAR_24)
  VAR_13->text_width = 0;



 if ((VAR_18) && (VAR_24 > VAR_13->buffer_limit)) {
  FUNC_12(VAR_13, VAR_3);

  if (VAR_13->buffer_limit < (VAR_19 - (VAR_22-VAR_21)))
   VAR_16 = 0;
  else
   VAR_16 = FUNC_26(VAR_16, VAR_13->buffer_limit - (VAR_19 - (VAR_22-VAR_21)));
 }

 if (!FUNC_10(VAR_13, VAR_19 - (VAR_22 - VAR_21) + VAR_16))
  return;

 if (VAR_22 != VAR_21) {

  FUNC_17("deleting stuff.\n");
  VAR_28 = VAR_22 - VAR_21;
  VAR_27 = FUNC_23((VAR_28 + 1) * sizeof(WCHAR));
  if (!VAR_27) return;
  FUNC_25(VAR_27, VAR_13->text + VAR_21, VAR_28 * sizeof(WCHAR));
  VAR_27[VAR_28] = 0;

  FUNC_27(VAR_13->text + VAR_21, VAR_13->text + VAR_22);
                FUNC_29(VAR_13);
 }
 if (VAR_16) {

  VAR_19 = FUNC_21(VAR_13);
  FUNC_17("inserting stuff (tl %d, strl %d, selstart %d (%s), text %s)\n", VAR_19, VAR_16, VAR_21, FUNC_19(VAR_13->text + VAR_21), FUNC_19(VAR_13->text));
  for (VAR_25 = VAR_13->text + VAR_19 ; VAR_25 >= VAR_13->text + VAR_21 ; VAR_25--)
   VAR_25[VAR_16] = VAR_25[0];
  for (VAR_23 = 0 , VAR_25 = VAR_13->text + VAR_21 ; VAR_23 < VAR_16 ; VAR_23++)
   VAR_25[VAR_23] = VAR_15[VAR_23];
  if(VAR_13->style & VAR_10)
   FUNC_1(VAR_25, VAR_16);
  else if(VAR_13->style & VAR_7)
   FUNC_0(VAR_25, VAR_16);
                FUNC_29(VAR_13);
 }
 if (VAR_13->style & VAR_8)
 {
  INT VAR_29 = FUNC_26(VAR_13->selection_start, VAR_13->selection_end);
  INT VAR_30 = FUNC_22(VAR_13);

  VAR_26 = FUNC_2(0, 0, 0, 0);
  FUNC_4(VAR_13, VAR_29, VAR_29 + VAR_16,
    VAR_16 - FUNC_18(VAR_13->selection_end - VAR_13->selection_start), VAR_26);

  if (VAR_18 && !(VAR_13->style & VAR_5) && (VAR_13->line_count > VAR_30)) {
   if (VAR_16)
    FUNC_27(VAR_13->text + VAR_22, VAR_13->text + VAR_22 + VAR_16);
   if (VAR_22 != VAR_21)
    for (VAR_23 = 0 , VAR_25 = VAR_13->text ; VAR_23 < VAR_22 - VAR_21 ; VAR_23++)
     VAR_25[VAR_23 + VAR_21] = VAR_27[VAR_23];
                        FUNC_29(VAR_13);
   FUNC_4(VAR_13, VAR_21, VAR_22,
    FUNC_18(VAR_13->selection_end - VAR_13->selection_start) - VAR_16, VAR_26);
   VAR_16 = 0;
   VAR_22 = VAR_21;
   VAR_26 = FUNC_2(0, 0, 0, 0);
   FUNC_12(VAR_13, VAR_3);
  }
 }
 else {
  INT VAR_31 = VAR_13->format_rect.right - VAR_13->format_rect.left;
  FUNC_9(VAR_13);
  FUNC_5(VAR_13);

  if (VAR_18 && !(VAR_13->style & VAR_4) && (VAR_13->text_width > VAR_31)) {
   while ((VAR_13->text_width > VAR_31) && VAR_21 + VAR_16 >= VAR_21) {
    FUNC_27(VAR_13->text + VAR_21 + VAR_16 - 1, VAR_13->text + VAR_21 + VAR_16);
    VAR_16--;
    VAR_13->text_length = -1;
    FUNC_9(VAR_13);
    FUNC_5(VAR_13);
   }
                        FUNC_29(VAR_13);
   FUNC_12(VAR_13, VAR_3);
  }
 }

 if (VAR_22 != VAR_21) {
  if (VAR_14) {
   VAR_20 = FUNC_28(VAR_13->undo_text);
   if (!VAR_13->undo_insert_count && (*VAR_13->undo_text && (VAR_21 == VAR_13->undo_position))) {

    FUNC_11(VAR_13, VAR_20 + VAR_22 - VAR_21);
    FUNC_25(VAR_13->undo_text + VAR_20, VAR_27, (VAR_22 - VAR_21)*sizeof(WCHAR));
    (VAR_13->undo_text + VAR_20)[VAR_22 - VAR_21] = 0;
   } else if (!VAR_13->undo_insert_count && (*VAR_13->undo_text && (VAR_22 == VAR_13->undo_position))) {

    FUNC_11(VAR_13, VAR_20 + VAR_22 - VAR_21);
    for (VAR_25 = VAR_13->undo_text + VAR_20 ; VAR_25 >= VAR_13->undo_text ; VAR_25--)
     VAR_25[VAR_22 - VAR_21] = VAR_25[0];
    for (VAR_23 = 0 , VAR_25 = VAR_13->undo_text ; VAR_23 < VAR_22 - VAR_21 ; VAR_23++)
     VAR_25[VAR_23] = VAR_27[VAR_23];
    VAR_13->undo_position = VAR_21;
   } else {

    FUNC_11(VAR_13, VAR_22 - VAR_21);
    FUNC_25(VAR_13->undo_text, VAR_27, (VAR_22 - VAR_21)*sizeof(WCHAR));
    VAR_13->undo_text[VAR_22 - VAR_21] = 0;
    VAR_13->undo_position = VAR_21;
   }

   VAR_13->undo_insert_count = 0;
  } else
   FUNC_6(VAR_13);
 }
 if (VAR_16) {
  if (VAR_14) {
   if ((VAR_21 == VAR_13->undo_position) ||
    ((VAR_13->undo_insert_count) &&
    (VAR_21 == VAR_13->undo_position + VAR_13->undo_insert_count)))




    VAR_13->undo_insert_count += VAR_16;
   else {

    VAR_13->undo_position = VAR_21;
    VAR_13->undo_insert_count = VAR_16;

    *VAR_13->undo_text = '\0';
   }
  } else
   FUNC_6(VAR_13);
 }

 FUNC_24(VAR_27);

 VAR_21 += VAR_16;


 if (VAR_13->style & (VAR_9 | VAR_6))
 {
  INT VAR_32 = VAR_16 - FUNC_18(VAR_13->selection_end - VAR_13->selection_start);

  if (VAR_32 < 0 && VAR_13->x_offset)
  {
   if (FUNC_18(VAR_32) > VAR_13->x_offset)
    VAR_13->x_offset = 0;
   else
    VAR_13->x_offset += VAR_32;
  }
 }

 FUNC_8(VAR_13, VAR_21, VAR_21, VAR_11);
 VAR_13->flags |= VAR_0;
 if (VAR_17) VAR_13->flags |= VAR_1;
 if (VAR_26)
 {
  FUNC_15(VAR_13, VAR_26, VAR_12);
  FUNC_3(VAR_26);
 }
 else
            FUNC_14(VAR_13, ((void*)0), VAR_12);

 FUNC_7(VAR_13);


 FUNC_13(VAR_13);


        if(VAR_17 || (VAR_13->flags & VAR_1))
 {
     VAR_13->flags &= ~VAR_1;
     FUNC_12(VAR_13, VAR_2);
 }
 FUNC_9(VAR_13);
}
