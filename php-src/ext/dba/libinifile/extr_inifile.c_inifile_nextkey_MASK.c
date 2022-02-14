
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* group; scalar_t__ name; } ;
struct TYPE_12__ {int * member_0; } ;
struct TYPE_11__ {int * member_1; int * member_0; } ;
struct TYPE_13__ {TYPE_1__ key; int pos; TYPE_3__ member_1; TYPE_2__ member_0; } ;
typedef TYPE_4__ line_type ;
struct TYPE_14__ {TYPE_4__ curr; int fp; } ;
typedef TYPE_5__ inifile ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(inifile *VAR_1) {
 line_type VAR_2 = {{((void*)0),((void*)0)},((void*)0)};


 FUNC_3(VAR_1->fp, VAR_1->curr.pos, VAR_0);
 VAR_2.key.group = FUNC_0(VAR_1->curr.key.group ? VAR_1->curr.key.group : "");
 FUNC_2(VAR_1, &VAR_2);
 FUNC_1(&VAR_1->curr);
 VAR_1->curr = VAR_2;
 return VAR_2.key.group || VAR_2.key.name;
}
