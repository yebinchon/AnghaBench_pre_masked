
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Banner1 {void* http_fields; void* memcached_stats; void* memcached_responses; } ;
struct TYPE_4__ {int is_anchored; int id; scalar_t__ pattern; } ;
struct TYPE_3__ {int is_anchored; int id; scalar_t__ pattern; } ;


 char* FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,scalar_t__,size_t) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_3 (void*,char*,unsigned int,int ,int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (char*,int ) ;
 size_t FUNC_6 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_7(struct Banner1 *VAR_5)
{
    unsigned VAR_6;




    VAR_5->memcached_responses = FUNC_5("memcached-responses", VAR_0);
    for (VAR_6=0; VAR_1[VAR_6].pattern; VAR_6++) {
        char *VAR_7;
        unsigned VAR_8;
        size_t VAR_9;

        VAR_9 = FUNC_6(VAR_1[VAR_6].pattern);
        VAR_7 = FUNC_0(VAR_9 + 2);
        FUNC_2(VAR_7, VAR_1[VAR_6].pattern, VAR_9);
        VAR_7[VAR_9+1] = '\0';


        for (VAR_8=0; VAR_8<4; VAR_8++) {
            VAR_7[VAR_9] = " \t\r\n"[VAR_8];
            FUNC_3(
                          VAR_5->memcached_responses,
                          VAR_7,
                          (unsigned)VAR_9+1,
                          VAR_1[VAR_6].id,
                          VAR_1[VAR_6].is_anchored);
        }

        FUNC_1(VAR_7);
    }
    FUNC_4(VAR_5->memcached_responses);
    VAR_3 = VAR_5->memcached_responses;




    VAR_5->memcached_stats = FUNC_5("memcached-stats", VAR_0);
    for (VAR_6=0; VAR_2[VAR_6].pattern; VAR_6++) {
        char *VAR_10;
        unsigned VAR_11;
        size_t VAR_12;

        VAR_12 = FUNC_6(VAR_2[VAR_6].pattern);
        VAR_10 = FUNC_0(VAR_12 + 2);
        FUNC_2(VAR_10, VAR_2[VAR_6].pattern, VAR_12);
        VAR_10[VAR_12+1] = '\0';


        for (VAR_11=0; VAR_11<4; VAR_11++) {
            VAR_10[VAR_12] = " \t\r\n"[VAR_11];
            FUNC_3(
                          VAR_5->memcached_stats,
                          VAR_10,
                          (unsigned)VAR_12+1,
                          VAR_2[VAR_6].id,
                          VAR_2[VAR_6].is_anchored);
        }

        FUNC_1(VAR_10);
    }
    FUNC_4(VAR_5->memcached_stats);
    VAR_4 = VAR_5->memcached_stats;

    return VAR_5->http_fields;
}
