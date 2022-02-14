
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data4; int data3; int data2; int data1; } ;
struct TYPE_4__ {char* names; int cb_names; TYPE_1__ guid; int age; int time_date_stamp; int version; } ;
typedef TYPE_2__ SPDBInfoStream ;
typedef int R_STREAM_FILE ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, R_STREAM_FILE *VAR_1) {
 SPDBInfoStream *VAR_2 = (SPDBInfoStream *) VAR_0;

 VAR_2->names = 0;

 FUNC_1 (VAR_1, 4, (char *) &VAR_2-> version);
 FUNC_1 (VAR_1, 4, (char *) &VAR_2-> time_date_stamp);
 FUNC_1 (VAR_1, 4, (char *) &VAR_2-> age);
 FUNC_1 (VAR_1, 4, (char *) &VAR_2-> guid.data1);
 FUNC_1 (VAR_1, 2, (char *) &VAR_2-> guid.data2);
 FUNC_1 (VAR_1, 2, (char *) &VAR_2-> guid.data3);
 FUNC_1 (VAR_1, 8, (char *) &VAR_2-> guid.data4);
 FUNC_1 (VAR_1, 4, (char *) &VAR_2-> cb_names);

 VAR_2-> names = (char *) FUNC_0 (1, VAR_2-> cb_names);
 FUNC_1 (VAR_1, VAR_2-> cb_names, VAR_2-> names);
}
