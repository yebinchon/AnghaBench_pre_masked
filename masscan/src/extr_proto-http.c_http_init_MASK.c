
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Banner1 {void* http_fields; void* html_fields; } ;
struct TYPE_6__ {int hello_length; scalar_t__ hello; } ;
struct TYPE_5__ {int is_anchored; int id; int pattern_length; scalar_t__ pattern; } ;
struct TYPE_4__ {int is_anchored; int id; int pattern_length; scalar_t__ pattern; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (void*,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (char*,int ) ;

__attribute__((used)) static void *
FUNC_5(struct Banner1 *VAR_5)
{
    unsigned VAR_6;




    VAR_5->http_fields = FUNC_4("http", VAR_0);
    for (VAR_6=0; VAR_3[VAR_6].pattern; VAR_6++)
        FUNC_2(
                          VAR_5->http_fields,
                          VAR_3[VAR_6].pattern,
                          VAR_3[VAR_6].pattern_length,
                          VAR_3[VAR_6].id,
                          VAR_3[VAR_6].is_anchored);
    FUNC_3(VAR_5->http_fields);




    VAR_5->html_fields = FUNC_4("html", VAR_0);
    for (VAR_6=0; VAR_2[VAR_6].pattern; VAR_6++)
        FUNC_2(
                          VAR_5->html_fields,
                          VAR_2[VAR_6].pattern,
                          VAR_2[VAR_6].pattern_length,
                          VAR_2[VAR_6].id,
                          VAR_2[VAR_6].is_anchored);
    FUNC_3(VAR_5->html_fields);

    VAR_1.hello = FUNC_0(VAR_1.hello_length);
    FUNC_1((char*)VAR_1.hello, VAR_4, VAR_1.hello_length);

    return VAR_5->http_fields;
}
