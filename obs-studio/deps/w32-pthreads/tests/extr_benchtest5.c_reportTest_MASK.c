
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,int ) ;
 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*,scalar_t__,float) ;

void
FUNC_2 (char * VAR_5)
{
  VAR_3 = FUNC_0(VAR_1, VAR_2) - VAR_4;

  FUNC_1( "%-45s %15ld %15.3f\n",
     VAR_5,
          VAR_3,
          (float) VAR_3 * 1E3 / VAR_0);
}
