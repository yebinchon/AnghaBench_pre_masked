
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int gap_count; } ;



__attribute__((used)) static int FUNC_0(struct fw_card *VAR_0)
{
 return VAR_0->gap_count < 63 ? VAR_0->gap_count * 97 / 10 + 89 : 512;
}
