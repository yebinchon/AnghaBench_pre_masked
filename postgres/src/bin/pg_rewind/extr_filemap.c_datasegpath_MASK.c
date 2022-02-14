
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RelFileNode ;
typedef int ForkNumber ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*,scalar_t__) ;
 char* FUNC_2 (int ,int ) ;

__attribute__((used)) static char *
FUNC_3(RelFileNode VAR_0, ForkNumber VAR_1, BlockNumber VAR_2)
{
 char *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 > 0)
 {
  VAR_4 = FUNC_1("%s.%u", VAR_3, VAR_2);
  FUNC_0(VAR_3);
  return VAR_4;
 }
 else
  return VAR_3;
}
