
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_stream {int dummy; } ;


 int FUNC_0 (struct output_stream*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, int VAR_2)
{
    unsigned char *VAR_3 = VAR_1;
    struct output_stream *VAR_4 = VAR_0;
    int VAR_5 = VAR_2;

    while (VAR_5-- > 0)
    {
        if (!FUNC_0(VAR_4, *VAR_3++)) return 0;
    }

    return VAR_2;
}
