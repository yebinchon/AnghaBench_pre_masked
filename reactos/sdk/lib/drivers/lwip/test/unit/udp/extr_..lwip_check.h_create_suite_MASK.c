
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TFun ;
typedef int TCase ;
typedef int Suite ;
typedef int * SFun ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static Suite* FUNC_5(const char* VAR_0, TFun *VAR_1, size_t VAR_2, SFun VAR_3, SFun VAR_4)
{
  size_t VAR_5;
  Suite *VAR_6 = FUNC_1(VAR_0);

  for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

    TCase *VAR_7 = FUNC_4("Core");
    if ((VAR_3 != ((void*)0)) || (VAR_4 != ((void*)0))) {
      FUNC_2(VAR_7, VAR_3, VAR_4);
    }
    FUNC_3(VAR_7, VAR_1[VAR_5]);
    FUNC_0(VAR_6, VAR_7);
  }
  return VAR_6;
}
