
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {unsigned int const align_flags; int align_adjust; } ;


 int FUNC_0 (struct frame const*) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_1(const struct frame *VAR_1, const unsigned int VAR_2)
{
    const int VAR_3 = FUNC_0(VAR_1);
    const int VAR_4 = (VAR_2 & VAR_1->align_flags) ? VAR_1->align_adjust : 0;
    const int VAR_5 = ((VAR_0 << 24) - (VAR_3 + VAR_4)) & (VAR_0 - 1);
    return VAR_3 + VAR_5;
}
