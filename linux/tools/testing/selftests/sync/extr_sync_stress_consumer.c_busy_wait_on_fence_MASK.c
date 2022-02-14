
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 int VAR_3, VAR_4;

 do {
  VAR_3 = FUNC_1(VAR_2, VAR_1);
  FUNC_0(VAR_3 == 0, "Error occurred on fence\n");
  VAR_4 = FUNC_1(VAR_2,
            VAR_0);
 } while (VAR_4);

 return 0;
}
