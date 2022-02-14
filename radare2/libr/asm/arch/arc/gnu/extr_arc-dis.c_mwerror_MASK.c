
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcDisState {int _this; int (* err ) (int ,char const*) ;} ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static void
FUNC_1 (struct arcDisState * VAR_0, const char * VAR_1)
{
 if (VAR_0->err != 0) {
  (*VAR_0->err) (VAR_0->_this, (VAR_1));
 }
}
