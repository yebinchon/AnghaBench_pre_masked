
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int chf ;
typedef int WORD ;
struct TYPE_26__ {int cbSize; } ;
struct TYPE_25__ {int nUDArrowX; int styleFlags; int hwndParent; int bDialogMode; int bEmulateVersion10; int nSelectionType; scalar_t__ bMouseCaptured; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef TYPE_2__ CHARFORMAT2W ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int const,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,char*,char*,int ) ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ,int,int ) ;
 int VAR_3 ;

 int VAR_4 ;






 int VAR_5 ;




 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (TYPE_1__*,int ,int) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*,int ,int *,int) ;
 int VAR_9 ;

__attribute__((used)) static BOOL
FUNC_24(ME_TextEditor *VAR_10, WORD VAR_11)
{
  BOOL VAR_12 = FUNC_0(VAR_4) & 0x8000;
  BOOL VAR_13 = FUNC_0(VAR_6) & 0x8000;

  if (VAR_10->bMouseCaptured)
      return VAR_1;
  if (VAR_11 != VAR_6 && VAR_11 != VAR_4 && VAR_11 != VAR_5)
      VAR_10->nSelectionType = VAR_9;

  switch (VAR_11)
  {
    case 134:
    case 130:
    case 135:
    case 137:
        VAR_10->nUDArrowX = -1;

    case 128:
    case 138:
    case 132:
    case 133:
      FUNC_4(VAR_10);
      FUNC_1(VAR_10, VAR_11, VAR_13, VAR_12);
      return VAR_3;
    case 140:
    case 139:
      VAR_10->nUDArrowX = -1;

      if (VAR_10->styleFlags & VAR_0)
        return VAR_1;
      if (FUNC_10(VAR_10))
      {
        FUNC_6(VAR_10);
        FUNC_4(VAR_10);
      }
      else if (VAR_11 == 139)
      {


        FUNC_7(VAR_10, 1, 1);
        FUNC_4(VAR_10);
      }
      else if (FUNC_1(VAR_10, 134, VAR_1, VAR_1))
      {
        BOOL VAR_14;

        FUNC_5(VAR_10);
        VAR_14 = FUNC_7(VAR_10, 1, 1);
        if (!VAR_14 && !VAR_10->bEmulateVersion10) {



          FUNC_1(VAR_10, 130, VAR_1, VAR_1);
        }
        FUNC_3(VAR_10);
      }
      else
        return VAR_3;
      FUNC_11(VAR_10);
      FUNC_16(VAR_10);
      FUNC_15(VAR_10, VAR_1);
      FUNC_13(VAR_10, VAR_1);
      return VAR_3;
    case 131:
      if (!VAR_10->bEmulateVersion10)
          return FUNC_22(VAR_10);
      break;
    case 136:
      if (VAR_10->bDialogMode && VAR_10->hwndParent)
        FUNC_18(VAR_10->hwndParent, VAR_7, 0, 0);
      return VAR_3;
    case 129:
      if (VAR_10->bDialogMode && VAR_10->hwndParent)
        FUNC_19(VAR_10->hwndParent, VAR_8, VAR_13, 0);
      return VAR_3;
    case 'A':
      if (VAR_12)
      {
        FUNC_21( VAR_10, 0, -1 );
        return VAR_3;
      }
      break;
    case 'V':
      if (VAR_12)
        return FUNC_23( VAR_10, 0, ((void*)0), VAR_1 );
      break;
    case 'C':
    case 'X':
      if (VAR_12)
        return FUNC_20(VAR_10, VAR_11 == 'X');
      break;
    case 'Z':
      if (VAR_12)
      {
        FUNC_14(VAR_10);
        return VAR_3;
      }
      break;
    case 'Y':
      if (VAR_12)
      {
        FUNC_12(VAR_10);
        return VAR_3;
      }
      break;

    default:
      if (VAR_11 != VAR_6 && VAR_11 != VAR_4 && VAR_11 && VAR_11 != VAR_5)
          VAR_10->nUDArrowX = -1;
      if (VAR_12)
      {
        if (VAR_11 == 'W')
        {
          CHARFORMAT2W VAR_15;
          char VAR_16[2048];
          VAR_15.cbSize = sizeof(VAR_15);

          FUNC_9(VAR_10, &VAR_15);
          FUNC_8(&VAR_15, VAR_16);
          FUNC_17(((void*)0), VAR_16, "Style dump", VAR_2);
        }
        if (VAR_11 == 'Q')
        {
          FUNC_2(VAR_10);
        }
      }
  }
  return VAR_1;
}
