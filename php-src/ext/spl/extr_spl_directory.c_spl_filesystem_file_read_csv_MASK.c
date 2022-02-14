
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {size_t current_line_len; int current_zval; int stream; int current_line; } ;
struct TYPE_7__ {TYPE_1__ file; } ;
struct TYPE_8__ {TYPE_2__ u; int flags; } ;
typedef TYPE_3__ spl_filesystem_object ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,char,char,int,size_t,char*,int *) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(spl_filesystem_object *VAR_2, char VAR_3, char VAR_4, int VAR_5, zval *VAR_6)
{
 int VAR_7 = VAR_1;
 zval *VAR_8;

 do {
  VAR_7 = FUNC_6(VAR_2, 1);
 } while (VAR_7 == VAR_1 && !VAR_2->u.file.current_line_len && FUNC_0(VAR_2->flags, VAR_0));

 if (VAR_7 == VAR_1) {
  size_t VAR_9 = VAR_2->u.file.current_line_len;
  char *VAR_10 = FUNC_4(VAR_2->u.file.current_line, VAR_9);

  if (!FUNC_3(VAR_2->u.file.current_zval)) {
   FUNC_7(&VAR_2->u.file.current_zval);
   FUNC_2(&VAR_2->u.file.current_zval);
  }

  FUNC_5(VAR_2->u.file.stream, VAR_3, VAR_4, VAR_5, VAR_9, VAR_10, &VAR_2->u.file.current_zval);
  if (VAR_6) {
   VAR_8 = &VAR_2->u.file.current_zval;
   FUNC_1(VAR_6, VAR_8);
  }
 }
 return VAR_7;
}
