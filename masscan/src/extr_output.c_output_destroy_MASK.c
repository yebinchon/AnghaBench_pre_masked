
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct Output* directory; scalar_t__ filesize; scalar_t__ period; } ;
struct TYPE_3__ {struct Output* stylesheet; } ;
struct Output {struct Output* filename; TYPE_2__ rotate; TYPE_1__ xml; scalar_t__ fp; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct Output*,scalar_t__) ;
 int FUNC_2 (struct Output*) ;
 int FUNC_3 (struct Output*,int) ;

void
FUNC_4(struct Output *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;



    if (VAR_0->rotate.period || VAR_0->rotate.filesize) {
        FUNC_0(1, "doing finale rotate\n");
        FUNC_3(VAR_0, 1);
    }




    if (VAR_0->fp)
        FUNC_1(VAR_0, VAR_0->fp);



    FUNC_2(VAR_0->xml.stylesheet);
    FUNC_2(VAR_0->rotate.directory);
    FUNC_2(VAR_0->filename);

    FUNC_2(VAR_0);
}
