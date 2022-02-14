
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int text; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(js_State *VAR_3, const char *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4, VAR_2, FUNC_2(VAR_2));
 if (VAR_5 >= 0) {
  VAR_3->text = VAR_2[VAR_5];
  return VAR_0 + VAR_5;
 }
 VAR_3->text = FUNC_1(VAR_3, VAR_4);
 return VAR_1;
}
