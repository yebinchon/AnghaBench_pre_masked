
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802154_addr {int mode; int extended_addr; int short_addr; int pan_id; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(u8 *VAR_3, const struct ieee802154_addr *VAR_4,
    bool VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4->mode == VAR_2)
  return 0;

 if (!VAR_5) {
  FUNC_0(VAR_3 + VAR_6, &VAR_4->pan_id, 2);
  VAR_6 += 2;
 }

 switch (VAR_4->mode) {
 case 128:
  FUNC_0(VAR_3 + VAR_6, &VAR_4->short_addr, 2);
  VAR_6 += 2;
  break;

 case 129:
  FUNC_0(VAR_3 + VAR_6, &VAR_4->extended_addr, VAR_1);
  VAR_6 += VAR_1;
  break;

 default:
  return -VAR_0;
 }

 return VAR_6;
}
