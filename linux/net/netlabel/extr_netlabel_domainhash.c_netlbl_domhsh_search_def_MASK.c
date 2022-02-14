
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct netlbl_dom_map {scalar_t__ valid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct netlbl_dom_map* FUNC_0 (int ) ;
 struct netlbl_dom_map* FUNC_1 (char const*,scalar_t__) ;

__attribute__((used)) static struct netlbl_dom_map *FUNC_2(const char *VAR_5,
             u16 VAR_6)
{
 struct netlbl_dom_map *VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7 != ((void*)0))
  return VAR_7;
 if (VAR_6 == VAR_0 || VAR_6 == VAR_2) {
  VAR_7 = FUNC_0(VAR_3);
  if (VAR_7 != ((void*)0) && VAR_7->valid)
   return VAR_7;
 }
 if (VAR_6 == VAR_1 || VAR_6 == VAR_2) {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 != ((void*)0) && VAR_7->valid)
   return VAR_7;
 }

 return ((void*)0);
}
