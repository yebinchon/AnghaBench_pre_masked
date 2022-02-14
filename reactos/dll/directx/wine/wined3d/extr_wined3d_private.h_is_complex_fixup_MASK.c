
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_fixup_desc {scalar_t__ x_source; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline BOOL FUNC_0(struct color_fixup_desc VAR_2)
{
    return VAR_2.x_source == VAR_0 || VAR_2.x_source == VAR_1;
}
