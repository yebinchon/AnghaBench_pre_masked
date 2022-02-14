
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int FUNC_0 (int const,int ,int *) ;
 int FUNC_1 (char const*,int *) ;

__attribute__((used)) static bool FUNC_2(ut8 const VAR_0, char const* VAR_1
 , ut16 const VAR_2, ut8 **VAR_3)
{
 ut16 VAR_4;
 if (!FUNC_1 (VAR_1, &VAR_4)
  || !FUNC_0 (VAR_2, VAR_4, (*VAR_3)+1)) {
  return 0;
 }
 (*VAR_3)[0] = VAR_0;
 *VAR_3 += 2;
 return 1;
}
