
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef int IPersistStream ;
typedef int IHlink ;
typedef scalar_t__ HRESULT ;
typedef int HGLOBAL ;
typedef unsigned int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 unsigned char* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int) ;
 unsigned char const* VAR_4 ;
 unsigned char const* VAR_5 ;
 unsigned char const* VAR_6 ;
 unsigned char const* VAR_7 ;
 unsigned char const* VAR_8 ;
 unsigned char const* VAR_9 ;
 unsigned int FUNC_10 (unsigned int,unsigned int) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void FUNC_13(const char *VAR_10, IHlink *VAR_11,
                                   const unsigned char *VAR_12,
                                   unsigned int VAR_13,
                                   const unsigned char *VAR_14,
                                   unsigned int VAR_15)
{
    HRESULT VAR_16;
    IStream *VAR_17;
    IPersistStream *VAR_18;
    HGLOBAL VAR_19;
    DWORD VAR_20;
    const unsigned char *VAR_21;
    DWORD VAR_22;
    BOOL VAR_23;

    VAR_16 = FUNC_5(VAR_11, &VAR_1, (void **)&VAR_18);
    FUNC_11(VAR_16 == VAR_2, "IHlink_QueryInterface failed with error 0x%08x\n", VAR_16);

    VAR_16 = FUNC_0(((void*)0), VAR_3, &VAR_17);
    FUNC_11(VAR_16 == VAR_2, "CreateStreamOnHGlobal failed with error 0x%08x\n", VAR_16);

    VAR_16 = FUNC_7(VAR_18, VAR_17, VAR_3);
    FUNC_11(VAR_16 == VAR_2, "IPersistStream_Save failed with error 0x%08x\n", VAR_16);

    VAR_16 = FUNC_1(VAR_17, &VAR_19);
    FUNC_11(VAR_16 == VAR_2, "GetHGlobalFromStream failed with error 0x%08x\n", VAR_16);

    VAR_20 = FUNC_3(VAR_19);

    VAR_21 = FUNC_2(VAR_19);


    FUNC_11((VAR_20 == VAR_13) ||
       (VAR_20 == VAR_15),
       "%s: Size of saved data differs (expected %d or %d, actual %d)\n",
       VAR_10, VAR_13, VAR_15, VAR_20);

    VAR_23 = VAR_3;

    for (VAR_22 = 0; VAR_22 < FUNC_10(VAR_20, VAR_13); VAR_22++)
    {
        if ((VAR_12[VAR_22] != VAR_21[VAR_22]) &&
            (((VAR_12 != VAR_4) &&
              (VAR_12 != VAR_6)) ||
             ((VAR_22 < 52 || VAR_22 >= 56) && (VAR_22 < 80 || VAR_22 >= 84))))
        {
            VAR_23 = VAR_0;
            break;
        }
    }

    if (!VAR_23 && (VAR_14 != VAR_12))
    {

        VAR_23 = VAR_3;
        for (VAR_22 = 0; VAR_22 < FUNC_10(VAR_20, VAR_15); VAR_22++)
        {
            if ((VAR_14 == VAR_9 && VAR_22 == 89) ||
                (VAR_14 == VAR_5 && VAR_22 == 109) ||
                (VAR_14 == VAR_7 && VAR_22 == 109) ||
                (VAR_14 == VAR_8 && VAR_22 == 107) )
            {
                FUNC_11(VAR_21[VAR_22] == 0 || FUNC_9(VAR_21[VAR_22] == 1) || FUNC_9(VAR_21[VAR_22] == 3),
                   "Expected 0 or 1, got %d\n", VAR_21[VAR_22]);
                continue;
            }
            if ((VAR_14[VAR_22] != VAR_21[VAR_22]) &&
                (((VAR_14 != VAR_4) &&
                  (VAR_14 != VAR_6)) ||
                 ((VAR_22 < 52 || VAR_22 >= 56) && (VAR_22 < 80 || VAR_22 >= 84))))
            {
                VAR_23 = VAR_0;
                break;
            }
        }
    }

    FUNC_11(VAR_23, "%s: Saved data differs\n", VAR_10);
    if (!VAR_23)
    {
        for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++)
        {
            if (VAR_22 % 8 == 0) FUNC_12("    ");
            FUNC_12("0x%02x,", VAR_21[VAR_22]);
            if (VAR_22 % 8 == 7) FUNC_12("\n");
        }
        FUNC_12("\n");
    }

    FUNC_4(VAR_19);

    FUNC_8(VAR_17);
    FUNC_6(VAR_18);
}
