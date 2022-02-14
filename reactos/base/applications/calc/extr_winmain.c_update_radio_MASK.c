
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {unsigned int base; unsigned int degr; unsigned int size; int hInstance; int code; } ;
struct TYPE_4__ {int mask; int idc; } ;
typedef int LPCTSTR ;
typedef int HWND ;
typedef int HMENU ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const,int const,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

 int const VAR_4 ;

 int const VAR_5 ;
 int const VAR_6 ;


 int const VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_2__ VAR_12 ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,unsigned int) ;
 TYPE_1__* VAR_13 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(HWND VAR_14, unsigned int VAR_15)
{
    HMENU VAR_16;
    LPCTSTR VAR_17;
    WORD VAR_18;
    int VAR_19;

    switch (VAR_15) {
    case 130:
        VAR_17 = FUNC_5(VAR_8);
        VAR_18 = VAR_1;
        break;
    case 129:
        VAR_17 = FUNC_5(VAR_9);
        VAR_18 = VAR_2;
        break;
    case 128:
        VAR_17 = FUNC_5(VAR_9);
        VAR_18 = VAR_3;
        break;
    case 131:
        VAR_17 = FUNC_5(VAR_9);
        VAR_18 = VAR_0;
        break;
    default:
        return;
    }

    if (VAR_12.base != VAR_15) {
        FUNC_10(&VAR_12.code);
        FUNC_9(VAR_15);
        VAR_12.base = VAR_15;
        FUNC_11(VAR_14, &VAR_12.code);

        VAR_16 = FUNC_3(VAR_14);
        FUNC_1(VAR_16);
        VAR_16 = FUNC_4(VAR_12.hInstance, VAR_17);
        FUNC_7(VAR_14, VAR_16);
        FUNC_13(VAR_14);

        for (VAR_19=0; VAR_19<FUNC_6(VAR_13); VAR_19++)
            FUNC_8(FUNC_2(VAR_14, VAR_13[VAR_19].idc), (VAR_13[VAR_19].mask & VAR_18) ? VAR_11 : VAR_10);

        FUNC_12(VAR_14, VAR_15);
    }

    FUNC_0(VAR_14, 129, 131, VAR_12.base);

    if (VAR_15 == 130)
        FUNC_0(VAR_14, VAR_5, VAR_6, VAR_12.degr);
    else
        FUNC_0(VAR_14, VAR_7, VAR_4, VAR_12.size);
}
