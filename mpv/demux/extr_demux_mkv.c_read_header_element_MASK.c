
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct demuxer {int stream; int log; } ;
typedef int int64_t ;


 int VAR_0 ;







 int FUNC_0 (struct demuxer*) ;
 int FUNC_1 (struct demuxer*) ;
 int FUNC_2 (struct demuxer*) ;
 int FUNC_3 (struct demuxer*) ;
 int FUNC_4 (struct demuxer*) ;
 int FUNC_5 (struct demuxer*) ;
 int FUNC_6 (struct demuxer*) ;
 int FUNC_7 (int ,int,int ) ;
 scalar_t__ FUNC_8 (struct demuxer*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct demuxer *VAR_1, uint32_t VAR_2,
                               int64_t VAR_3)
{
    if (VAR_2 == VAR_0)
        return 0;

    if (FUNC_8(VAR_1, VAR_2, VAR_3))
        goto skip;

    switch(VAR_2) {
    case 131:
        return FUNC_3(VAR_1);
    case 128:
        return FUNC_6(VAR_1);
    case 132:
        return FUNC_2(VAR_1);
    case 129:
        return FUNC_5(VAR_1);
    case 130:
        return FUNC_4(VAR_1);
    case 133:
        return FUNC_1(VAR_1);
    case 134:
        return FUNC_0(VAR_1);
    }
skip:
    FUNC_7(VAR_1->log, -1, VAR_1->stream);
    return 0;
}
