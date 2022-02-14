
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int index; int count; } ;
struct TYPE_3__ {unsigned int of; int one; } ;
struct Masscan {int seed; int retries; int max_rate; scalar_t__ is_infinite; scalar_t__ is_test_csv; int ports; int targets; TYPE_2__ resume; TYPE_1__ shard; int blackrock_rounds; } ;
struct BlackRock {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct BlackRock*,int,int,int ) ;
 int FUNC_2 (struct BlackRock*,int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,...) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *,int) ;

void
FUNC_7(struct Masscan *VAR_0)
{
    uint64_t VAR_1;
    uint64_t VAR_2;
    uint64_t VAR_3;
    uint64_t VAR_4;
    uint64_t VAR_5;
    uint64_t VAR_6;
    struct BlackRock VAR_7;
    unsigned VAR_8 = VAR_0->shard.of;
    uint64_t VAR_9 = VAR_0->seed;

    VAR_2 = FUNC_5(&VAR_0->ports);
    if (VAR_2 == 0)
        FUNC_4(&VAR_0->ports, 80, 80);
    VAR_2 = FUNC_5(&VAR_0->ports);

    VAR_1 = FUNC_5(&VAR_0->targets);
    if (VAR_1 == 0) {
        FUNC_0(0, "FAIL: target IP address list empty\n");
        FUNC_0(0, " [hint] try something like \"--range 10.0.0.0/8\"\n");
        FUNC_0(0, " [hint] try something like \"--range 192.168.0.100-192.168.0.200\"\n");
        return;
    }

    VAR_4 = VAR_1 * VAR_2;

infinite:
    FUNC_1(&VAR_7, VAR_4, VAR_9, VAR_0->blackrock_rounds);

    VAR_5 = VAR_0->resume.index + (VAR_0->shard.one-1);
    VAR_6 = VAR_4;
    if (VAR_0->resume.count && VAR_6 > VAR_5 + VAR_0->resume.count)
        VAR_6 = VAR_5 + VAR_0->resume.count;
    VAR_6 += (uint64_t)(VAR_0->retries * VAR_0->max_rate);


    for (VAR_3=VAR_5; VAR_3<VAR_6; ) {
        uint64_t VAR_10;
        unsigned VAR_11;
        unsigned VAR_12;

        VAR_10 = FUNC_2(&VAR_7, VAR_3);

        VAR_11 = FUNC_6(&VAR_0->targets, VAR_10 % VAR_1);
        VAR_12 = FUNC_6(&VAR_0->ports, VAR_10 / VAR_1);

        if (VAR_2 == 1) {
            if (VAR_0->is_test_csv) {




                FUNC_3("%u,%u\n",
                       (VAR_11>>8)&0xFF, (VAR_11>>0)&0xFF
                       );
            } else {
                FUNC_3("%u.%u.%u.%u\n",
                       (VAR_11>>24)&0xFF, (VAR_11>>16)&0xFF, (VAR_11>>8)&0xFF, (VAR_11>>0)&0xFF
                       );
            }
        } else
            FUNC_3("%u.%u.%u.%u:%u\n",
                   (VAR_11>>24)&0xFF, (VAR_11>>16)&0xFF, (VAR_11>>8)&0xFF, (VAR_11>>0)&0xFF,
                   VAR_12
                   );

        VAR_3 += VAR_8;
    }

    if (VAR_0->is_infinite) {
        VAR_9++;
        goto infinite;
    }
}
