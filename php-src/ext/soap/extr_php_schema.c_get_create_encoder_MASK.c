
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;
typedef int sdlTypePtr ;
typedef int sdlPtr ;
typedef int * encodePtr ;


 int * FUNC_0 (int ,int ,int const*,int const*) ;
 int * FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static encodePtr FUNC_2(sdlPtr VAR_0, sdlTypePtr VAR_1, const xmlChar *VAR_2, const xmlChar *VAR_3)
{
 encodePtr VAR_4 = FUNC_1(VAR_0, (char*)VAR_2, (char*)VAR_3);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }
 return VAR_4;
}
