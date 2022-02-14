
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int actx; int alloc; int RegExp_prototype; } ;
typedef TYPE_3__ js_State ;
struct TYPE_12__ {int flags; scalar_t__ last; int source; int * prog; } ;
struct TYPE_13__ {TYPE_1__ r; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
typedef TYPE_4__ js_Object ;
typedef int Reprog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int * FUNC_2 (int ,int ,char const*,int,char const**) ;
 int FUNC_3 (TYPE_3__*,char const*) ;
 int FUNC_4 (TYPE_3__*,char*,char const*) ;

void FUNC_5(js_State *VAR_5, const char *VAR_6, int VAR_7)
{
 const char *VAR_8;
 js_Object *VAR_9;
 Reprog *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_5, VAR_0, VAR_5->RegExp_prototype);

 VAR_11 = 0;
 if (VAR_7 & VAR_1) VAR_11 |= VAR_3;
 if (VAR_7 & VAR_2) VAR_11 |= VAR_4;

 VAR_10 = FUNC_2(VAR_5->alloc, VAR_5->actx, VAR_6, VAR_11, &VAR_8);
 if (!VAR_10)
  FUNC_4(VAR_5, "regular expression: %s", VAR_8);

 VAR_9->u.r.prog = VAR_10;
 VAR_9->u.r.source = FUNC_3(VAR_5, VAR_6);
 VAR_9->u.r.flags = VAR_7;
 VAR_9->u.r.last = 0;
 FUNC_1(VAR_5, VAR_9);
}
