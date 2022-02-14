
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_22__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef enum IMAGE { ____Placeholder_IMAGE } IMAGE ;
typedef char WCHAR ;
typedef int ULONGLONG ;
struct TYPE_29__ {int nNumberOfLinks; int nFileIndexLow; int nFileIndexHigh; } ;
struct TYPE_28__ {int dwFileAttributes; char* cFileName; int nFileSizeLow; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; scalar_t__ nFileSizeHigh; } ;
struct TYPE_33__ {int level; TYPE_4__ bhfi; scalar_t__ bhfi_valid; TYPE_3__ data; int hicon; TYPE_2__* next; struct TYPE_33__* up; } ;
struct TYPE_30__ {int left; int top; int right; int bottom; } ;
struct TYPE_32__ {int itemState; TYPE_5__ rcItem; int hDC; } ;
struct TYPE_31__ {int visible_cols; int* widths; scalar_t__ treePane; } ;
struct TYPE_25__ {int dwFileAttributes; } ;
struct TYPE_27__ {TYPE_1__ data; } ;
struct TYPE_26__ {int himl; } ;
typedef TYPE_5__ RECT ;
typedef TYPE_6__ Pane ;
typedef TYPE_7__* LPDRAWITEMSTRUCT ;
typedef scalar_t__ HRGN ;
typedef int HICON ;
typedef scalar_t__ HBRUSH ;
typedef TYPE_8__ Entry ;
typedef int DWORD ;
typedef int COLORREF ;


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
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int,int,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;


 int FUNC_6 (int ,TYPE_5__*,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 TYPE_22__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_9 (int ,int,int ,int,int,int,int,int ,int ,int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int,int ) ;
 int VAR_39 ;
 int FUNC_12 (int,int,int) ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_16 (TYPE_6__*,TYPE_7__*,int,char*) ;
 int FUNC_17 (TYPE_6__*,TYPE_7__*,int,char*) ;
 int FUNC_18 (int *,char*,int) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,char const*) ;
 int FUNC_22 (TYPE_6__*,TYPE_7__*,int,char*) ;
 int FUNC_23 (TYPE_6__*,TYPE_7__*,int,char*) ;
 int FUNC_24 (TYPE_6__*,TYPE_7__*,int,char*,int ) ;
 char const* VAR_44 ;
 int FUNC_25 (char*,char const*,int ,...) ;

__attribute__((used)) static void FUNC_26(Pane* VAR_45, LPDRAWITEMSTRUCT VAR_46, Entry* VAR_47, int VAR_48)
{
 WCHAR VAR_49[VAR_0];
 DWORD VAR_50;
 int VAR_51 = VAR_45->visible_cols;
 COLORREF VAR_52, VAR_53;
 RECT VAR_54 = VAR_46->rcItem;
 HBRUSH VAR_55;
 enum IMAGE VAR_56;
 int VAR_57, VAR_58;
 int VAR_59 = 0;

 if (VAR_47) {
  VAR_50 = VAR_47->data.dwFileAttributes;

  if (VAR_50 & VAR_16) {
   if (VAR_47->data.cFileName[0] == '.' && VAR_47->data.cFileName[1] == '.'
     && VAR_47->data.cFileName[2] == '\0')
    VAR_56 = VAR_36;
   else if (VAR_47->data.cFileName[0] == '.' && VAR_47->data.cFileName[1] == '\0')
    VAR_56 = VAR_35;
                        else if (VAR_45->treePane && (VAR_46->itemState&VAR_39))
    VAR_56 = VAR_38;
   else
    VAR_56 = VAR_34;
  } else {
   switch(FUNC_20(VAR_47->data.cFileName)) {
     case 128: VAR_56 = VAR_32; break;
     case 129: VAR_56 = VAR_31; break;
     default: VAR_56 = VAR_33;
   }
  }
 } else {
  VAR_50 = 0;
  VAR_56 = VAR_37;
 }

 if (VAR_45->treePane) {
  if (VAR_47) {
   VAR_57 = VAR_46->rcItem.left + VAR_47->level*(VAR_30+VAR_43);

   if (VAR_48 == -1) {
    int VAR_60;
    int VAR_61 = VAR_46->rcItem.top + VAR_29/2;
    Entry* VAR_62;
    RECT VAR_63;
    HRGN VAR_64 = FUNC_0(0, 0, 0, 0);
    HRGN VAR_65;

    VAR_63.left = VAR_46->rcItem.left;
    VAR_63.top = VAR_46->rcItem.top;
    VAR_63.right = VAR_46->rcItem.left+VAR_45->widths[VAR_59];
    VAR_63.bottom = VAR_46->rcItem.bottom;

    VAR_65 = FUNC_1(&VAR_63);

    if (!FUNC_7(VAR_46->hDC, VAR_64)) {
     FUNC_3(VAR_64);
     VAR_64 = 0;
    }

    FUNC_5(VAR_46->hDC, VAR_65, VAR_40);
    FUNC_3(VAR_65);

    if ((VAR_62=VAR_47->up) != ((void*)0)) {
     FUNC_11(VAR_46->hDC, VAR_57-VAR_30/2, VAR_61, 0);
     FUNC_10(VAR_46->hDC, VAR_57-2, VAR_61);

     VAR_60 = VAR_57 - VAR_30/2;

     do {
      VAR_60 -= VAR_30+VAR_43;

      if (VAR_62->next
       && (VAR_62->next->data.dwFileAttributes & VAR_16)
       ) {
       FUNC_11(VAR_46->hDC, VAR_60, VAR_46->rcItem.top, 0);
       FUNC_10(VAR_46->hDC, VAR_60, VAR_46->rcItem.bottom);
      }
     } while((VAR_62=VAR_62->up) != ((void*)0));
    }

    VAR_60 = VAR_57 - VAR_30/2;

    FUNC_11(VAR_46->hDC, VAR_60, VAR_46->rcItem.top, 0);
    FUNC_10(VAR_46->hDC, VAR_60, VAR_61);

    if (VAR_47->next
                                        && (VAR_47->next->data.dwFileAttributes&VAR_16))
     FUNC_10(VAR_46->hDC, VAR_60, VAR_46->rcItem.bottom);

    FUNC_13(VAR_46->hDC, VAR_64);
    if (VAR_64) FUNC_3(VAR_64);
   } else if (VAR_48==VAR_59 || VAR_48==VAR_4) {
    int VAR_66 = VAR_57 + VAR_30 - VAR_43;

    if (VAR_66 > VAR_45->widths[VAR_59])
     VAR_45->widths[VAR_59] = VAR_66;
   }
  } else {
   VAR_57 = VAR_46->rcItem.left;
  }
 } else {
  VAR_57 = VAR_46->rcItem.left;

  if (VAR_48==VAR_59 || VAR_48==VAR_4)
   VAR_45->widths[VAR_59] = VAR_30;
 }

 if (VAR_48 == -1) {
  VAR_54.left = VAR_57 -2;

  if (VAR_50 & VAR_15)
   VAR_53 = VAR_2;
  else
   VAR_53 = FUNC_12(0,0,0);

  if (VAR_46->itemState & VAR_39) {
   VAR_53 = FUNC_12(255,255,255);
   VAR_52 = VAR_3;
  } else {
   VAR_52 = FUNC_12(255,255,255);
  }

  VAR_55 = FUNC_2(VAR_52);
  FUNC_6(VAR_46->hDC, &VAR_54, VAR_55);
  FUNC_3(VAR_55);

  FUNC_14(VAR_46->hDC, VAR_42);
  FUNC_15(VAR_46->hDC, VAR_53);

  VAR_58 = VAR_45->widths[VAR_59];

  if (VAR_58 && VAR_56!=VAR_37) {
   if (VAR_58 > VAR_30)
    VAR_58 = VAR_30;

   if (VAR_47->hicon && VAR_47->hicon!=(HICON)-1)
    FUNC_4(VAR_46->hDC, VAR_57, VAR_46->rcItem.top, VAR_47->hicon, VAR_58, FUNC_8(VAR_41), 0, 0, VAR_11);
   else
    FUNC_9(VAR_27.himl, VAR_56, VAR_46->hDC,
         VAR_57, VAR_46->rcItem.top, VAR_58,
         VAR_29, VAR_52, VAR_1, VAR_28);
  }
 }

 if (!VAR_47)
  return;

 VAR_59++;


 if (VAR_48 == -1)
  FUNC_24(VAR_45, VAR_46, VAR_59, VAR_47->data.cFileName, 0);
 else if (VAR_48==VAR_59 || VAR_48==VAR_4)
  FUNC_17(VAR_45, VAR_46, VAR_59, VAR_47->data.cFileName);

 VAR_59++;


 if (VAR_51 & VAR_9) {
                FUNC_19( VAR_49, ((ULONGLONG)VAR_47->data.nFileSizeHigh << 32) | VAR_47->data.nFileSizeLow );

                if (VAR_48 == -1)
                        FUNC_22(VAR_45, VAR_46, VAR_59, VAR_49);
                else if (VAR_48==VAR_59 || VAR_48==VAR_4)
                        FUNC_17(VAR_45, VAR_46, VAR_59, VAR_49);

  VAR_59++;
 }


 if (VAR_51 & (VAR_6|VAR_10)) {
  FUNC_18(&VAR_47->data.ftCreationTime, VAR_49, VAR_51);
  if (VAR_48 == -1)
   FUNC_24(VAR_45, VAR_46, VAR_59, VAR_49, 0);
  else if (VAR_48==VAR_59 || VAR_48==VAR_4)
   FUNC_17(VAR_45, VAR_46, VAR_59, VAR_49);
  VAR_59++;

  FUNC_18(&VAR_47->data.ftLastAccessTime, VAR_49, VAR_51);
  if (VAR_48 == -1)
   FUNC_24(VAR_45, VAR_46, VAR_59, VAR_49, 0);
  else if (VAR_48==VAR_59 || VAR_48==VAR_4)
   FUNC_17(VAR_45, VAR_46, VAR_59, VAR_49);
  VAR_59++;

  FUNC_18(&VAR_47->data.ftLastWriteTime, VAR_49, VAR_51);
  if (VAR_48 == -1)
   FUNC_24(VAR_45, VAR_46, VAR_59, VAR_49, 0);
  else if (VAR_48==VAR_59 || VAR_48==VAR_4)
   FUNC_17(VAR_45, VAR_46, VAR_59, VAR_49);
  VAR_59++;
 }

 if (VAR_47->bhfi_valid) {
  if (VAR_51 & VAR_7) {
                        static const WCHAR VAR_67[] = {'%','X',0};
                        static const WCHAR VAR_68[] = {'%','X','%','0','8','X',0};

                        if (VAR_47->bhfi.nFileIndexHigh)
                            FUNC_25(VAR_49, VAR_68,
                                     VAR_47->bhfi.nFileIndexHigh, VAR_47->bhfi.nFileIndexLow );
                        else
                            FUNC_25(VAR_49, VAR_67, VAR_47->bhfi.nFileIndexLow );

   if (VAR_48 == -1)
    FUNC_24(VAR_45, VAR_46, VAR_59, VAR_49, VAR_13);
   else if (VAR_48==VAR_59 || VAR_48==VAR_4)
    FUNC_17(VAR_45, VAR_46, VAR_59, VAR_49);

   VAR_59++;
  }

  if (VAR_51 & VAR_8) {
   FUNC_25(VAR_49, VAR_44, VAR_47->bhfi.nNumberOfLinks);

   if (VAR_48 == -1)
    FUNC_24(VAR_45, VAR_46, VAR_59, VAR_49, VAR_12);
   else if (VAR_48==VAR_59 || VAR_48==VAR_4)
    FUNC_17(VAR_45, VAR_46, VAR_59, VAR_49);

   VAR_59++;
  }
 } else
  VAR_59 += 2;


 if (VAR_51 & VAR_5) {
  static const WCHAR VAR_69[] = {' ','\t',' ','\t',' ','\t',' ','\t',' ','\t',' ','\t',' ','\t',' ','\t',' ','\t',' ','\t',' ','\t',' ','\0'};
  FUNC_21(VAR_49, VAR_69);

  if (VAR_50 & VAR_19) VAR_49[ 0] = 'N';
  else {
   if (VAR_50 & VAR_22) VAR_49[ 2] = 'R';
   if (VAR_50 & VAR_18) VAR_49[ 4] = 'H';
   if (VAR_50 & VAR_25) VAR_49[ 6] = 'S';
   if (VAR_50 & VAR_14) VAR_49[ 8] = 'A';
   if (VAR_50 & VAR_15) VAR_49[10] = 'C';
   if (VAR_50 & VAR_16) VAR_49[12] = 'D';
   if (VAR_50 & VAR_17) VAR_49[14] = 'E';
   if (VAR_50 & VAR_26) VAR_49[16] = 'T';
   if (VAR_50 & VAR_24) VAR_49[18] = 'P';
   if (VAR_50 & VAR_23) VAR_49[20] = 'Q';
   if (VAR_50 & VAR_21) VAR_49[22] = 'O';
   if (VAR_50 & VAR_20) VAR_49[24] = 'X';
  }

  if (VAR_48 == -1)
   FUNC_23(VAR_45, VAR_46, VAR_59, VAR_49);
  else if (VAR_48==VAR_59 || VAR_48==VAR_4)
   FUNC_16(VAR_45, VAR_46, VAR_59, VAR_49);

  VAR_59++;
 }
}
