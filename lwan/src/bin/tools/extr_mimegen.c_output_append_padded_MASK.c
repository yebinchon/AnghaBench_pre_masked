
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct output*,char const*,int) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(struct output *VAR_1, const char *VAR_2)
{
    size_t VAR_3 = FUNC_1(VAR_2);

    if (VAR_3 <= 8) {
        int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
        if (VAR_4 < 0)
            return VAR_4;

        if (VAR_3 != 8)
            return FUNC_0(VAR_1, "\0\0\0\0\0\0\0\0", 8 - VAR_3);

        return 0;
    }

    return -VAR_0;
}
