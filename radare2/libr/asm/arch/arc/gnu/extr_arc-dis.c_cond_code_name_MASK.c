
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcDisState {char const* (* condCodeName ) (int ,int) ;int _this; } ;


 char const* FUNC_0 (int ,int) ;

__attribute__((used)) static const char *
FUNC_1 (struct arcDisState * VAR_0, int VAR_1)
{
 if (VAR_0->condCodeName) {
  return (*VAR_0->condCodeName) (VAR_0->_this, VAR_1);
 }
 return 0;
}
