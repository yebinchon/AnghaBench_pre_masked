
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {int has_error; } ;
struct TYPE_9__ {int keys; TYPE_1__ err; } ;
typedef TYPE_2__ res_context ;
struct TYPE_10__ {int field_offset; int (* to_zval ) (char const*,int *,TYPE_2__*) ;int * name; scalar_t__ name_size; } ;
typedef TYPE_3__ field_descriptor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,char*,int *) ;
 int FUNC_5 (char const*,int *,TYPE_2__*) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1,
          zval *VAR_2,
          const field_descriptor *VAR_3,
          res_context *VAR_4)
{
 const field_descriptor *VAR_5;

 FUNC_3(FUNC_2(VAR_2) == VAR_0);
 FUNC_3(FUNC_1(VAR_2) != ((void*)0));

 for (VAR_5 = VAR_3; VAR_5->name != ((void*)0) && !VAR_4->err.has_error; VAR_5++) {
  zval *VAR_6, VAR_7;

  if (VAR_5->to_zval == ((void*)0)) {
   FUNC_4(VAR_4, "No information on how to convert native "
     "field into value for key '%s'", VAR_5->name);
   break;
  }

  FUNC_0(&VAR_7);
  VAR_6 = FUNC_8(FUNC_1(VAR_2), VAR_5->name, VAR_5->name_size - 1, &VAR_7);

  FUNC_6(&VAR_4->keys, (void*)&VAR_5->name);
  VAR_5->to_zval(VAR_1 + VAR_5->field_offset, VAR_6, VAR_4);
  FUNC_7(&VAR_4->keys);
 }
}
