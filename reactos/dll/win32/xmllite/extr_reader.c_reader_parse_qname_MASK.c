
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__* resume; } ;
typedef TYPE_1__ xmlreader ;
struct TYPE_17__ {scalar_t__ len; scalar_t__ start; } ;
typedef TYPE_2__ strval ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static HRESULT FUNC_10(xmlreader *VAR_7, strval *VAR_8, strval *VAR_9, strval *VAR_10)
{
    WCHAR *VAR_11;
    UINT VAR_12;
    HRESULT VAR_13;

    if (VAR_7->resume[VAR_6])
    {
        VAR_12 = VAR_7->resume[VAR_6];
        VAR_11 = FUNC_6(VAR_7);
    }
    else
    {
        VAR_11 = FUNC_6(VAR_7);
        VAR_12 = FUNC_5(VAR_7);
        VAR_7->resume[VAR_6] = VAR_12;
        if (!FUNC_3(*VAR_11)) return VAR_2;
    }

    if (VAR_7->resume[VAR_5])
    {
        VAR_13 = FUNC_8(VAR_7, VAR_9, VAR_1);
        if (FUNC_0(VAR_13)) return VAR_13;

        FUNC_7(VAR_7->resume[VAR_6],
                             VAR_9->start - VAR_7->resume[VAR_6] - 1,
                             VAR_8);
    }
    else
    {

        while (FUNC_3(*VAR_11))
        {
            FUNC_9(VAR_7, 1);
            VAR_11 = FUNC_6(VAR_7);
        }

        if (FUNC_4(VAR_7)) return VAR_0;


        if (*VAR_11 == ':')
        {
            FUNC_7(VAR_12, FUNC_5(VAR_7)-VAR_12, VAR_8);


            FUNC_9(VAR_7, 1);
            VAR_13 = FUNC_8(VAR_7, VAR_9, VAR_4);
            if (FUNC_0(VAR_13)) return VAR_13;
        }
        else
        {
            FUNC_7(VAR_7->resume[VAR_6], FUNC_5(VAR_7)-VAR_7->resume[VAR_6], VAR_9);
            FUNC_7(0, 0, VAR_8);
        }
    }

    if (VAR_8->len)
        FUNC_1("qname %s:%s\n", FUNC_2(VAR_7, VAR_8), FUNC_2(VAR_7, VAR_9));
    else
        FUNC_1("ncname %s\n", FUNC_2(VAR_7, VAR_9));

    FUNC_7(VAR_8->len ? VAR_8->start : VAR_9->start,

                        (VAR_8->len ? VAR_8->len + 1 : 0) + VAR_9->len,
                         VAR_10);

    VAR_7->resume[VAR_6] = 0;
    VAR_7->resume[VAR_5] = 0;

    return VAR_3;
}
