
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct session_id {char const* id; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (struct buffer*) ;
 int VAR_0 ;
 int FUNC_3 (void*,int) ;
 struct buffer FUNC_4 (int) ;
 int FUNC_5 (struct buffer*) ;
 int FUNC_6 (struct buffer*,char const*,int) ;
 int FUNC_7 (struct buffer*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,int ,char const*,int,char*,int) ;

__attribute__((used)) static void
FUNC_10(const uint8_t *VAR_1,
            int VAR_2,
            const char *VAR_3,
            const uint8_t *VAR_4,
            int VAR_5,
            const uint8_t *VAR_6,
            int VAR_7,
            const struct session_id *VAR_8,
            const struct session_id *VAR_9,
            uint8_t *VAR_10,
            int VAR_11)
{


    struct buffer VAR_12 = FUNC_4(FUNC_8(VAR_3)
                                   + VAR_5
                                   + VAR_7
                                   + VAR_0 * 2);

    FUNC_0(FUNC_6(&VAR_12, VAR_3, FUNC_8(VAR_3)));
    FUNC_0(FUNC_6(&VAR_12, VAR_4, VAR_5));
    FUNC_0(FUNC_6(&VAR_12, VAR_6, VAR_7));

    if (VAR_8)
    {
        FUNC_0(FUNC_6(&VAR_12, VAR_8->id, VAR_0));
    }
    if (VAR_9)
    {
        FUNC_0(FUNC_6(&VAR_12, VAR_9->id, VAR_0));
    }


    FUNC_9(FUNC_2(&VAR_12), FUNC_1(&VAR_12), VAR_1, VAR_2, VAR_10, VAR_11);

    FUNC_5(&VAR_12);
    FUNC_7(&VAR_12);

    FUNC_3((void *)VAR_10, VAR_11);
}
