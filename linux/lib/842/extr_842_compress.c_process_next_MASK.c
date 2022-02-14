
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw842_param {void** index2; void** index4; void** index8; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sw842_param*,int) ;
 scalar_t__ FUNC_1 (struct sw842_param*,int) ;

__attribute__((used)) static int FUNC_2(struct sw842_param *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->index8[0] = VAR_0;
 VAR_2->index4[0] = VAR_0;
 VAR_2->index4[1] = VAR_0;
 VAR_2->index2[0] = VAR_0;
 VAR_2->index2[1] = VAR_0;
 VAR_2->index2[2] = VAR_0;
 VAR_2->index2[3] = VAR_0;


 for (VAR_4 = 0; VAR_4 < VAR_1 - 1; VAR_4++) {
  if (FUNC_1(VAR_2, VAR_4))
   break;
 }

 VAR_3 = FUNC_0(VAR_2, VAR_4);
 if (VAR_3)
  return VAR_3;

 return 0;
}
