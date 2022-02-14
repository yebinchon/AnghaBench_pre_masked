
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_name; } ;
struct gethostbyname_data {int addr_name; TYPE_1__ hostent_space; } ;


 int FUNC_0 (int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct gethostbyname_data* VAR_0, char* VAR_1) {
 FUNC_0(VAR_0->addr_name, sizeof(VAR_0->addr_name), "%s", VAR_1);
 VAR_0->hostent_space.h_name = VAR_0->addr_name;
}
