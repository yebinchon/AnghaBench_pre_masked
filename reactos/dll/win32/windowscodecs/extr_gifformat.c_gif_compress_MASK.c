
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suffix ;
struct TYPE_2__ {scalar_t__ len; } ;
struct output_stream {int * out; TYPE_1__ gif_block; } ;
struct lzw_state {int dummy; } ;
struct input_stream {int len; int const* in; } ;
typedef int ULONG ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct output_stream*) ;
 int FUNC_2 (struct lzw_state*,short,unsigned char) ;
 short FUNC_3 (struct lzw_state*,short,unsigned char) ;
 int FUNC_4 (struct lzw_state*) ;
 int FUNC_5 (struct lzw_state*) ;
 int FUNC_6 (struct lzw_state*) ;
 int FUNC_7 (struct lzw_state*,short) ;
 int FUNC_8 (struct lzw_state*) ;
 int FUNC_9 (struct lzw_state*,short,int ,struct output_stream*) ;
 scalar_t__ FUNC_10 (struct input_stream*,unsigned char*) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_11(IStream *VAR_3, const BYTE *VAR_4, ULONG VAR_5)
{
    struct input_stream VAR_6;
    struct output_stream VAR_7;
    struct lzw_state VAR_8;
    short VAR_9, VAR_10, VAR_11;
    unsigned char VAR_12;

    VAR_6.in = VAR_4;
    VAR_6.len = VAR_5;

    VAR_7.gif_block.len = 0;
    VAR_7.out = VAR_3;

    VAR_9 = VAR_12 = 8;
    if (FUNC_0(VAR_7.out, &VAR_12, sizeof(VAR_12), ((void*)0)) != VAR_1)
        return VAR_0;

    FUNC_9(&VAR_8, VAR_9, VAR_2, &VAR_7);

    if (!FUNC_6(&VAR_8))
        return VAR_0;

    if (FUNC_10(&VAR_6, &VAR_12))
    {
        VAR_10 = VAR_12;

        while (FUNC_10(&VAR_6, &VAR_12))
        {
            VAR_11 = FUNC_3(&VAR_8, VAR_10, VAR_12);
            if (VAR_11 == -1)
            {
                if (!FUNC_7(&VAR_8, VAR_10))
                    return VAR_0;

                if (FUNC_2(&VAR_8, VAR_10, VAR_12) == -1)
                {
                    if (!FUNC_6(&VAR_8))
                        return VAR_0;
                    FUNC_4(&VAR_8);
                }

                VAR_10 = VAR_12;
            }
            else
                VAR_10 = VAR_11;
        }

        if (!FUNC_7(&VAR_8, VAR_10))
            return VAR_0;
        if (!FUNC_8(&VAR_8))
            return VAR_0;
        if (!FUNC_5(&VAR_8))
            return VAR_0;
    }

    return FUNC_1(&VAR_7) ? VAR_1 : VAR_0;
}
