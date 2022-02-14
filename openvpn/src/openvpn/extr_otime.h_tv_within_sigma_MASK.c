
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval const*,struct timeval const*,int ) ;

__attribute__((used)) static inline bool
FUNC_1(const struct timeval *VAR_1, const struct timeval *VAR_2, unsigned int VAR_3)
{
    const int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);
    return -(int)VAR_3 <= VAR_4 && VAR_4 <= (int)VAR_3;
}
