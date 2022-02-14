
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802154_addr {int mode; int extended_addr; int short_addr; int pan_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_1(const u8 *VAR_3, int VAR_4, bool VAR_5,
   struct ieee802154_addr *VAR_6)
{
 int VAR_7 = 0;

 VAR_6->mode = VAR_4;

 if (VAR_4 == VAR_1)
  return 0;

 if (!VAR_5) {
  FUNC_0(&VAR_6->pan_id, VAR_3 + VAR_7, 2);
  VAR_7 += 2;
 }

 if (VAR_4 == VAR_2) {
  FUNC_0(&VAR_6->short_addr, VAR_3 + VAR_7, 2);
  return VAR_7 + 2;
 } else {
  FUNC_0(&VAR_6->extended_addr, VAR_3 + VAR_7, VAR_0);
  return VAR_7 + VAR_0;
 }
}
