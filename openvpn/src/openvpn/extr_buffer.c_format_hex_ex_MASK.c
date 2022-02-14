
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* uint8_t ;
struct gc_arena {int dummy; } ;
struct buffer {scalar_t__ data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct buffer FUNC_0 (size_t const,struct gc_arena*) ;
 int FUNC_1 (struct buffer*,char*) ;
 int FUNC_2 (struct buffer*,char*,char const* const) ;
 int FUNC_3 (int,char*) ;
 size_t FUNC_4 (char const*) ;

char *
FUNC_5(const uint8_t *VAR_4, int VAR_5, int VAR_6,
              unsigned int VAR_7, const char *VAR_8,
              struct gc_arena *VAR_9)
{
    const size_t VAR_10 = VAR_7 & VAR_1;
    const size_t VAR_11 = VAR_8 ? FUNC_4(VAR_8) : 0;
    FUNC_3(VAR_2 <= VAR_3, "Code assumes INT_MAX <= SIZE_MAX");
    const size_t VAR_12 = VAR_6 > 0 ? VAR_6 :
                           ((VAR_5 * 2) + ((VAR_5 / VAR_10) * VAR_11) + 2);

    struct buffer VAR_13 = FUNC_0(VAR_12, VAR_9);
    for (int VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14)
    {
        if (VAR_8 && VAR_14 && !(VAR_14 % VAR_10))
        {
            FUNC_2(&VAR_13, "%s", VAR_8);
        }
        if (VAR_7 & VAR_0)
        {
            FUNC_2(&VAR_13, "%02X", VAR_4[VAR_14]);
        }
        else
        {
            FUNC_2(&VAR_13, "%02x", VAR_4[VAR_14]);
        }
    }
    FUNC_1(&VAR_13, "[more...]");
    return (char *)VAR_13.data;
}
