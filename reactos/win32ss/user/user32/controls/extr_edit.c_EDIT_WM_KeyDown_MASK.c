
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_20__ {int style; int hwndParent; int selection_end; int selection_start; } ;
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
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int const,int ) ;
 int FUNC_23 (int ,int ,int,int) ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static LRESULT FUNC_24(EDITSTATE *VAR_13, INT VAR_14)
{
 BOOL VAR_15;
 BOOL VAR_16;

 if (FUNC_19(VAR_8) & 0x8000)
  return 0;

 VAR_15 = FUNC_19(VAR_9) & 0x8000;
 VAR_16 = FUNC_19(VAR_7) & 0x8000;

 switch (VAR_14) {
 case 137:
 case 128:
  if (FUNC_0(VAR_13, VAR_11, VAR_14) || VAR_14 == 137)
   break;


 case 134:
  if ((VAR_13->style & VAR_2) && (VAR_14 == 128))
   FUNC_10(VAR_13, VAR_15);
  else
   if (VAR_16)
    FUNC_11(VAR_13, VAR_15);
   else
    FUNC_3(VAR_13, VAR_15);
  break;
 case 140:
  if (FUNC_0(VAR_13, VAR_11, VAR_14))
   break;

 case 130:
  if ((VAR_13->style & VAR_2) && (VAR_14 == 140))
   FUNC_4(VAR_13, VAR_15);
  else if (VAR_16)
   FUNC_12(VAR_13, VAR_15);
  else
   FUNC_6(VAR_13, VAR_15);
  break;
 case 136:
  FUNC_7(VAR_13, VAR_15, VAR_16);
  break;
 case 139:
  FUNC_5(VAR_13, VAR_15, VAR_16);
  break;
 case 132:
  if (VAR_13->style & VAR_2)
   FUNC_9(VAR_13, VAR_15);
  else
   FUNC_0(VAR_13, VAR_11, VAR_14);
  break;
 case 133:
  if (VAR_13->style & VAR_2)
   FUNC_8(VAR_13, VAR_15);
  else
   FUNC_0(VAR_13, VAR_11, VAR_14);
  break;
 case 141:
  if (!(VAR_13->style & VAR_3) && !(VAR_15 && VAR_16)) {
   if (VAR_13->selection_start != VAR_13->selection_end) {
    if (VAR_15)
     FUNC_15(VAR_13);
    else
     FUNC_13(VAR_13);
   } else {
    if (VAR_15) {

     FUNC_1(VAR_13, (UINT)-1, 0, VAR_5);
     FUNC_3(VAR_13, VAR_6);
     FUNC_13(VAR_13);
    } else if (VAR_16) {

     FUNC_1(VAR_13, (UINT)-1, 0, VAR_5);
     FUNC_5(VAR_13, VAR_6, VAR_5);
     FUNC_13(VAR_13);
    } else {

     FUNC_1(VAR_13, (UINT)-1, 0, VAR_5);
     FUNC_6(VAR_13, VAR_6);
     FUNC_13(VAR_13);
    }
   }
  }
  break;
 case 135:
  if (VAR_15) {
   if (!(VAR_13->style & VAR_3))
    FUNC_16(VAR_13);
  } else if (VAR_16)
   FUNC_14(VAR_13);
  break;
 case 131:

     if(!(VAR_13->style & VAR_2) || !(VAR_13->style & VAR_4))
     {
                DWORD VAR_17;

                if (!FUNC_2(VAR_13)) break;
                if (VAR_16) break;
                VAR_17 = FUNC_23(VAR_13->hwndParent, VAR_1, 0, 0);
                if (FUNC_20(VAR_17) == VAR_0)
                {
                    HWND VAR_18 = FUNC_18(VAR_13->hwndParent, FUNC_21(VAR_17));
                    if (VAR_18)
                    {
                        FUNC_23(VAR_13->hwndParent, VAR_12, (WPARAM)VAR_18, VAR_6);
                        FUNC_22(VAR_18, VAR_11, 131, 0);
                    }
                }
     }
     break;
        case 138:
            if ((VAR_13->style & VAR_2) && FUNC_2(VAR_13))
                FUNC_22(VAR_13->hwndParent, VAR_10, 0, 0);
            break;
        case 129:
            if ((VAR_13->style & VAR_2) && FUNC_2(VAR_13))
                FUNC_23(VAR_13->hwndParent, VAR_12, VAR_15, 0);
            break;
 }
        return VAR_6;
}
