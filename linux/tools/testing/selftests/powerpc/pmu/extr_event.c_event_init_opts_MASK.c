
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int type; int size; int read_format; int config; } ;
struct event {char* name; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event*,int ,int) ;

void FUNC_1(struct event *VAR_2, u64 VAR_3, int VAR_4, char *VAR_5)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->name = VAR_5;

 VAR_2->attr.type = VAR_4;
 VAR_2->attr.config = VAR_3;
 VAR_2->attr.size = sizeof(VAR_2->attr);

 VAR_2->attr.read_format = VAR_0 | VAR_1;

}
