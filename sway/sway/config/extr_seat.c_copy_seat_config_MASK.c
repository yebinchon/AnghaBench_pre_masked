
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seat_config {int name; } ;


 int FUNC_0 (struct seat_config*,struct seat_config*) ;
 struct seat_config* FUNC_1 (int ) ;

struct seat_config *FUNC_2(struct seat_config *VAR_0) {
 struct seat_config *VAR_1 = FUNC_1(VAR_0->name);
 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_0(VAR_1, VAR_0);

 return VAR_1;
}
