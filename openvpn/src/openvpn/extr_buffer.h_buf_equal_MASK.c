
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer const*) ;
 int FUNC_1 (struct buffer const*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_3(const struct buffer *VAR_0, const struct buffer *VAR_1)
{
    return FUNC_0(VAR_0) == FUNC_0(VAR_1) && 0 == FUNC_2(FUNC_1(VAR_0), FUNC_1(VAR_1), FUNC_0(VAR_0));
}
