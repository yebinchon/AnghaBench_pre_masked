
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_writer_t ;


 int FUNC_0 (int *,char*,unsigned long) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, json_writer_t *VAR_1,
      bool VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_1, "%p", VAR_0);
 else
  FUNC_0(VAR_1, "%lu", *(unsigned long *)VAR_0);
}
