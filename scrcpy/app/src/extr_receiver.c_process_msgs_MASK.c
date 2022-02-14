
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receiver {int dummy; } ;
struct device_msg {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char const*,size_t,struct device_msg*) ;
 int FUNC_2 (struct device_msg*) ;
 int FUNC_3 (struct receiver*,struct device_msg*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct receiver *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
    size_t VAR_3 = 0;
    for (;;) {
        struct device_msg VAR_4;
        ssize_t VAR_5 = FUNC_1(&VAR_1[VAR_3], VAR_2 - VAR_3, &VAR_4);
        if (VAR_5 == -1) {
            return -1;
        }
        if (VAR_5 == 0) {
            return VAR_3;
        }

        FUNC_3(VAR_0, &VAR_4);
        FUNC_2(&VAR_4);

        VAR_3 += VAR_5;
        FUNC_0(VAR_3 <= VAR_2);
        if (VAR_3 == VAR_2) {
            return VAR_3;
        }
    }
}
