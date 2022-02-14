
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (int,size_t) ;
 int VAR_1 ;
 unsigned int FUNC_1 (void const*,size_t const,int ) ;

__attribute__((used)) static int FUNC_2(const void* VAR_2, size_t VAR_3)
{
    const int VAR_4 = VAR_1;
    const int VAR_5 = VAR_0;
    const int VAR_6 = VAR_5 - VAR_4;
    size_t const VAR_7 = FUNC_0(16, VAR_3);
    unsigned const VAR_8 = FUNC_1(VAR_2, VAR_7, 0);
    int const VAR_9 = VAR_8 % (VAR_6+1);

    return VAR_4 + VAR_9;
}
