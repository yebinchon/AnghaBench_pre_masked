
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int bufsize; int str; } ;
typedef TYPE_1__ metastring ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(metastring *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_2(VAR_1);
 if ((VAR_0->length + VAR_2) > (VAR_0->bufsize - 1))
  FUNC_0(VAR_0, VAR_2);

 FUNC_1(VAR_0->str, VAR_1);
 VAR_0->length += VAR_2;
}
