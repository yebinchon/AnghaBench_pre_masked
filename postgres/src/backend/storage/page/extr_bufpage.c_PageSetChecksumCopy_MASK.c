
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pd_checksum; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,int ) ;

char *
FUNC_5(Page VAR_2, BlockNumber VAR_3)
{
 static char *VAR_4 = ((void*)0);


 if (FUNC_2(VAR_2) || !FUNC_0())
  return (char *) VAR_2;







 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_1(VAR_1, VAR_0);

 FUNC_3(VAR_4, (char *) VAR_2, VAR_0);
 ((PageHeader) VAR_4)->pd_checksum = FUNC_4(VAR_4, VAR_3);
 return VAR_4;
}
