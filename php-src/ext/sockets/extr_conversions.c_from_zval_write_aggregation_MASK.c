
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
typedef TYPE_2__ ser_context ;
struct TYPE_10__ {char* name; int field_offset; scalar_t__ required; int (* from_zval ) (int *,char*,TYPE_2__*) ;scalar_t__ name_size; } ;
typedef TYPE_3__ field_descriptor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (int *,char*,TYPE_2__*) ;
 int * FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(const zval *VAR_1,
          char *VAR_2,
          const field_descriptor *VAR_3,
          ser_context *VAR_4)
{
 const field_descriptor *VAR_5;
 zval *VAR_6;

 if (FUNC_1(VAR_1) != VAR_0) {
  FUNC_2(VAR_4, "%s", "expected an array here");
 }

 for (VAR_5 = VAR_3; VAR_5->name != ((void*)0) && !VAR_4->err.has_error; VAR_5++) {
  if ((VAR_6 = FUNC_4(FUNC_0(VAR_1),
    VAR_5->name, VAR_5->name_size - 1)) != ((void*)0)) {

   if (VAR_5->from_zval == ((void*)0)) {
    FUNC_2(VAR_4, "No information on how to convert value "
      "of key '%s'", VAR_5->name);
    break;
   }

   FUNC_5(&VAR_4->keys, (void*)&VAR_5->name);
   VAR_5->from_zval(VAR_6, ((char*)VAR_2) + VAR_5->field_offset, VAR_4);
   FUNC_6(&VAR_4->keys);

  } else if (VAR_5->required) {
   FUNC_2(VAR_4, "The key '%s' is required", VAR_5->name);
   break;
  }
 }
}
