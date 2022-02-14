
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
typedef int MPContext ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(MPContext *VAR_0, enum stream_type VAR_1)
{
    switch (VAR_1) {
    case 128:
        return FUNC_1(VAR_0) >= 0;
    case 129:
        return FUNC_0(VAR_0) >= 0;
    }
    return 0;
}
