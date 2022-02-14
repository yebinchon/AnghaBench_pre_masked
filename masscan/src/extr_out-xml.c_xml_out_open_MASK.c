
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* stylesheet; } ;
struct Output {TYPE_1__ xml; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct Output *VAR_0, FILE *VAR_1)
{


    FUNC_0(VAR_1, "<?xml version=\"1.0\"?>\r\n");
    FUNC_0(VAR_1, "<!-- masscan v1.0 scan -->\r\n");
    if (VAR_0->xml.stylesheet && VAR_0->xml.stylesheet[0]) {
        FUNC_0(VAR_1, "<?xml-stylesheet href=\"%s\" type=\"text/xsl\"?>\r\n",
            VAR_0->xml.stylesheet);
    }
    FUNC_0(VAR_1, "<nmaprun scanner=\"%s\" start=\"%u\" version=\"%s\"  xmloutputversion=\"%s\">\r\n",
        "masscan",
        (unsigned)FUNC_1(0),
        "1.0-BETA",
        "1.03"
        );
    FUNC_0(VAR_1, "<scaninfo type=\"%s\" protocol=\"%s\" />\r\n",
        "syn", "tcp" );
}
