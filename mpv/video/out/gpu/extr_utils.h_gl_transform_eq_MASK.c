
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_transform {scalar_t__** m; scalar_t__* t; } ;



__attribute__((used)) static inline bool FUNC_0(struct gl_transform VAR_0, struct gl_transform VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        for (int VAR_3 = 0; VAR_3 < 2; VAR_3++) {
            if (VAR_0.m[VAR_2][VAR_3] != VAR_1.m[VAR_2][VAR_3])
                return 0;
        }
    }

    return VAR_0.t[0] == VAR_1.t[0] && VAR_0.t[1] == VAR_1.t[1];
}
