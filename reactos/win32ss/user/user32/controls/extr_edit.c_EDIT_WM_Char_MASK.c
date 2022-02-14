
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_10__ {int style; int hwndSelf; int selection_end; int selection_start; } ;
typedef int LRESULT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int ,int const*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static LRESULT FUNC_9(EDITSTATE *VAR_12, WCHAR VAR_13)
{
        BOOL VAR_14;

 VAR_14 = FUNC_7(VAR_7) & 0x8000;

 switch (VAR_13) {
 case '\r':




            if ((VAR_12->style & VAR_0) && !(VAR_12->style & VAR_4))
                if (FUNC_2(VAR_12))
                    break;
 case '\n':
  if (VAR_12->style & VAR_0) {
   if (VAR_12->style & VAR_3) {
    FUNC_5(VAR_12, VAR_5, VAR_5);
    FUNC_4(VAR_12, VAR_5);
   } else {
    static const WCHAR VAR_15[] = {'\r','\n',0};
    FUNC_0(VAR_12, VAR_6, VAR_15, VAR_6, VAR_6);
   }
  }
  break;
 case '\t':
  if ((VAR_12->style & VAR_0) && !(VAR_12->style & VAR_3))
  {
   static const WCHAR VAR_16[] = {'\t',0};
                        if (FUNC_2(VAR_12))
                            break;
   FUNC_0(VAR_12, VAR_6, VAR_16, VAR_6, VAR_6);
  }
  break;
 case 128:
  if (!(VAR_12->style & VAR_3) && !VAR_14) {
   if (VAR_12->selection_start != VAR_12->selection_end)
    FUNC_6(VAR_12);
   else {

    FUNC_1(VAR_12, (UINT)-1, 0, VAR_5);
    FUNC_3(VAR_12, VAR_6);
    FUNC_6(VAR_12);
   }
  }
  break;
 case 0x03:
  if (!(VAR_12->style & VAR_2))
      FUNC_8(VAR_12->hwndSelf, VAR_8, 0, 0);
  break;
 case 0x16:
         if (!(VAR_12->style & VAR_3))
      FUNC_8(VAR_12->hwndSelf, VAR_10, 0, 0);
  break;
 case 0x18:
         if (!((VAR_12->style & VAR_3) || (VAR_12->style & VAR_2)))
      FUNC_8(VAR_12->hwndSelf, VAR_9, 0, 0);
  break;
 case 0x1A:
         if (!(VAR_12->style & VAR_3))
      FUNC_8(VAR_12->hwndSelf, VAR_11, 0, 0);
  break;

 default:

  if( (VAR_12->style & VAR_1) && !( VAR_13 >= '0' && VAR_13 <= '9') )
   break;

  if (!(VAR_12->style & VAR_3) && (VAR_13 >= ' ') && (VAR_13 != 127)) {
   WCHAR VAR_17[2];
    VAR_17[0] = VAR_13;
    VAR_17[1] = '\0';
    FUNC_0(VAR_12, VAR_6, VAR_17, VAR_6, VAR_6);
   }
  break;
 }
    return 1;
}
