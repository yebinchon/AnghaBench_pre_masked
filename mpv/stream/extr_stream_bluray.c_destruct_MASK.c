
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bluray_priv_s {int bd; scalar_t__ title_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bluray_priv_s *VAR_0)
{
    if (VAR_0->title_info)
        FUNC_1(VAR_0->title_info);
    FUNC_0(VAR_0->bd);
}
