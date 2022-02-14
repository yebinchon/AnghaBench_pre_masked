
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct priv {int dummy; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (struct priv*,char*,int ,int ) ;
 int ** VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static uint64_t FUNC_4(struct priv *VAR_1,
                                        uint64_t VAR_2, uint64_t VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
        uint64_t VAR_5 = FUNC_2(&VAR_0[VAR_4][0]);
        uint64_t VAR_6 = FUNC_2(&VAR_0[VAR_4][1]);
        if ((VAR_2 & VAR_5) == VAR_5 && (VAR_2 & VAR_6) == 0 &&
            (VAR_3 & VAR_5) == 0 && (VAR_3 & VAR_6) == VAR_6)
        {
            VAR_3 = (VAR_3 & ~VAR_6) | VAR_5;

            FUNC_1(VAR_1, "Fudge: %s -> %s\n",
                       FUNC_3(&VAR_0[VAR_4][0]),
                       FUNC_3(&VAR_0[VAR_4][1]));
        }
    }
    return VAR_3;
}
