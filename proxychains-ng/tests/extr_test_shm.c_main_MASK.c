
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stringpool {char* start; int alloced; size_t used; } ;
typedef int buf4096 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct stringpool*,char*,...) ;
 int FUNC_4 (struct stringpool*) ;

int FUNC_5() {
 char VAR_0[4096];
 struct stringpool VAR_1;
 FUNC_4(&VAR_1);
 char *VAR_2;
 size_t VAR_3 = 0;
 VAR_2 = FUNC_3(&VAR_1, FUNC_2("AAAAA"));
 FUNC_0(VAR_2 == VAR_1.start);

 VAR_3 += FUNC_1("AAAAA");
 FUNC_0(VAR_1.alloced == 4096);
 FUNC_0(VAR_1.used == VAR_3);

 VAR_2 = FUNC_3(&VAR_1, VAR_0, sizeof(VAR_0));
 FUNC_0(VAR_2 == VAR_1.start + VAR_3);

 VAR_3 += sizeof(VAR_0);
 FUNC_0(VAR_1.alloced == 4096 * 2);
 FUNC_0(VAR_1.used == VAR_3);

 VAR_2 = FUNC_3(&VAR_1, VAR_0, 4096 - FUNC_1("AAAAA"));
 FUNC_0(VAR_2 == VAR_1.start + VAR_3);
 VAR_3 += 4096 - FUNC_1("AAAAA");
 FUNC_0(VAR_3 == 4096 * 2);

 FUNC_0(VAR_1.alloced == 4096 * 2);
 FUNC_0(VAR_1.used == VAR_3);



 return 0;

}
