
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpus_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int*,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_4)
{
 int VAR_5[6];
 int VAR_6 = VAR_4 % 5;
 int VAR_7;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_5[VAR_7] = VAR_7 + 1;
 VAR_5[VAR_7] = 0;


 FUNC_2("hello", VAR_4, VAR_5, VAR_3[VAR_6],
        VAR_2->cpus_ptr);

 FUNC_6("HELLO", VAR_4);

 FUNC_3("Some times print", VAR_4);

 FUNC_4("prints other times", VAR_4);

 FUNC_5("I have to be different", VAR_4);
}
