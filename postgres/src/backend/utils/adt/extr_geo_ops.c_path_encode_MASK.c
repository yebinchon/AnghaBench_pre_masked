
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum path_delim { ____Placeholder_path_delim } path_delim ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ Point ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_3(enum path_delim VAR_5, int VAR_6, Point *VAR_7)
{
 StringInfoData VAR_8;
 int VAR_9;

 FUNC_1(&VAR_8);

 switch (VAR_5)
 {
  case 130:
   FUNC_0(&VAR_8, VAR_1);
   break;
  case 128:
   FUNC_0(&VAR_8, VAR_2);
   break;
  case 129:
   break;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
 {
  if (VAR_9 > 0)
   FUNC_0(&VAR_8, VAR_0);
  FUNC_0(&VAR_8, VAR_1);
  FUNC_2(VAR_7->x, VAR_7->y, &VAR_8);
  FUNC_0(&VAR_8, VAR_3);
  VAR_7++;
 }

 switch (VAR_5)
 {
  case 130:
   FUNC_0(&VAR_8, VAR_3);
   break;
  case 128:
   FUNC_0(&VAR_8, VAR_4);
   break;
  case 129:
   break;
 }

 return VAR_8.data;
}
