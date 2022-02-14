
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_option {int type; } ;
typedef size_t mpv_format ;


 unsigned int FUNC_0 (struct m_option const*) ;
 struct m_option const* VAR_0 ;

__attribute__((used)) static const struct m_option *FUNC_1(mpv_format VAR_1)
{
    if ((unsigned)VAR_1 >= FUNC_0(VAR_0))
        return ((void*)0);
    if (!VAR_0[VAR_1].type)
        return ((void*)0);
    return &VAR_0[VAR_1];
}
