
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AVCodec {int* pix_fmts; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int const VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static int FUNC_3(struct AVCodec *VAR_1, int VAR_2, bool VAR_3)
{
    const enum AVPixelFormat *VAR_4 = VAR_1->pix_fmts;
    int VAR_5 = 0;
    for (int VAR_6 = 0; VAR_4 && VAR_4[VAR_6] != VAR_0; VAR_6++) {
        int VAR_7 = FUNC_2(VAR_4[VAR_6]);
        if (!VAR_7)
            continue;

        if (!VAR_3 && FUNC_0(VAR_7) > 32)
            continue;
        VAR_5 = VAR_5 ? FUNC_1(VAR_5, VAR_7, VAR_2) : VAR_7;
    }
    return VAR_5;
}
