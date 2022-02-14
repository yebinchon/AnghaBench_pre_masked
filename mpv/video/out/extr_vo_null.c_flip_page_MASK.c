
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int cfg_fps; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->cfg_fps) {
        int64_t VAR_2 = 1e6 / VAR_1->cfg_fps;
        int64_t VAR_3 = FUNC_1() / VAR_2;
        int64_t VAR_4 = (VAR_3 + 1) * VAR_2;
        for (;;) {
            int64_t VAR_5 = FUNC_1();
            if (VAR_5 >= VAR_4)
                break;
            FUNC_0(VAR_4 - VAR_5);
        }
    }
}
