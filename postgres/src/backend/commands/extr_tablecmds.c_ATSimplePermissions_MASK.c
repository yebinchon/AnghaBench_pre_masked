
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {int relkind; } ;
typedef TYPE_2__* Relation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(Relation VAR_11, int VAR_12)
{
 int VAR_13;

 switch (VAR_11->rd_rel->relkind)
 {
  case 129:
  case 130:
   VAR_13 = VAR_6;
   break;
  case 128:
   VAR_13 = VAR_7;
   break;
  case 132:
   VAR_13 = VAR_4;
   break;
  case 133:
   VAR_13 = VAR_3;
   break;
  case 131:
   VAR_13 = VAR_5;
   break;
  case 135:
   VAR_13 = VAR_1;
   break;
  case 134:
   VAR_13 = VAR_2;
   break;
  default:
   VAR_13 = 0;
   break;
 }


 if ((VAR_13 & VAR_12) == 0)
  FUNC_0(VAR_11, VAR_12);


 if (!FUNC_10(FUNC_4(VAR_11), FUNC_1()))
  FUNC_5(VAR_0, FUNC_9(VAR_11->rd_rel->relkind),
        FUNC_3(VAR_11));

 if (!VAR_10 && FUNC_2(VAR_11))
  FUNC_6(VAR_9,
    (FUNC_7(VAR_8),
     FUNC_8("permission denied: \"%s\" is a system catalog",
      FUNC_3(VAR_11))));
}
