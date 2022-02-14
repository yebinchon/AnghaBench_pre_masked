
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cfFormat; int tymed; } ;
typedef TYPE_1__* LPFORMATETC ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef int HBITMAP ;
typedef int * HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int **) ;
 int FUNC_9 (int *,TYPE_1__*,int **) ;
 int FUNC_10 (int *,TYPE_1__*,int **) ;
 int FUNC_11 (int *,TYPE_1__*,int **) ;
 int FUNC_12 (int *,TYPE_1__*,int **) ;
 int FUNC_13 (int *,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_14(IDataObject *VAR_9, LPFORMATETC VAR_10)
{
    HANDLE VAR_11 = ((void*)0);
    HRESULT VAR_12;


    if(VAR_10->cfFormat == VAR_8)
    {
        return FUNC_13(VAR_9, VAR_10);
    }

    if(VAR_10->tymed & VAR_5)
    {
        VAR_12 = FUNC_11(VAR_9, VAR_10, &VAR_11);
    }
    else if(VAR_10->tymed & VAR_6)
    {
        VAR_12 = FUNC_12(VAR_9, VAR_10, &VAR_11);
    }
    else if(VAR_10->tymed & VAR_4)
    {
        VAR_12 = FUNC_9(VAR_9, VAR_10, &VAR_11);
    }
    else if(VAR_10->tymed & VAR_2)
    {
        VAR_12 = FUNC_8(VAR_9, VAR_10, &VAR_11);
    }
    else if(VAR_10->tymed & VAR_7)
    {

        VAR_12 = FUNC_10(VAR_9, VAR_10, &VAR_11);
    }
    else if(VAR_10->tymed & VAR_3)
    {

        VAR_12 = FUNC_7(VAR_9, VAR_10, (HBITMAP *)&VAR_11);
    }
    else
    {
        FUNC_1("Unhandled tymed %x\n", VAR_10->tymed);
        VAR_12 = VAR_1;
    }

    if(FUNC_3(VAR_12))
    {
        if ( !FUNC_4(VAR_10->cfFormat, VAR_11) )
        {
            FUNC_5("() : Failed to set rendered clipboard data into clipboard!\n");
            if(VAR_10->tymed & VAR_7)
                FUNC_6(VAR_11);
            else if(VAR_10->tymed & VAR_3)
                FUNC_0(VAR_11);
            else
                FUNC_2(VAR_11);
            VAR_12 = VAR_0;
        }
    }

    return VAR_12;
}
