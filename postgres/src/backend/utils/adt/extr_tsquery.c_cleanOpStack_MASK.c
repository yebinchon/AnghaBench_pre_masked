
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int8 ;
struct TYPE_3__ {scalar_t__ op; int distance; } ;
typedef int TSQueryParserState ;
typedef TYPE_1__ OperatorElement ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(TSQueryParserState VAR_1,
    OperatorElement *VAR_2, int *VAR_3, int8 VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);

 while (*VAR_3)
 {

  if ((VAR_4 != VAR_0 && VAR_5 > FUNC_0(VAR_2[*VAR_3 - 1].op)) ||
   (VAR_4 == VAR_0 && VAR_5 >= FUNC_0(VAR_2[*VAR_3 - 1].op)))
   break;

  (*VAR_3)--;
  FUNC_1(VAR_1, VAR_2[*VAR_3].op,
      VAR_2[*VAR_3].distance);
 }
}
