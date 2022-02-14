
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,void*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(char **VAR_1, Size *VAR_2, void *VAR_3, Size VAR_4)
{
 if (VAR_4 > *VAR_2)
  FUNC_0(VAR_0, "not enough space to serialize GUC state");

 FUNC_1(*VAR_1, VAR_3, VAR_4);
 *VAR_1 += VAR_4;
 *VAR_2 -= VAR_4;
}
