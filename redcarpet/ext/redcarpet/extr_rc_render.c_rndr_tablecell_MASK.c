
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int dummy; } ;
typedef int VALUE ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (char*) ;



 int VAR_0 ;
 int FUNC_2 (struct buf const*) ;

__attribute__((used)) static void
FUNC_3(struct buf *VAR_1, const struct buf *VAR_2, int VAR_3, void *VAR_4)
{
 VALUE VAR_5;

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_1("left");
  break;

 case 128:
  VAR_5 = FUNC_1("right");
  break;

 case 130:
  VAR_5 = FUNC_1("center");
  break;

 default:
  VAR_5 = VAR_0;
  break;
 }

 FUNC_0("table_cell", 2, FUNC_2(VAR_2), VAR_5);
}
