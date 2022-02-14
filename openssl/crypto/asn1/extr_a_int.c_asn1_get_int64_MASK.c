
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(int64_t *VAR_5, const unsigned char *VAR_6, size_t VAR_7,
                          int VAR_8)
{
    uint64_t VAR_9;
    if (FUNC_1(&VAR_9, VAR_6, VAR_7) == 0)
        return 0;
    if (VAR_8) {
        if (VAR_9 <= VAR_4) {


            *VAR_5 = -(int64_t)VAR_9;
        } else if (VAR_9 == VAR_0) {


            *VAR_5 = (int64_t)(0 - VAR_9);
        } else {
            FUNC_0(VAR_1, VAR_3);
            return 0;
        }
    } else {
        if (VAR_9 <= VAR_4) {
            *VAR_5 = (int64_t)VAR_9;
        } else {
            FUNC_0(VAR_1, VAR_2);
            return 0;
        }
    }
    return 1;
}
