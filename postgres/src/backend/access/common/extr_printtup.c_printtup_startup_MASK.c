
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {int buf; scalar_t__ sendDescrip; int tmpcontext; TYPE_1__* portal; } ;
struct TYPE_4__ {char* name; int formats; } ;
typedef TYPE_1__* Portal ;
typedef int DestReceiver ;
typedef TYPE_2__ DR_printtup ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char,char const*) ;

__attribute__((used)) static void
FUNC_6(DestReceiver *VAR_3, int VAR_4, TupleDesc VAR_5)
{
 DR_printtup *VAR_6 = (DR_printtup *) VAR_3;
 Portal VAR_7 = VAR_6->portal;





 FUNC_4(&VAR_6->buf);







 VAR_6->tmpcontext = FUNC_0(VAR_1,
            "printtup",
            VAR_0);

 if (FUNC_2(VAR_2) < 3)
 {





  const char *VAR_8 = VAR_7->name;

  if (VAR_8 == ((void*)0) || VAR_8[0] == '\0')
   VAR_8 = "blank";

  FUNC_5('P', VAR_8);
 }





 if (VAR_6->sendDescrip)
  FUNC_3(&VAR_6->buf,
          VAR_5,
          FUNC_1(VAR_7),
          VAR_7->formats);
}
