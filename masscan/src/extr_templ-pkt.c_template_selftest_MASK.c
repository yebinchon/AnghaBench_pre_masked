
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmplset ;
struct TemplateSet {TYPE_1__* pkts; } ;
struct TYPE_2__ {size_t proto; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct TemplateSet*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct TemplateSet*,unsigned char const*,unsigned char const*,int ,int ,int,int ) ;

int
FUNC_3(void)
{
    struct TemplateSet VAR_4[1];
    int VAR_5 = 0;

    FUNC_1(VAR_4, 0, sizeof(VAR_4[0]));
    FUNC_2(
            VAR_4,
            (const unsigned char*)"\x00\x11\x22\x33\x44\x55",
            (const unsigned char*)"\x66\x55\x44\x33\x22\x11",
            0,
            0,
            1,
            0
            );
    VAR_5 += VAR_4->pkts[VAR_1].proto != VAR_1;
    VAR_5 += VAR_4->pkts[VAR_2].proto != VAR_2;

    VAR_5 += VAR_4->pkts[VAR_0].proto != VAR_0;



    if (VAR_5)
        FUNC_0(VAR_3, "template: failed\n");
    return VAR_5;
}
