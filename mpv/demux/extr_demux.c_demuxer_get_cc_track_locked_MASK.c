
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_stream {int default_track; TYPE_1__* ds; TYPE_2__* codec; } ;
struct TYPE_4__ {char* codec; } ;
struct TYPE_3__ {int ignore_eof; int in; struct sh_stream* cc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sh_stream*) ;
 struct sh_stream* FUNC_1 (int ) ;

__attribute__((used)) static struct sh_stream *FUNC_2(struct sh_stream *VAR_1)
{
    struct sh_stream *VAR_2 = VAR_1->ds->cc;

    if (!VAR_2) {
        VAR_2 = FUNC_1(VAR_0);
        if (!VAR_2)
            return ((void*)0);
        VAR_2->codec->codec = "eia_608";
        VAR_2->default_track = 1;
        VAR_1->ds->cc = VAR_2;
        FUNC_0(VAR_1->ds->in, VAR_2);
        VAR_2->ds->ignore_eof = 1;
    }

    return VAR_2;
}
