
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lola {int card; } ;
struct TYPE_3__ {char* name; int private_value; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,struct lola*) ;

__attribute__((used)) static int FUNC_2(struct lola *VAR_1,
     int VAR_2, int VAR_3, char *VAR_4)
{
 VAR_0.name = VAR_4;
 VAR_0.private_value = VAR_3 + (VAR_2 << 8);
 return FUNC_0(VAR_1->card,
      FUNC_1(&VAR_0, VAR_1));
}
