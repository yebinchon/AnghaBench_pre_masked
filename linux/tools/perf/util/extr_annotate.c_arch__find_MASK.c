
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 struct arch* FUNC_2 (char const*,int ,int const,int,int ) ;

__attribute__((used)) static struct arch *FUNC_3(const char *VAR_2)
{
 const int VAR_3 = FUNC_0(VAR_1);
 static bool VAR_4;

 if (!VAR_4) {
  FUNC_1();
  VAR_4 = 1;
 }

 return FUNC_2(VAR_2, VAR_1, VAR_3, sizeof(struct arch), VAR_0);
}
