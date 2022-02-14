
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int format; } ;
typedef int AVCodec ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 (int const*,int) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_1, const AVCodec *VAR_2)
{
    int VAR_3[VAR_0 + 1];
    FUNC_0(VAR_1->format, VAR_3);

    for (int VAR_4 = 0; VAR_3[VAR_4]; VAR_4++) {
        if (FUNC_1(VAR_2, VAR_3[VAR_4])) {
            VAR_1->format = VAR_3[VAR_4];
            break;
        }
    }
}
