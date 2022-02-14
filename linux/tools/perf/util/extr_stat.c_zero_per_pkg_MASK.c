
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {scalar_t__ per_pkg_mask; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct evsel *VAR_0)
{
 if (VAR_0->per_pkg_mask)
  FUNC_1(VAR_0->per_pkg_mask, 0, FUNC_0());
}
