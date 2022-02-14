
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ushort ;
typedef scalar_t__ uint ;
typedef int uchar ;
struct TYPE_8__ {int (* flush ) (TYPE_3__*,int *,size_t) ;int flags; int (* wctomb ) (TYPE_3__*,int *,int,int *,size_t) ;void* mode; TYPE_2__* compat; } ;
struct TYPE_9__ {int (* mbtowc ) (TYPE_4__*,int const*,size_t,int *,int*) ;void* mode; TYPE_2__* compat; } ;
struct TYPE_6__ {TYPE_3__ to; TYPE_4__ from; } ;
typedef TYPE_1__ rec_iconv_t ;
typedef scalar_t__ iconv_t ;
struct TYPE_7__ {scalar_t__ in; int flag; scalar_t__ out; } ;
typedef TYPE_2__ compat_t ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,int *,size_t) ;
 int FUNC_1 (TYPE_4__*,int const*,size_t,int *,int*) ;
 int FUNC_2 (TYPE_3__*,int *,int,int *,size_t) ;
 int FUNC_3 (scalar_t__,int *,int*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static size_t
FUNC_5(iconv_t VAR_6, const char **VAR_7, size_t *VAR_8, char **VAR_9, size_t *VAR_10)
{
    rec_iconv_t *VAR_11 = (rec_iconv_t *)VAR_6;
    ushort VAR_12[VAR_4];
    int VAR_13;
    int VAR_14;
    int VAR_15;
    DWORD VAR_16;
    DWORD VAR_17;
    uint VAR_18;
    compat_t *VAR_19;
    int VAR_20;

    if (VAR_7 == ((void*)0) || *VAR_7 == ((void*)0))
    {
        if (VAR_9 != ((void*)0) && *VAR_9 != ((void*)0) && VAR_11->to.flush != ((void*)0))
        {
            VAR_17 = VAR_11->to.mode;
            VAR_14 = VAR_11->to.flush(&VAR_11->to, (uchar *)*VAR_9, *VAR_10);
            if (VAR_14 == -1)
            {
                if ((VAR_11->to.flags & VAR_3) && VAR_5 != VAR_2)
                {
                    VAR_14 = 0;
                }
                else
                {
                    VAR_11->to.mode = VAR_17;
                    return (size_t)(-1);
                }
            }
            *VAR_9 += VAR_14;
            *VAR_10 -= VAR_14;
        }
        VAR_11->from.mode = 0;
        VAR_11->to.mode = 0;
        return 0;
    }

    while (*VAR_8 != 0)
    {
        VAR_16 = VAR_11->from.mode;
        VAR_17 = VAR_11->to.mode;
        VAR_15 = VAR_4;

        VAR_13 = VAR_11->from.mbtowc(&VAR_11->from, (const uchar *)*VAR_7, *VAR_8, VAR_12, &VAR_15);
        if (VAR_13 == -1)
        {
            if (VAR_11->to.flags & VAR_3)
            {
                VAR_11->from.mode = VAR_16;
                VAR_13 = 1;
                VAR_15 = 0;
            }
            else
            {
                VAR_11->from.mode = VAR_16;
                return (size_t)(-1);
            }
        }

        if (VAR_15 == 0)
        {
            *VAR_7 += VAR_13;
            *VAR_8 -= VAR_13;
            continue;
        }

        if (VAR_11->from.compat != ((void*)0))
        {
            VAR_18 = FUNC_4(VAR_12);
            VAR_19 = VAR_11->from.compat;
            for (VAR_20 = 0; VAR_19[VAR_20].in != 0; ++VAR_20)
            {
                if ((VAR_19[VAR_20].flag & VAR_0) && VAR_19[VAR_20].out == VAR_18)
                {
                    FUNC_3(VAR_19[VAR_20].in, VAR_12, &VAR_15);
                    break;
                }
            }
        }

        if (VAR_11->to.compat != ((void*)0))
        {
            VAR_18 = FUNC_4(VAR_12);
            VAR_19 = VAR_11->to.compat;
            for (VAR_20 = 0; VAR_19[VAR_20].in != 0; ++VAR_20)
            {
                if ((VAR_19[VAR_20].flag & VAR_1) && VAR_19[VAR_20].in == VAR_18)
                {
                    FUNC_3(VAR_19[VAR_20].out, VAR_12, &VAR_15);
                    break;
                }
            }
        }

        VAR_14 = VAR_11->to.wctomb(&VAR_11->to, VAR_12, VAR_15, (uchar *)*VAR_9, *VAR_10);
        if (VAR_14 == -1)
        {
            if ((VAR_11->to.flags & VAR_3) && VAR_5 != VAR_2)
            {
                VAR_11->to.mode = VAR_17;
                VAR_14 = 0;
            }
            else
            {
                VAR_11->from.mode = VAR_16;
                VAR_11->to.mode = VAR_17;
                return (size_t)(-1);
            }
        }

        *VAR_7 += VAR_13;
        *VAR_9 += VAR_14;
        *VAR_8 -= VAR_13;
        *VAR_10 -= VAR_14;
    }

    return 0;
}
