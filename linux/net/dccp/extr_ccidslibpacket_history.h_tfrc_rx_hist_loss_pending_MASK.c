
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfrc_rx_hist {scalar_t__ loss_count; } ;



__attribute__((used)) static inline bool FUNC_0(const struct tfrc_rx_hist *VAR_0)
{
 return VAR_0->loss_count > 0;
}
