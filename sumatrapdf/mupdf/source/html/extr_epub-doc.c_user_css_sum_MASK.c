
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int fz_context ;
typedef int Byte ;


 scalar_t__ FUNC_0 (scalar_t__,int *,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static uint32_t
FUNC_3(fz_context *VAR_0)
{
 uint32_t VAR_1 = 0;
 const char *VAR_2 = FUNC_1(VAR_0);
 VAR_1 = FUNC_0(0, ((void*)0), 0);
 if (VAR_2)
  VAR_1 = FUNC_0(VAR_1, (Byte*)VAR_2, FUNC_2(VAR_2));
 return VAR_1;
}
