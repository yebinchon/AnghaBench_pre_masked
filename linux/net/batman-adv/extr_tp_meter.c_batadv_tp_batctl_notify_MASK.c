
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct batadv_priv {int dummy; } ;
typedef enum batadv_tp_meter_reason { ____Placeholder_batadv_tp_meter_reason } batadv_tp_meter_reason ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_priv*,int const*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(enum batadv_tp_meter_reason VAR_2,
        const u8 *VAR_3, struct batadv_priv *VAR_4,
        unsigned long VAR_5, u64 VAR_6,
        u32 VAR_7)
{
 u32 VAR_8;
 u8 VAR_9;
 u32 VAR_10;

 if (!FUNC_1(VAR_2)) {
  VAR_9 = VAR_0;
  VAR_8 = FUNC_2(VAR_1 - VAR_5);
  VAR_10 = VAR_6;
 } else {
  VAR_9 = VAR_2;
  VAR_8 = 0;
  VAR_10 = 0;
 }

 FUNC_0(VAR_4, VAR_3, VAR_9, VAR_8,
          VAR_10, VAR_7);
}
