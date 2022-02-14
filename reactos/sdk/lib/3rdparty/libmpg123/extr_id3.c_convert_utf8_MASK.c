
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t fill; scalar_t__* p; } ;
typedef TYPE_1__ mpg123_string ;


 int FUNC_0 (scalar_t__*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_3(mpg123_string *VAR_0, const unsigned char* VAR_1, size_t VAR_2, const int VAR_3)
{
 if(FUNC_2(VAR_0, VAR_2+1))
 {
  FUNC_0(VAR_0->p, VAR_1, VAR_2);
  VAR_0->p[VAR_2] = 0;
  VAR_0->fill = VAR_2+1;
 }
 else FUNC_1(VAR_0);
}
