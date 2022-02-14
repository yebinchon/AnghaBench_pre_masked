
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor {int * result; } ;
typedef int PGresult ;


 struct descriptor* FUNC_0 (int,char const*) ;

__attribute__((used)) static PGresult *
FUNC_1(int VAR_0, const char *VAR_1)
{
 struct descriptor *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 == ((void*)0))
  return ((void*)0);
 return VAR_2->result;
}
