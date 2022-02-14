
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {scalar_t__ num_rows; scalar_t__ data; } ;
struct record_physicalmemory {int memorytype; int capacity; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef scalar_t__ UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct table*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct table*,scalar_t__,struct expr const*,int*) ;
 int FUNC_4 (struct table*,int,int) ;

__attribute__((used)) static enum fill_status FUNC_5( struct table *VAR_2, const struct expr *VAR_3 )
{
    struct record_physicalmemory *VAR_4;
    enum fill_status VAR_5 = VAR_1;
    UINT VAR_6 = 0;

    if (!FUNC_4( VAR_2, 1, sizeof(*VAR_4) )) return VAR_0;

    VAR_4 = (struct record_physicalmemory *)VAR_2->data;
    VAR_4->capacity = FUNC_2();
    VAR_4->memorytype = 9;
    if (!FUNC_3( VAR_2, VAR_6, VAR_3, &VAR_5 )) FUNC_1( VAR_2, VAR_6 );
    else VAR_6++;

    FUNC_0("created %u rows\n", VAR_6);
    VAR_2->num_rows = VAR_6;
    return VAR_5;
}
