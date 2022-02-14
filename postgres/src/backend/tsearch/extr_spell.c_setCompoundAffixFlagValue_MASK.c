
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int i; int s; } ;
struct TYPE_9__ {scalar_t__ flagMode; int value; TYPE_1__ flag; } ;
struct TYPE_8__ {scalar_t__ flagMode; } ;
typedef TYPE_2__ IspellDict ;
typedef TYPE_3__ CompoundAffixFlag ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_5(IspellDict *VAR_6, CompoundAffixFlag *VAR_7,
        char *VAR_8, uint32 VAR_9)
{
 if (VAR_6->flagMode == VAR_4)
 {
  char *VAR_10;
  int VAR_11;

  VAR_11 = FUNC_4(VAR_8, &VAR_10, 10);
  if (VAR_8 == VAR_10 || VAR_5 == VAR_0)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("invalid affix flag \"%s\"", VAR_8)));
  if (VAR_11 < 0 || VAR_11 > VAR_3)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("affix flag \"%s\" is out of range", VAR_8)));

  VAR_7->flag.i = VAR_11;
 }
 else
  VAR_7->flag.s = FUNC_0(VAR_6, VAR_8);

 VAR_7->flagMode = VAR_6->flagMode;
 VAR_7->value = VAR_9;
}
