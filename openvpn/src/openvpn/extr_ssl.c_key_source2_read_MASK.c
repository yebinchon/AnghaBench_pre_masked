
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_source {int random2; int random1; int pre_master; } ;
struct key_source2 {struct key_source server; struct key_source client; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct key_source) ;
 int FUNC_1 (struct buffer*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct key_source2 *VAR_0,
                 struct buffer *VAR_1,
                 bool VAR_2)
{
    struct key_source *VAR_3 = &VAR_0->client;

    if (!VAR_2)
    {
        VAR_3 = &VAR_0->server;
    }

    FUNC_0(*VAR_3);

    if (VAR_2)
    {
        if (!FUNC_1(VAR_1, VAR_3->pre_master, sizeof(VAR_3->pre_master)))
        {
            return 0;
        }
    }

    if (!FUNC_1(VAR_1, VAR_3->random1, sizeof(VAR_3->random1)))
    {
        return 0;
    }
    if (!FUNC_1(VAR_1, VAR_3->random2, sizeof(VAR_3->random2)))
    {
        return 0;
    }

    return 1;
}
