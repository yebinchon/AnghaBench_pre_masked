
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_22__ {int style; int hwndParent; int selection_end; int selection_start; } ;
typedef int LRESULT ;
typedef int INT ;
typedef int HWND ;
typedef TYPE_1__ EDITSTATE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int const,int ) ;
 int FUNC_23 (int ,int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;


 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_24 (TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_25(EDITSTATE *VAR_15, INT VAR_16)
{
 BOOL VAR_17;
 BOOL VAR_18;

 if (FUNC_19(VAR_10) & 0x8000)
  return 0;

 VAR_17 = FUNC_19(VAR_11) & 0x8000;
 VAR_18 = FUNC_19(VAR_9) & 0x8000;

 switch (VAR_16) {
 case 137:
 case 128:
  if (FUNC_0(VAR_15, VAR_13, VAR_16) || VAR_16 == 137)
   break;


 case 134:
  if ((VAR_15->style & VAR_4) && (VAR_16 == 128))
   FUNC_10(VAR_15, VAR_17);
  else
   if (VAR_18)
    FUNC_11(VAR_15, VAR_17);
   else
    FUNC_3(VAR_15, VAR_17);
  break;
 case 140:
  if (FUNC_0(VAR_15, VAR_13, VAR_16))
   break;

 case 130:
  if ((VAR_15->style & VAR_4) && (VAR_16 == 140))
   FUNC_4(VAR_15, VAR_17);
  else if (VAR_18)
   FUNC_12(VAR_15, VAR_17);
  else
   FUNC_6(VAR_15, VAR_17);
  break;
 case 136:
  FUNC_7(VAR_15, VAR_17, VAR_18);
  break;
 case 139:
  FUNC_5(VAR_15, VAR_17, VAR_18);
  break;
 case 132:
  if (VAR_15->style & VAR_4)
   FUNC_9(VAR_15, VAR_17);
  else
   FUNC_0(VAR_15, VAR_13, VAR_16);
  break;
 case 133:
  if (VAR_15->style & VAR_4)
   FUNC_8(VAR_15, VAR_17);
  else
   FUNC_0(VAR_15, VAR_13, VAR_16);
  break;
 case 141:
  if (!(VAR_15->style & VAR_5) && !(VAR_17 && VAR_18)) {
   if (VAR_15->selection_start != VAR_15->selection_end) {
    if (VAR_17)
     FUNC_16(VAR_15);
    else
     FUNC_14(VAR_15);
   } else {
    if (VAR_17) {

     FUNC_1(VAR_15, (UINT)-1, 0, VAR_7);
     FUNC_3(VAR_15, VAR_8);
     FUNC_14(VAR_15);
    } else if (VAR_18) {

     FUNC_1(VAR_15, (UINT)-1, 0, VAR_7);
     FUNC_5(VAR_15, VAR_8, VAR_7);
     FUNC_14(VAR_15);
    } else {

     FUNC_1(VAR_15, (UINT)-1, 0, VAR_7);
     FUNC_6(VAR_15, VAR_8);
     FUNC_14(VAR_15);
    }
   }
  }
  break;
 case 135:
  if (VAR_17) {
   if (!(VAR_15->style & VAR_5))
    FUNC_17(VAR_15);
  } else if (VAR_18)
   FUNC_15(VAR_15);
  break;
 case 131:

     if(!(VAR_15->style & VAR_4) || !(VAR_15->style & VAR_6))
     {
                DWORD VAR_19;

                if (!FUNC_2(VAR_15)) break;
                if (VAR_18) break;
                VAR_19 = FUNC_23(VAR_15->hwndParent, VAR_1, 0, 0);
                if (FUNC_20(VAR_19) == VAR_0)
                {
                    HWND VAR_20 = FUNC_18(VAR_15->hwndParent, FUNC_21(VAR_19));
                    if (VAR_20)
                    {
                        FUNC_23(VAR_15->hwndParent, VAR_14, (WPARAM)VAR_20, VAR_8);
                        FUNC_22(VAR_20, VAR_13, 131, 0);
                    }
                }
     }
     break;
        case 138:
            if ((VAR_15->style & VAR_4) && FUNC_2(VAR_15))
                FUNC_22(VAR_15->hwndParent, VAR_12, 0, 0);
            break;
        case 129:
            if ((VAR_15->style & VAR_4) && FUNC_2(VAR_15))
                FUNC_23(VAR_15->hwndParent, VAR_14, VAR_17, 0);
            break;
        case 'A':
            if (VAR_18)
            {
                if (FUNC_1(VAR_15, 0, FUNC_24(VAR_15), VAR_7))
                {
                    FUNC_13(VAR_15, VAR_3);
                    FUNC_13(VAR_15, VAR_2);
                }
            }
            break;
 }
        return VAR_8;
}
