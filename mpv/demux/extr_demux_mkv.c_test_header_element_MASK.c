
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct header_elem {int parsed; } ;
struct demuxer {int dummy; } ;
typedef int int64_t ;


 struct header_elem* FUNC_0 (struct demuxer*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct demuxer *VAR_0, uint32_t VAR_1,
                                int64_t VAR_2)
{
    struct header_elem *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (!VAR_3)
        return 0;
    if (VAR_3->parsed)
        return 1;
    VAR_3->parsed = 1;
    return 0;
}
