
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttinfo {int tt_isdst; int tt_desigidx; int tt_ttisstd; int tt_ttisut; int tt_utoff; } ;
typedef int int32 ;



__attribute__((used)) static void
FUNC_0(struct ttinfo *VAR_0, int32 VAR_1, bool VAR_2, int VAR_3)
{
 VAR_0->tt_utoff = VAR_1;
 VAR_0->tt_isdst = VAR_2;
 VAR_0->tt_desigidx = VAR_3;
 VAR_0->tt_ttisstd = 0;
 VAR_0->tt_ttisut = 0;
}
