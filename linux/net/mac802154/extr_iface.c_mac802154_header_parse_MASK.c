
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; int extended_addr; } ;
struct ieee802154_hdr {TYPE_1__ source; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff const*,struct ieee802154_hdr*) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(const struct sk_buff *VAR_2, unsigned char *VAR_3)
{
 struct ieee802154_hdr VAR_4;

 if (FUNC_0(VAR_2, &VAR_4) < 0) {
  FUNC_2("malformed packet\n");
  return 0;
 }

 if (VAR_4.source.mode == VAR_0) {
  FUNC_1(VAR_3, &VAR_4.source.extended_addr);
  return VAR_1;
 }

 return 0;
}
