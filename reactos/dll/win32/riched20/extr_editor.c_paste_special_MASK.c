
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cfFormat; } ;
struct paste_format {scalar_t__ (* paste ) (TYPE_2__*,TYPE_4__*,int *) ;TYPE_4__ fmt; } ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int styleFlags; } ;
struct TYPE_9__ {scalar_t__ dwAspect; } ;
typedef int STGMEDIUM ;
typedef TYPE_1__ REPASTESPECIAL ;
typedef TYPE_2__ ME_TextEditor ;
typedef int IDataObject ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int **) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 () ;
 struct paste_format* VAR_8 ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_4__*,int *) ;

__attribute__((used)) static BOOL FUNC_8(ME_TextEditor *VAR_9, UINT VAR_10, REPASTESPECIAL *VAR_11, BOOL VAR_12)
{
    HRESULT VAR_13;
    STGMEDIUM VAR_14;
    struct paste_format *VAR_15;
    IDataObject *VAR_16;


    if (VAR_9->styleFlags & VAR_3)
    {
        if (!VAR_12)
            FUNC_4(VAR_5);
        return VAR_4;
    }

    FUNC_6();

    if (VAR_11 && VAR_11->dwAspect != VAR_2)
        FUNC_0("Ignoring aspect %x\n", VAR_11->dwAspect);

    VAR_13 = FUNC_5( &VAR_16 );
    if (VAR_13 != VAR_7) return VAR_4;

    if (VAR_10 == VAR_0) VAR_10 = VAR_1;

    VAR_13 = VAR_6;
    for (VAR_15 = VAR_8; VAR_15->fmt.cfFormat; VAR_15++)
    {
        if (VAR_10 && VAR_10 != VAR_15->fmt.cfFormat) continue;
        VAR_13 = FUNC_2( VAR_16, &VAR_15->fmt );
        if (VAR_13 == VAR_7)
        {
            if (!VAR_12)
            {
                VAR_13 = FUNC_1( VAR_16, &VAR_15->fmt, &VAR_14 );
                if (VAR_13 != VAR_7) goto done;
                VAR_13 = VAR_15->paste( VAR_9, &VAR_15->fmt, &VAR_14 );
            }
            break;
        }
    }

done:
    FUNC_3( VAR_16 );

    return VAR_13 == VAR_7;
}
