
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * member_0; } ;
struct TYPE_12__ {int * member_1; int * member_0; } ;
struct TYPE_14__ {int key; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ line_type ;
struct TYPE_15__ {scalar_t__ group; } ;
typedef TYPE_4__ key_type ;
struct TYPE_16__ {int fp; TYPE_3__ next; TYPE_3__ curr; } ;
typedef TYPE_5__ inifile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_4__ const*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(inifile *VAR_3, const key_type *VAR_4, size_t *VAR_5)
{
 int VAR_6 = VAR_0;

 FUNC_3(VAR_3->fp);
 FUNC_4(VAR_3->fp, 0, VAR_1);
 FUNC_1(&VAR_3->curr);
 FUNC_1(&VAR_3->next);

 if (VAR_4->group && FUNC_6(VAR_4->group)) {
  int VAR_7;
  line_type VAR_8 = {{((void*)0),((void*)0)},{((void*)0)}};

  VAR_7 = 1;
  while(FUNC_2(VAR_3, &VAR_8)) {
   if ((VAR_7=FUNC_0(&VAR_8.key, VAR_4)) < 2) {
    VAR_6 = VAR_2;
    break;
   }
   *VAR_5 = FUNC_5(VAR_3->fp);
  }
  FUNC_1(&VAR_8);
 } else {
  *VAR_5 = 0;
  VAR_6 = VAR_2;
 }
 if (VAR_6 == VAR_0) {
  *VAR_5 = FUNC_5(VAR_3->fp);
 }
 return VAR_6;
}
