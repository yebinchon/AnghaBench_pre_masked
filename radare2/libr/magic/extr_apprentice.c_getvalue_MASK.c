
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {float f; int q; scalar_t__ d; int s; } ;
struct r_magic {int type; int vallen; char reln; TYPE_1__ value; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ RMagic ;
 int VAR_0 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,struct r_magic*,int ) ;
 char* FUNC_3 (TYPE_2__*,char const*,int ,int,int*,int) ;
 scalar_t__ FUNC_4 (char const*,char**) ;
 float FUNC_5 (char const*,char**) ;
 int FUNC_6 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_7(RMagic *VAR_1, struct r_magic *VAR_2, const char **VAR_3, int VAR_4) {
 int VAR_5;

 switch (VAR_2->type) {
 case 137:
 case 132:
 case 128:
 case 131:
 case 130:
 case 129:
  *VAR_3 = FUNC_3(VAR_1, *VAR_3, VAR_2->value.s, sizeof (VAR_2->value.s), &VAR_5, VAR_4);
  if (!*VAR_3) {
   if (VAR_1->flags & VAR_0) {
    FUNC_1 (VAR_1, "cannot get string from `%s'",
     VAR_2->value.s);
   }
   return -1;
  }
  VAR_2->vallen = VAR_5;
  if (VAR_2->type == 131) {
   VAR_2->vallen++;
  }
  return 0;
 case 135:
 case 138:
 case 133:
  if (VAR_2->reln != 'x') {
   char *VAR_6;



   VAR_2->value.f = (float)FUNC_4(*VAR_3, &VAR_6);

   *VAR_3 = VAR_6;
  }
  return 0;
 case 136:
 case 139:
 case 134:
  if (VAR_2->reln != 'x') {
   char *VAR_7;
   VAR_2->value.d = FUNC_4(*VAR_3, &VAR_7);
   *VAR_3 = VAR_7;
  }
  return 0;
 default:
  if (VAR_2->reln != 'x') {
   char *VAR_8;
   VAR_2->value.q = FUNC_2(VAR_1, VAR_2,
       (ut64)FUNC_6(*VAR_3, &VAR_8, 0));
   *VAR_3 = VAR_8;
   FUNC_0(VAR_3);
  }
  return 0;
 }
}
