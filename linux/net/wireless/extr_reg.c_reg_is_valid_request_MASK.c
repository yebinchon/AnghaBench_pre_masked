
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int alpha2; scalar_t__ processed; } ;


 int FUNC_0 (int ,char const*) ;
 struct regulatory_request* FUNC_1 () ;

bool FUNC_2(const char *VAR_0)
{
 struct regulatory_request *VAR_1 = FUNC_1();

 if (!VAR_1 || VAR_1->processed)
  return 0;

 return FUNC_0(VAR_1->alpha2, VAR_0);
}
