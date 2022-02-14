
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tfrc_rx_hist_entry {int dummy; } ;
struct tfrc_rx_hist {struct tfrc_rx_hist_entry** ring; } ;


 size_t FUNC_0 (struct tfrc_rx_hist const*,int const) ;

__attribute__((used)) static inline struct tfrc_rx_hist_entry *
   FUNC_1(const struct tfrc_rx_hist *VAR_0, const u8 VAR_1)
{
 return VAR_0->ring[FUNC_0(VAR_0, VAR_1)];
}
