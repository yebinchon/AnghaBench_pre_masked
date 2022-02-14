
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {int member_0; } ;
struct PayloadsUDP {int dummy; } ;
struct PayloadUDP_Default {int length; int set_cookie; int source_port; scalar_t__ buf; int port; } ;


 struct PayloadsUDP* FUNC_0 (int,int) ;
 struct PayloadUDP_Default* VAR_0 ;
 int FUNC_1 (struct PayloadsUDP*,unsigned char const*,unsigned int,struct RangeList*,int ,int ) ;
 int FUNC_2 (struct RangeList*,int ,int ) ;
 int FUNC_3 (struct RangeList*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

struct PayloadsUDP *
FUNC_5(void)
{
    unsigned VAR_1;
    struct PayloadsUDP *VAR_2;
    struct PayloadUDP_Default *VAR_3 = VAR_0;

    VAR_2 = FUNC_0(1, sizeof(*VAR_2));




    for (VAR_1=0; VAR_3[VAR_1].length; VAR_1++) {

        struct RangeList VAR_4 = {0};
        unsigned VAR_5;


        FUNC_2(&VAR_4, VAR_3[VAR_1].port, VAR_3[VAR_1].port);

        VAR_5 = VAR_3[VAR_1].length;
        if (VAR_5 == 0xFFFFFFFF)
            VAR_5 = (unsigned)FUNC_4(VAR_3[VAR_1].buf);



        FUNC_1(VAR_2,
                         (const unsigned char*)VAR_3[VAR_1].buf,
                         VAR_5,
                         &VAR_4,
                         VAR_3[VAR_1].source_port,
                         VAR_3[VAR_1].set_cookie);

        FUNC_3(&VAR_4);
    }
    return VAR_2;
}
