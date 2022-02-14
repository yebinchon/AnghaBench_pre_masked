
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stats {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 VAR_2 = FUNC_0(VAR_0, sizeof(uint32_t),
    sizeof(struct stats), 100, 0);
 if (VAR_2 < 0)
  FUNC_1(1, VAR_1, "map create failed!\n");
}
