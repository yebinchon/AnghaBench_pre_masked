
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcDisState {char const* (* instName ) (int ,int,int,int*) ;int _this; } ;


 char const* FUNC_0 (int ,int,int,int*) ;

__attribute__((used)) static const char *
FUNC_1 (struct arcDisState * VAR_0,
    int VAR_1,
    int VAR_2,
    int * VAR_3)
{
 if (VAR_0->instName) {
  return (*VAR_0->instName) (VAR_0->_this, VAR_1, VAR_2, VAR_3);
 }
 return 0;
}
