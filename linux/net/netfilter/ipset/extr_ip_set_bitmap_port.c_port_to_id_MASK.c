
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bitmap_port {scalar_t__ first_port; } ;



__attribute__((used)) static inline u16
FUNC_0(const struct bitmap_port *VAR_0, u16 VAR_1)
{
 return VAR_1 - VAR_0->first_port;
}
