
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atiixp {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atiixp*,int ) ;
 scalar_t__ FUNC_1 (struct atiixp*,int ,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct atiixp *VAR_6)
{
 int VAR_7;


 if (FUNC_1(VAR_6, VAR_5, VAR_4, 0))
  FUNC_4(10);


 FUNC_1(VAR_6, VAR_5, VAR_2, VAR_2);
 FUNC_0(VAR_6, VAR_5);
 FUNC_4(10);
 FUNC_1(VAR_6, VAR_5, VAR_2, 0);

 VAR_7 = 10;
 while (! (FUNC_0(VAR_6, VAR_5) & VAR_0)) {

  FUNC_1(VAR_6, VAR_5, VAR_3|VAR_1,
         VAR_3);
  FUNC_0(VAR_6, VAR_5);
  FUNC_3(1);
  FUNC_1(VAR_6, VAR_5, VAR_1, VAR_1);
  if (!--VAR_7) {
   FUNC_2(VAR_6->card->dev, "codec reset timeout\n");
   break;
  }
 }


 FUNC_1(VAR_6, VAR_5, VAR_3|VAR_1,
        VAR_3|VAR_1);

 return 0;
}
