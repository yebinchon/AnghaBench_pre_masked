
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_key_filter_data {scalar_t__ effect; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct color_key_filter_data *VAR_1 = VAR_0;

 if (VAR_1->effect) {
  FUNC_2();
  FUNC_1(VAR_1->effect);
  FUNC_3();
 }

 FUNC_0(VAR_0);
}
