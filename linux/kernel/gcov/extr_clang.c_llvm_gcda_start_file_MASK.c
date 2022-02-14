
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char const* filename; int checksum; int version; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char const*,int) ;

void FUNC_1(const char *VAR_1, const char VAR_2[4],
  u32 VAR_3)
{
 VAR_0->filename = VAR_1;
 FUNC_0(&VAR_0->version, VAR_2, sizeof(VAR_0->version));
 VAR_0->checksum = VAR_3;
}
