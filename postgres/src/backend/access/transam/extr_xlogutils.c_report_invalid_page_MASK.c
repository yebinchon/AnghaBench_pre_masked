
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RelFileNode ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int,char*,int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, RelFileNode VAR_1, ForkNumber VAR_2,
     BlockNumber VAR_3, bool VAR_4)
{
 char *VAR_5 = FUNC_2(VAR_1, VAR_2);

 if (VAR_4)
  FUNC_0(VAR_0, "page %u of relation %s is uninitialized",
    VAR_3, VAR_5);
 else
  FUNC_0(VAR_0, "page %u of relation %s does not exist",
    VAR_3, VAR_5);
 FUNC_1(VAR_5);
}
