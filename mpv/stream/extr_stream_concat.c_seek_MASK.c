
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {scalar_t__ pos; struct priv* priv; } ;
struct priv {int num_streams; int cur; int * streams; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct stream *VAR_0, int64_t VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    int64_t VAR_3 = 0;
    int64_t VAR_4 = 0;




    for (int VAR_5 = 0; VAR_5 < VAR_2->num_streams; VAR_5++) {
        if (VAR_3 > VAR_1)
            break;

        VAR_4 = VAR_3;
        VAR_2->cur = VAR_5;

        int64_t VAR_6 = FUNC_0(VAR_2->streams[VAR_5]);
        if (VAR_6 < 0)
            break;

        VAR_3 = VAR_4 + VAR_6;
    }

    int VAR_7 = FUNC_1(VAR_2->streams[VAR_2->cur], VAR_1 - VAR_4);
    VAR_0->pos = VAR_4 + FUNC_2(VAR_2->streams[VAR_2->cur]);
    return VAR_7;
}
