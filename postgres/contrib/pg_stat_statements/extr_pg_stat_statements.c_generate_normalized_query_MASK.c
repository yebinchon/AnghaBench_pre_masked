
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int clocations_count; int highest_extern_param_id; TYPE_1__* clocations; } ;
typedef TYPE_2__ pgssJumbleState ;
struct TYPE_5__ {int location; int length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_5(pgssJumbleState *VAR_0, const char *VAR_1,
        int VAR_2, int *VAR_3, int VAR_4)
{
 char *VAR_5;
 int VAR_6 = *VAR_3;
 int VAR_7,
    VAR_8,
    VAR_9,
    VAR_10 = 0,
    VAR_11 = 0,
    VAR_12 = 0,
    VAR_13 = 0;





 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_8 = VAR_6 + VAR_0->clocations_count * 10;


 VAR_5 = FUNC_3(VAR_8 + 1);

 for (VAR_7 = 0; VAR_7 < VAR_0->clocations_count; VAR_7++)
 {
  int VAR_14,
     VAR_15;

  VAR_14 = VAR_0->clocations[VAR_7].location;

  VAR_14 -= VAR_2;

  VAR_15 = VAR_0->clocations[VAR_7].length;

  if (VAR_15 < 0)
   continue;


  VAR_9 = VAR_14 - VAR_12;
  VAR_9 -= VAR_13;

  FUNC_0(VAR_9 >= 0);
  FUNC_2(VAR_5 + VAR_11, VAR_1 + VAR_10, VAR_9);
  VAR_11 += VAR_9;


  VAR_11 += FUNC_4(VAR_5 + VAR_11, "$%d",
         VAR_7 + 1 + VAR_0->highest_extern_param_id);

  VAR_10 = VAR_14 + VAR_15;
  VAR_12 = VAR_14;
  VAR_13 = VAR_15;
 }





 VAR_9 = VAR_6 - VAR_10;

 FUNC_0(VAR_9 >= 0);
 FUNC_2(VAR_5 + VAR_11, VAR_1 + VAR_10, VAR_9);
 VAR_11 += VAR_9;

 FUNC_0(VAR_11 <= VAR_8);
 VAR_5[VAR_11] = '\0';

 *VAR_3 = VAR_11;
 return VAR_5;
}
