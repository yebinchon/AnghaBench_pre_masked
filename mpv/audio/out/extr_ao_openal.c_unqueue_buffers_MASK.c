
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_buffers; } ;
struct ao {struct priv* priv; } ;
typedef int ALint ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int,int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;
    ALint VAR_6;
    int VAR_7 = VAR_5->num_buffers - VAR_3;
    FUNC_0(VAR_2, VAR_0, &VAR_6);
    if (VAR_6 >= VAR_7) {
        FUNC_1(VAR_2, VAR_7, &VAR_1[VAR_3]);
        VAR_3 = 0;
        VAR_6 -= VAR_7;
    }
    if (VAR_6) {
        FUNC_1(VAR_2, VAR_6, &VAR_1[VAR_3]);
        VAR_3 += VAR_6;
    }
}
