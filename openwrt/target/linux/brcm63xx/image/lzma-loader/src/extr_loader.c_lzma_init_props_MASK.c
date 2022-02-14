
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Properties; } ;
typedef int SizeT ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 unsigned char FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned char VAR_3[VAR_0];
 int VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] = FUNC_1();


 VAR_1 = ((SizeT) FUNC_1()) +
         ((SizeT) FUNC_1() << 8) +
         ((SizeT) FUNC_1() << 16) +
         ((SizeT) FUNC_1() << 24);


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  FUNC_1();

 VAR_4 = FUNC_0(&VAR_2.Properties, VAR_3,
     VAR_0);
 return VAR_4;
}
