
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int location; int length; } ;
typedef TYPE_1__ pgssLocationLen ;
struct TYPE_8__ {int clocations_count; TYPE_1__* clocations; } ;
typedef TYPE_2__ pgssJumbleState ;
typedef int core_yyscan_t ;
struct TYPE_9__ {int escape_string_warning; scalar_t__ scanbuf; } ;
typedef TYPE_3__ core_yy_extra_type ;
typedef int core_YYSTYPE ;
typedef int YYLTYPE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,TYPE_3__*,int *,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(pgssJumbleState *VAR_3, const char *VAR_4,
       int VAR_5)
{
 pgssLocationLen *VAR_6;
 core_yyscan_t VAR_7;
 core_yy_extra_type VAR_8;
 core_YYSTYPE VAR_9;
 YYLTYPE VAR_10;
 int VAR_11 = -1;
 int VAR_12;





 if (VAR_3->clocations_count > 1)
  FUNC_2(VAR_3->clocations, VAR_3->clocations_count,
     sizeof(pgssLocationLen), VAR_2);
 VAR_6 = VAR_3->clocations;


 VAR_7 = FUNC_4(VAR_4,
        &VAR_8,
        &VAR_1,
        VAR_0);


 VAR_8.escape_string_warning = 0;


 for (VAR_12 = 0; VAR_12 < VAR_3->clocations_count; VAR_12++)
 {
  int VAR_13 = VAR_6[VAR_12].location;
  int VAR_14;


  VAR_13 -= VAR_5;

  FUNC_0(VAR_13 >= 0);

  if (VAR_13 <= VAR_11)
   continue;


  for (;;)
  {
   VAR_14 = FUNC_1(&VAR_9, &VAR_10, VAR_7);


   if (VAR_14 == 0)
    break;





   if (VAR_10 >= VAR_13)
   {
    if (VAR_4[VAR_13] == '-')
    {
     VAR_14 = FUNC_1(&VAR_9, &VAR_10, VAR_7);
     if (VAR_14 == 0)
      break;
    }





    VAR_6[VAR_12].length = FUNC_5(VAR_8.scanbuf + VAR_13);
    break;
   }
  }


  if (VAR_14 == 0)
   break;

  VAR_11 = VAR_13;
 }

 FUNC_3(VAR_7);
}
