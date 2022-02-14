
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int protocol_binary_response_header ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ size; } ;
struct TYPE_7__ {scalar_t__ protocol; TYPE_1__ stats; } ;
typedef TYPE_2__ conn ;


 int FUNC_0 (char const*,int const,char const*,int const,TYPE_2__*) ;
 int FUNC_1 (char const*,int const,char const*,int const,TYPE_2__*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const uint16_t VAR_2,
                  const char *VAR_3, const uint32_t VAR_4,
                  const void *VAR_5)
{

    if (VAR_2 == 0 && VAR_4 > 0) {
        return ;
    }

    conn *VAR_6 = (conn*)VAR_5;

    if (VAR_6->protocol == VAR_0) {
        size_t VAR_7 = VAR_4 + VAR_2 + sizeof(protocol_binary_response_header);
        if (!FUNC_3(VAR_6, VAR_7)) {
            return ;
        }
        FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
    } else {
        size_t VAR_8 = VAR_4 + VAR_2 + 10;
        if (!FUNC_3(VAR_6, VAR_8)) {
            return ;
        }
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
    }

    FUNC_2(VAR_6->stats.offset <= VAR_6->stats.size);
}
