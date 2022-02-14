
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_13__ {int * children; } ;
struct TYPE_10__ {int len; TYPE_5__* data; } ;
struct TYPE_9__ {char* val; int len; } ;
struct TYPE_11__ {int boolean; TYPE_2__ binary; scalar_t__ numeric; TYPE_1__ string; } ;
struct TYPE_12__ {TYPE_3__ val; void* type; } ;
typedef scalar_t__ Numeric ;
typedef TYPE_4__ JsonbValue ;
typedef TYPE_5__ JsonbContainer ;
typedef int JEntry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void
FUNC_9(JsonbContainer *VAR_5, int VAR_6,
      char *VAR_7, uint32 VAR_8,
      JsonbValue *VAR_9)
{
 JEntry VAR_10 = VAR_5->children[VAR_6];

 if (FUNC_5(VAR_10))
 {
  VAR_9->type = VAR_2;
 }
 else if (FUNC_7(VAR_10))
 {
  VAR_9->type = VAR_4;
  VAR_9->val.string.val = VAR_7 + VAR_8;
  VAR_9->val.string.len = FUNC_8(VAR_5, VAR_6);
  FUNC_0(VAR_9->val.string.len >= 0);
 }
 else if (FUNC_6(VAR_10))
 {
  VAR_9->type = VAR_3;
  VAR_9->val.numeric = (Numeric) (VAR_7 + FUNC_1(VAR_8));
 }
 else if (FUNC_3(VAR_10))
 {
  VAR_9->type = VAR_1;
  VAR_9->val.boolean = 1;
 }
 else if (FUNC_2(VAR_10))
 {
  VAR_9->type = VAR_1;
  VAR_9->val.boolean = 0;
 }
 else
 {
  FUNC_0(FUNC_4(VAR_10));
  VAR_9->type = VAR_0;

  VAR_9->val.binary.data = (JsonbContainer *) (VAR_7 + FUNC_1(VAR_8));
  VAR_9->val.binary.len = FUNC_8(VAR_5, VAR_6) -
   (FUNC_1(VAR_8) - VAR_8);
 }
}
