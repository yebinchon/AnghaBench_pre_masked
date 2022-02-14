
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int raw_types ;
typedef scalar_t__ __u32 ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const __u32 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1 - 1;
      VAR_3 >= 0 && VAR_2[VAR_3] != VAR_0;
      VAR_3--)
  ;

 return VAR_3 < 0 ? VAR_3 : VAR_3 * sizeof(VAR_2[0]);
}
