
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,char*,int *,int ,void*,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_6)
{
 FUNC_0();

 if (VAR_4)
  return FUNC_2(VAR_6);

 VAR_6 = FUNC_1(VAR_6, 2, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 return FUNC_3(VAR_2, 1, "regulatory.db",
           &VAR_3->dev, VAR_1,
           (void *)VAR_6, VAR_5);
}
