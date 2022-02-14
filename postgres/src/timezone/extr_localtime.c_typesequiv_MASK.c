
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttinfo {scalar_t__ tt_utoff; scalar_t__ tt_isdst; scalar_t__ tt_ttisstd; scalar_t__ tt_ttisut; size_t tt_desigidx; } ;
struct state {int typecnt; int * chars; struct ttinfo* ttis; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(const struct state *VAR_0, int VAR_1, int VAR_2)
{
 bool VAR_3;

 if (VAR_0 == ((void*)0) ||
  VAR_1 < 0 || VAR_1 >= VAR_0->typecnt ||
  VAR_2 < 0 || VAR_2 >= VAR_0->typecnt)
  VAR_3 = 0;
 else
 {
  const struct ttinfo *VAR_4 = &VAR_0->ttis[VAR_1];
  const struct ttinfo *VAR_5 = &VAR_0->ttis[VAR_2];

  VAR_3 = (VAR_4->tt_utoff == VAR_5->tt_utoff
      && VAR_4->tt_isdst == VAR_5->tt_isdst
      && VAR_4->tt_ttisstd == VAR_5->tt_ttisstd
      && VAR_4->tt_ttisut == VAR_5->tt_ttisut
      && (FUNC_0(&VAR_0->chars[VAR_4->tt_desigidx],
        &VAR_0->chars[VAR_5->tt_desigidx])
       == 0));
 }
 return VAR_3;
}
