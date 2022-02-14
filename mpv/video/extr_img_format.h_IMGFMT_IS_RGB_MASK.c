
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_imgfmt_desc {int flags; int num_planes; } ;


 int VAR_0 ;
 struct mp_imgfmt_desc FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(int VAR_1)
{
    struct mp_imgfmt_desc VAR_2 = FUNC_0(VAR_1);
    return (VAR_2.flags & VAR_0) && VAR_2.num_planes == 1;
}
