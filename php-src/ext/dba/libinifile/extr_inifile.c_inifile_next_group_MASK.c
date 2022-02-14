
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_13__ {int group; } ;
struct TYPE_15__ {int * member_0; } ;
struct TYPE_14__ {int * member_1; int * member_0; } ;
struct TYPE_16__ {TYPE_11__ key; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ line_type ;
struct TYPE_17__ {int group; } ;
typedef TYPE_4__ key_type ;
struct TYPE_18__ {int fp; } ;
typedef TYPE_5__ inifile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_11__*,TYPE_4__ const*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_3__*) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(inifile *VAR_2, const key_type *VAR_3, size_t *VAR_4)
{
 int VAR_5 = VAR_0;
 line_type VAR_6 = {{((void*)0),((void*)0)},{((void*)0)}};

 *VAR_4 = FUNC_4(VAR_2->fp);
 VAR_6.key.group = FUNC_0(VAR_3->group);
 while(FUNC_3(VAR_2, &VAR_6)) {
  if (FUNC_1(&VAR_6.key, VAR_3) == 2) {
   VAR_5 = VAR_1;
   break;
  }
  *VAR_4 = FUNC_4(VAR_2->fp);
 }
 FUNC_2(&VAR_6);
 return VAR_5;
}
