
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {scalar_t__ num_rows; scalar_t__ data; } ;
struct record_computersystem {int username; int total_physical_memory; int num_processors; int num_logical_processors; int name; int model; int manufacturer; scalar_t__ domainrole; int domain; int description; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef scalar_t__ UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct table*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct table*,scalar_t__,struct expr const*,int*) ;
 int FUNC_8 (struct table*,int,int) ;

__attribute__((used)) static enum fill_status FUNC_9( struct table *VAR_6, const struct expr *VAR_7 )
{
    struct record_computersystem *VAR_8;
    enum fill_status VAR_9 = VAR_1;
    UINT VAR_10 = 0;

    if (!FUNC_8( VAR_6, 1, sizeof(*VAR_8) )) return VAR_0;

    VAR_8 = (struct record_computersystem *)VAR_6->data;
    VAR_8->description = VAR_2;
    VAR_8->domain = VAR_3;
    VAR_8->domainrole = 0;
    VAR_8->manufacturer = VAR_4;
    VAR_8->model = VAR_5;
    VAR_8->name = FUNC_2();
    VAR_8->num_logical_processors = FUNC_3( ((void*)0) );
    VAR_8->num_processors = FUNC_4();
    VAR_8->total_physical_memory = FUNC_5();
    VAR_8->username = FUNC_6();
    if (!FUNC_7( VAR_6, VAR_10, VAR_7, &VAR_9 )) FUNC_1( VAR_6, VAR_10 );
    else VAR_10++;

    FUNC_0("created %u rows\n", VAR_10);
    VAR_6->num_rows = VAR_10;
    return VAR_9;
}
