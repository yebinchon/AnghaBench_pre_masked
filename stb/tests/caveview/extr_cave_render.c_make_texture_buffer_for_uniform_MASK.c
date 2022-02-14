
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int array_length; int bytes_per_element; int type; scalar_t__ default_value; int name; } ;
typedef TYPE_1__ stbvox_uniform_info ;
typedef int GLint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,scalar_t__,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int * VAR_9 ;
 int * VAR_10 ;

void FUNC_12(int VAR_11, int VAR_12)
{
   GLenum VAR_13;
   stbvox_uniform_info VAR_14, *VAR_15=&VAR_14;
   GLint VAR_16;

   FUNC_11(VAR_15, VAR_11);
   VAR_16 = FUNC_10(VAR_8, VAR_15->name);

   if (VAR_11 == VAR_7)
      ((float *)VAR_15->default_value)[63*4+3] = 2.0f;

   FUNC_5(1, &VAR_9[VAR_11]);
   FUNC_2(VAR_0, VAR_9[VAR_11]);
   FUNC_4(VAR_0, VAR_15->array_length * VAR_15->bytes_per_element, VAR_15->default_value, VAR_4);
   FUNC_2(VAR_0, 0);

   FUNC_6(1, &VAR_10[VAR_11]);
   FUNC_3(VAR_6, VAR_10[VAR_11]);
   switch (VAR_15->type) {
      case 130: VAR_13 = VAR_1; break;
      case 129: VAR_13 = VAR_2; break;
      case 128: VAR_13 = VAR_3; break;
      default: FUNC_0(0);
   }
   FUNC_7(VAR_6, VAR_13, VAR_9[VAR_11]);
   FUNC_3(VAR_6, 0);

   FUNC_1(VAR_5 + VAR_12);
   FUNC_3(VAR_6, VAR_10[VAR_11]);
   FUNC_1(VAR_5);

   FUNC_9(VAR_8);
   FUNC_8(VAR_16, VAR_12);
}
