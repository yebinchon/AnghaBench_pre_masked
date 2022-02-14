
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT_PTR ;
typedef scalar_t__ UINT ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef scalar_t__ HMENU ;
typedef scalar_t__ HICON ;
typedef scalar_t__ HDC ;
typedef int HBRUSH ;
typedef scalar_t__ HBITMAP ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int ,scalar_t__,int,int,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (scalar_t__,int ,int,int ,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_20 (int ,int ,int ,int,int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_21 (int ,scalar_t__) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (int ,int ,int ,int ) ;
 int FUNC_24 (scalar_t__,int ) ;
 int FUNC_25 (scalar_t__,scalar_t__,int ) ;
 int FUNC_26 (char*,...) ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_27 (int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_28( HWND VAR_31, HWND VAR_32 )
{
    HMENU VAR_33 = FUNC_13( VAR_31 );
    HMENU VAR_34;
    HBITMAP VAR_35 = 0;
    HICON VAR_36;
    INT VAR_37;
    UINT VAR_38;

    FUNC_26("frame %p,child %p\n",VAR_31,VAR_32);

    if( !VAR_33 ) return VAR_2;


    VAR_37 = FUNC_14(VAR_33) - 1;
    VAR_38 = FUNC_15(VAR_33,VAR_37) ;
    if (VAR_38 == VAR_25 || VAR_38 == VAR_21)
    {
        FUNC_9("system buttons already exist\n");
 return VAR_2;
    }


    if (!(VAR_34 = FUNC_17(VAR_32, VAR_2)))
    {
        FUNC_26("child %p doesn't have a system menu\n", VAR_32);
        return VAR_2;
    }

    FUNC_0(VAR_33, VAR_18 | VAR_14,
                VAR_21, FUNC_27(VAR_32, VAR_34) ?
                (LPCWSTR)VAR_5 : (LPCWSTR)VAR_6 );
    FUNC_0(VAR_33, VAR_18 | VAR_14,
                VAR_25, (LPCWSTR)VAR_8 );
    FUNC_0(VAR_33, VAR_18 | VAR_14,
                VAR_23, (LPCWSTR)VAR_7 ) ;


    VAR_36 = (HICON)FUNC_23(VAR_32, VAR_30, VAR_10, 0);
    if (!VAR_36)
        VAR_36 = (HICON)FUNC_11(VAR_32, VAR_4);
    if (!VAR_36)
        VAR_36 = (HICON)FUNC_23(VAR_32, VAR_30, VAR_9, 0);
    if (!VAR_36)
        VAR_36 = (HICON)FUNC_11(VAR_32, VAR_3);
    if (!VAR_36)
        VAR_36 = FUNC_20(0, (LPWSTR)VAR_11, VAR_12, FUNC_18(VAR_27),
                           FUNC_18(VAR_28), VAR_13);
    if (VAR_36)
    {
      HDC VAR_39;
      HBITMAP VAR_40, VAR_41;
      HBRUSH VAR_42;
      HDC VAR_43 = FUNC_12(VAR_32);

      if (VAR_43)
      {
        int VAR_44, VAR_45;
        VAR_44 = FUNC_18(VAR_27);
        VAR_45 = FUNC_18(VAR_28);
        VAR_39 = FUNC_2(VAR_43);
        VAR_40 = FUNC_1(VAR_43, VAR_44, VAR_45);
        VAR_41 = FUNC_22(VAR_39, VAR_40);
        FUNC_24(VAR_39, VAR_20);
        VAR_42 = FUNC_3(FUNC_16(VAR_0));
        FUNC_7(VAR_39, 0, 0, VAR_36, VAR_44, VAR_45, 0, VAR_42, VAR_1);
        FUNC_22 (VAR_39, VAR_41);
        FUNC_5(VAR_42);
        FUNC_4(VAR_39);
        FUNC_21(VAR_32, VAR_43);
        VAR_35 = VAR_40;
      }
    }

    if( !FUNC_19(VAR_33,0,VAR_16 | VAR_14 | VAR_19,
                     (UINT_PTR)VAR_34, (LPSTR)VAR_35))
    {
        FUNC_26("not inserted\n");
 FUNC_6(VAR_34);
        return VAR_2;
    }

    FUNC_10(VAR_34, VAR_26, VAR_15 | VAR_17);
    FUNC_10(VAR_34, VAR_24, VAR_15 | VAR_17);
    FUNC_10(VAR_34, VAR_22, VAR_15 | VAR_17);
    FUNC_25(VAR_34, VAR_21, VAR_2);


    FUNC_8(VAR_31);

    return VAR_29;
}
