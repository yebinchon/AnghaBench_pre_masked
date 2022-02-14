
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {scalar_t__ seekable; struct priv* priv; } ;
struct priv {size_t cur; int num_streams; int * streams; } ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct stream *VAR_0, void *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;

    while (1) {
        int VAR_4 = FUNC_0(VAR_3->streams[VAR_3->cur], VAR_1, VAR_2);
        if (VAR_4 || VAR_3->cur == VAR_3->num_streams - 1)
            return VAR_4;

        VAR_3->cur += 1;
        if (VAR_0->seekable)
            FUNC_1(VAR_3->streams[VAR_3->cur], 0);
    }
}
