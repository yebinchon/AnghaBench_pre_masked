
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int flags; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_channel *VAR_3,
    char *VAR_4, int VAR_5, int VAR_6)
{
 if (FUNC_0(VAR_6 > VAR_5))
  return 0;

 if (VAR_3->flags & VAR_0)
  return FUNC_1(VAR_4 + VAR_6,
     VAR_5 - VAR_6,
     "%d Disabled\n",
     VAR_3->center_freq);

 return FUNC_1(VAR_4 + VAR_6,
    VAR_5 - VAR_6,
    "%d HT40 %c%c\n",
    VAR_3->center_freq,
    (VAR_3->flags & VAR_1) ?
    ' ' : '-',
    (VAR_3->flags & VAR_2) ?
    ' ' : '+');
}
