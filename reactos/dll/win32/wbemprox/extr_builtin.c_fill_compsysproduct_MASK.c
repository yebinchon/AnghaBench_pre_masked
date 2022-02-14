
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {scalar_t__ num_rows; scalar_t__ data; } ;
struct record_computersystemproduct {int version; int vendor; int uuid; int * skunumber; int name; int identifyingnumber; } ;
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
 int FUNC_3 (struct table*,scalar_t__,struct expr const*,int*) ;
 int FUNC_4 (struct table*,int,int) ;

__attribute__((used)) static enum fill_status FUNC_5( struct table *VAR_6, const struct expr *VAR_7 )
{
    struct record_computersystemproduct *VAR_8;
    enum fill_status VAR_9 = VAR_1;
    UINT VAR_10 = 0;

    if (!FUNC_4( VAR_6, 1, sizeof(*VAR_8) )) return VAR_0;

    VAR_8 = (struct record_computersystemproduct *)VAR_6->data;
    VAR_8->identifyingnumber = VAR_2;
    VAR_8->name = VAR_3;
    VAR_8->skunumber = ((void*)0);
    VAR_8->uuid = FUNC_2();
    VAR_8->vendor = VAR_4;
    VAR_8->version = VAR_5;
    if (!FUNC_3( VAR_6, VAR_10, VAR_7, &VAR_9 )) FUNC_1( VAR_6, VAR_10 );
    else VAR_10++;

    FUNC_0("created %u rows\n", VAR_10);
    VAR_6->num_rows = VAR_10;
    return VAR_9;
}
