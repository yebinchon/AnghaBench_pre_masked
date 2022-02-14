
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static char *
FUNC_2(Oid VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  FUNC_0(VAR_0, "cache lookup failed for relation %u", VAR_1);
 return VAR_2;
}
