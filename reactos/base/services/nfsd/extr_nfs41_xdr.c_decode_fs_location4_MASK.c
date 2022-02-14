
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_8__ {char* address; } ;
typedef TYPE_1__ fs_location_server ;
struct TYPE_9__ {int server_count; int path; TYPE_1__* servers; } ;
typedef TYPE_2__ fs_location4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,char**,int*,int) ;
 int FUNC_5 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_6(
    XDR *VAR_2,
    fs_location4 *VAR_3)
{
    fs_location_server *VAR_4;
    char *VAR_5;
    u_int32_t VAR_6, VAR_7, VAR_8;


    if (!FUNC_5(VAR_2, &VAR_7))
        return VAR_0;


    if (VAR_7 == 0) {
        FUNC_2(VAR_3->servers);
        VAR_4 = ((void*)0);
    } else if (VAR_7 != VAR_3->server_count) {
        VAR_4 = FUNC_3(VAR_3->servers, VAR_7 * sizeof(fs_location_server));
        if (VAR_4 == ((void*)0))
            return VAR_0;
        FUNC_0(VAR_4, VAR_7 * sizeof(fs_location_server));
    } else {
        VAR_4 = VAR_3->servers;
    }

    VAR_3->servers = VAR_4;
    VAR_3->server_count = VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        VAR_8 = VAR_1;
        VAR_5 = VAR_4[VAR_6].address;
        if (!FUNC_4(VAR_2, &VAR_5, &VAR_8, VAR_1)) {
            FUNC_2(VAR_4);
            return VAR_0;
        }
        VAR_4[VAR_6].address[VAR_8] = '\0';
    }

    return FUNC_1(VAR_2, &VAR_3->path);
}
