
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int track_t ;
typedef scalar_t__ lsn_t ;
typedef int CdIo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int const) ;

track_t
FUNC_3(const CdIo_t *VAR_2, lsn_t VAR_3)
{
  if (!VAR_2) return VAR_1;

  {
    track_t VAR_4 = FUNC_0(VAR_2);
    track_t VAR_5 = FUNC_1(VAR_2)+1;
    track_t VAR_6 = VAR_5;

    if (VAR_1 == VAR_4
 || VAR_1 == VAR_5 ) return VAR_1;

    if (VAR_3 < FUNC_2(VAR_2, VAR_4))
      return 0;

    if (VAR_3 > FUNC_2(VAR_2, VAR_0))
      return VAR_1;

    do {
      const track_t VAR_7 = (VAR_4 + VAR_5) / 2;
      const lsn_t VAR_8 = FUNC_2(VAR_2, VAR_7);
      if (VAR_3 <= VAR_8) VAR_5 = VAR_7 - 1;
      if (VAR_3 >= VAR_8) VAR_4 = VAR_7 + 1;
    } while ( VAR_4 <= VAR_5 );

    if (VAR_4 > VAR_5 + 1) {
 VAR_5++;
    }
    if (VAR_5 == VAR_6 ) {
 return VAR_0;
    } else {
 return VAR_5;
    }
  }
}
