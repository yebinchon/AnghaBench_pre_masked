
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {int sf_crcount; int * sf_count; int sf_gsresp; } ;
struct ifmcaddr6 {int mca_flags; size_t mca_sfmode; int * mca_sfcount; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;







__attribute__((used)) static bool FUNC_0(struct ifmcaddr6 *VAR_3, struct ip6_sf_list *VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 switch (VAR_5) {
 case 128:
 case 129:
  if (VAR_6 || VAR_7)
   return 0;
  if (!((VAR_3->mca_flags & VAR_0) && !VAR_4->sf_gsresp)) {
   if (VAR_3->mca_sfmode == VAR_2)
    return 1;



   if (VAR_4->sf_count[VAR_2])
    return VAR_5 == 128;
   return VAR_3->mca_sfcount[VAR_1] ==
    VAR_4->sf_count[VAR_1];
  }
  return 0;
 case 130:
  if (VAR_6 || VAR_7)
   return 0;
  return VAR_4->sf_count[VAR_2] != 0;
 case 131:
  if (VAR_6 || VAR_7)
   return 0;
  if (VAR_3->mca_sfcount[VAR_1] == 0 ||
      VAR_4->sf_count[VAR_2])
   return 0;
  return VAR_3->mca_sfcount[VAR_1] ==
   VAR_4->sf_count[VAR_1];
 case 133:
  if (VAR_6 || !VAR_4->sf_crcount)
   return 0;
  return (VAR_3->mca_sfmode == VAR_2) ^ VAR_7;
 case 132:
  if (VAR_3->mca_sfmode == VAR_2)
   return VAR_6 || (VAR_4->sf_crcount && VAR_7);
  return VAR_4->sf_crcount && !VAR_6 && !VAR_7;
 }
 return 0;
}
