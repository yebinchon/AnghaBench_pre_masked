
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdspm {int settings_register; } ;



__attribute__((used)) static int FUNC_0(struct hdspm *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->settings_register & (VAR_1 * 3);
 return VAR_2 / VAR_1;
}
